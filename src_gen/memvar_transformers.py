#!/usr/bin/env python
# PyOpenCV - A Python wrapper for OpenCV 2.x using Boost.Python and NumPy

# Copyright (c) 2009, Minh-Tri Pham
# All rights reserved.

# Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

#    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
#    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
#    * Neither the name of pyopencv's copyright holders nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

#THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

# For further inquiries, please contact Minh-Tri Pham at pmtri80@gmail.com.
# ----------------------------------------------------------------------------


from pygccxml import declarations as _D
from pyplusplus import code_repository
import pyplusplus.function_transformers.transformers as _T
from pyplusplus.decl_wrappers import call_policies as CP

import common


# -----------------------------------------------------------------------------------------------
# Some functions
# -----------------------------------------------------------------------------------------------

class size_t_t( _D.fundamental_t ):
    """represents size_t type"""
    CPPNAME = 'size_t'
    def __init__( self ):
        _D.fundamental_t.__init__( self, size_t_t.CPPNAME )


def set_array_item_type_as_size_t(klass, member_name):
    _D.remove_cv(_D.remove_alias(klass.var(member_name).type)).base = size_t_t()

    
def expose_CvSeq_members(z, FT):
    for t in ('h_prev', 'h_next', 'v_prev', 'v_next', 'free_blocks', 'first'):
        FT.expose_member_as_pointee(z, t)
    for t in ('block_max', 'ptr'):
        FT.expose_member_as_str(z, t)

def expose_CvSet_members(z, FT):
    expose_CvSeq_members(z, FT)
    FT.expose_member_as_pointee(z, 'free_elems')

def expose_CvSeqReader_members(z, FT):
    for t in ('seq', 'block'):
        FT.expose_member_as_pointee(z, t)
    for t in ('ptr', 'block_min', 'block_max', 'prev_elem'):
        FT.expose_member_as_str(z, t)

def expose_CvGraph_members(z, FT):
    expose_CvSet_members(z, FT)
    FT.expose_member_as_pointee(z, 'edges')    
    
def expose_member_as_MemStorage(klass, member_name):
    klass.var(member_name).exclude()
    klass.add_declaration_code('''
static cv::MemStorage get_CLASS_NAME_MEMBER_NAME(CLASS_TYPE const &inst) { return cv::MemStorage(inst.MEMBER_NAME); }
    '''.replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias).replace("CLASS_TYPE", klass.pds))
    klass.add_registration_code('''add_property( "MEMBER_NAME", bp::make_function(&::get_CLASS_NAME_MEMBER_NAME, bp::with_custodian_and_ward_postcall<0, 1>()) )'''.replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias))
        
def expose_member_as_FixType(dst_type_pds, klass, member_name):
    klass.var(member_name).exclude()
    klass.add_declaration_code('''
static DST_TYPE *get_CLASS_NAME_MEMBER_NAME(CLASS_TYPE const &inst) { return (DST_TYPE *)(&inst.MEMBER_NAME); }
    '''.replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias)\
        .replace("CLASS_TYPE", klass.pds).replace("DST_TYPE", dst_type_pds))
    klass.add_registration_code('''add_property( "MEMBER_NAME", bp::make_function(&::get_CLASS_NAME_MEMBER_NAME, bp::return_internal_reference<>()) )'''\
        .replace("CLASS_NAME", klass.alias).replace("MEMBER_NAME", member_name))
        
def expose_member_as_Mat(klass, member_name, is_CvMat_ptr=True, header_management_policy=0):
    """Expose a member as a cv::Mat.
    
    Parameters:
        is_CvMat_ptr : bool
            whether the member is a pointer to a CvMat or a pointer to an 
            IplImage
        header_management_policy : int
            0 = header is read-only. The class manages the life cycle of the 
                member.
            1 = header is writable. However, it is assumed that the class 
                only uses the member as a reference to an external image. 
                Additionally, when the user changes the image header, (s)he 
                should notify the instance containing the member by calling
                validate_MEMBER_NAME(). Otherwise, the instance would not
                know the change and thus would not update its internal
                pointer variables accordingly.
    """
    klass.var(member_name).exclude()
    CvMat = 'CvMat' if is_CvMat_ptr else 'IplImage'
    if header_management_policy > 0:
        klass.add_wrapper_code('''
    cv::Mat MEMBER_NAME_as_Mat;
    CVMAT MEMBER_NAME_as_CvMat;
    void update_MEMBER_NAME()
    {
        if(MEMBER_NAME_as_Mat.empty()) MEMBER_NAME = 0; // NULL pointer
        else
        {
            MEMBER_NAME_as_CVMAT = MEMBER_NAME_as_Mat; // to ensure MEMBER_NAME points to a valid CVMAT
            MEMBER_NAME = &MEMBER_NAME_as_CVMAT;
        }
    }
    void set_MEMBER_NAME(cv::Mat const &new_MEMBER_NAME)
    {
        MEMBER_NAME_as_Mat = new_MEMBER_NAME; // to keep a reference to MEMBER_NAME
        update_MEMBER_NAME();
    }
    cv::Mat & get_CLASS_NAME_MEMBER_NAME()
    {
        update_MEMBER_NAME();
        return MEMBER_NAME_as_Mat;
    }

        '''.replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias)\
            .replace("CLASS_TYPE", klass.decl_string).replace("CVMAT", CvMat))
        klass.add_registration_code('''add_property( "MEMBER_NAME", bp::make_function(&CLASS_TYPE_wrapper::get_CLASS_NAME_MEMBER_NAME, bp::return_internal_reference<>()),
            &CLASS_TYPE_wrapper::set_MEMBER_NAME)'''.replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias)\
            .replace("CLASS_TYPE", klass.decl_string))
        klass.add_registration_code('''def( "validate_MEMBER_NAME", &CLASS_TYPE_wrapper::update_MEMBER_NAME, "Updates the internal C pointer that represents 'MEMBER_NAME'. The function should be called every time the header of 'MEMBER_NAME' is modified by the user." )'''.replace("MEMBER_NAME", member_name).replace("CLASS_TYPE", klass.decl_string))
    else:
        klass.add_declaration_code('''
static cv::Mat get_CLASS_NAME_MEMBER_NAME(CLASS_TYPE const &inst) { return inst.MEMBER_NAME? cv::Mat(inst.MEMBER_NAME): cv::Mat(); }
        '''.replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias)\
            .replace("CLASS_TYPE", klass.decl_string).replace("CVMAT", CvMat))
        klass.add_registration_code('''add_property( "MEMBER_NAME", &::get_CLASS_NAME_MEMBER_NAME )'''.replace("MEMBER_NAME", member_name)\
            .replace("CLASS_NAME", klass.alias).replace("CLASS_TYPE", klass.decl_string))
        
def expose_array_member_as_Mat(klass, member_name, member_size_name, extra="0"):
    klass.include_files.append( "opencv_converters.hpp" )
    klass.var(member_name).exclude()
    # klass.var(member_size_name).exclude()
    klass.add_declaration_code('''
static cv::Mat get_CLASS_NAME_MEMBER_NAME(CLASS_TYPE const &inst)
{
    cv::Mat MEMBER_NAME2;
    convert_from_array_of_T_to_Mat(inst.MEMBER_NAME, inst.MEMBER_SIZE_NAME+EXTRA, MEMBER_NAME2);
    return MEMBER_NAME2;
}

    '''.replace("MEMBER_NAME", member_name).replace("MEMBER_SIZE_NAME", member_size_name)\
        .replace("CLASS_NAME", klass.alias).replace("CLASS_TYPE", klass.decl_string).replace("EXTRA", extra))
    klass.add_registration_code('''add_property( "MEMBER_NAME", &::get_CLASS_NAME_MEMBER_NAME)'''.replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias)) # TODO: make MEMBER dependent on KLASS
    
def expose_member_as_str(klass, member_name):
    klass.include_files.append( "boost/python/object.hpp" )
    klass.include_files.append( "boost/python/str.hpp" )
    klass.var(member_name).exclude()
    klass.add_declaration_code('''
static bp::object get_CLASS_NAME_MEMBER_NAME( CLASS_TYPE const & inst ){        
    return inst.MEMBER_NAME? bp::str(inst.MEMBER_NAME): bp::object();
}

    '''.replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias)\
        .replace("CLASS_TYPE", klass.decl_string))
    klass.add_registration_code('add_property( "MEMBER_NAME", &::get_CLASS_NAME_MEMBER_NAME )' \
        .replace("CLASS_NAME", klass.alias).replace("MEMBER_NAME", member_name))
    
def expose_member_as_pointee(klass, member_name):
    klass.include_files.append( "boost/python/object.hpp" )
    z = klass.var(member_name)
    z.exclude()
    klass.add_declaration_code("static MEMBER_TYPE get_CLASS_NAME_MEMBER_NAME( CLASS_TYPE const & inst ) { return inst.MEMBER_NAME; }"\
        .replace("MEMBER_NAME", member_name).replace("CLASS_TYPE", klass.decl_string)\
        .replace("MEMBER_TYPE", z.type.decl_string).replace("CLASS_NAME", klass.alias))
    klass.add_registration_code('''
    add_property( "MEMBER_NAME", bp::make_function(&::get_CLASS_NAME_MEMBER_NAME, bp::return_internal_reference<>()) )
    '''.replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias).replace("CLASS_TYPE", klass.decl_string))
    
def expose_member_as_array_of_pointees(klass, member_name, array_size):
    klass.include_files.append( "boost/python/object.hpp")
    klass.include_files.append( "boost/python/list.hpp")
    klass.include_files.append( "boost/python/tuple.hpp")
    klass.var(member_name).exclude() # TODO: with_custodian_and_ward for each pointee of the array
    klass.add_declaration_code('''
static bp::object get_CLASS_NAME_MEMBER_NAME( CLASS_TYPE const & inst ){
    bp::list l;
    for(int i = 0; i < ARRAY_SIZE; ++i)
        l.append(inst.MEMBER_NAME[i]);
    return bp::tuple(l);
}

    '''.replace("MEMBER_NAME", member_name) \
        .replace("CLASS_NAME", klass.alias).replace("CLASS_TYPE", klass.pds) \
        .replace("ARRAY_SIZE", str(array_size)))
    klass.add_registration_code('add_property( "MEMBER_NAME", &::get_CLASS_NAME_MEMBER_NAME )' \
        .replace("CLASS_NAME", klass.alias).replace("MEMBER_NAME", member_name))
    

def expose_member_as_ndarray1d(klass, member_name, array_size):
    klass.include_files.append( "ndarray.hpp")
    z = klass.var(member_name)
    z.exclude()
    elem_type = _D.array_item_type(z.type) if _D.is_array(z.type) else _D.remove_pointer(z.type)
    klass.add_declaration_code('''
static sdcpp::ndarray CLASS_NAME_get_CLASS_NAME_MEMBER_NAME( CLASS_TYPE const & inst ){
    return sdcpp::new_ndarray1d(ARRAY_SIZE, sdcpp::dtypeof< ELEM_TYPE >(), (void *)(inst.MEMBER_NAME));
}

    '''.replace("MEMBER_NAME", member_name) \
        .replace("CLASS_NAME", klass.alias) \
        .replace("CLASS_TYPE", klass.pds) \
        .replace("ELEM_TYPE", elem_type.partial_decl_string) \
        .replace("ARRAY_SIZE", str(array_size)))
    klass.add_registration_code('add_property( "MEMBER_NAME", &::CLASS_NAME_get_CLASS_NAME_MEMBER_NAME )' \
        .replace("MEMBER_NAME", member_name).replace("CLASS_NAME", klass.alias))
    

# Note: buffer does not support weak references -> no lifetime management
# URL: http://mail.python.org/pipermail/cplusplus-sig/2009-January/014184.html
# "Actually, this isn't all that useful.  The problem is, you want to use 
# with_custodian_and_ward_postcall<0,1> on this.  But you can't because buffer 
# object doesn't support weak references.  So while the above can provide a 
# buffer interface, it has no idea of lifetime management."
def add_data_interface(klass, data_pointer_code, data_size_code, members_to_exclude=[]):
    klass.include_files.append( "opencv_converters.hpp" )
    for z in members_to_exclude:
        klass.decls(z).exclude()
    klass.add_declaration_code('''
static bp::object CLASS_NAME_get_data(CLASS_TYPE const &inst)
{
    return sdcpp::get_new_object(
        PyBuffer_FromReadWriteMemory(
            (void*)(DATA_POINTER_CODE), 
            (size_t)(DATA_SIZE_CODE)));
}

    '''.replace("CLASS_NAME", klass.alias).replace("CLASS_TYPE", klass.pds)\
        .replace("DATA_POINTER_CODE", data_pointer_code)\
        .replace("DATA_SIZE_CODE", data_size_code))
    klass.add_registration_code('add_property("data", &::CLASS_NAME_get_data)'.replace("CLASS_NAME", klass.alias))
    
    
    
# -----------------------------------------------------------------------------------------------
# Beautify all member variables of a class
# -----------------------------------------------------------------------------------------------
def beautify_memvars(klass):
    try:
        zz = klass.vars()
    except RuntimeError:
        zz = []
    
    for z in [z for z in zz if not z.ignore and z.access_type=='public']:
        pds = common.unique_pds(z.type.partial_decl_string)
        if pds=='CvMemStorage *':
            expose_member_as_MemStorage(klass, z.name)
        elif pds in ['CvMat *', 'CvArr *']:
            expose_member_as_Mat(klass, z.name, True, 1)
        elif pds in ['CvMat const *', 'CvArr const *']:
            expose_member_as_Mat(klass, z.name, True, 0)
        elif pds=='IplImage *':
            expose_member_as_Mat(klass, z.name, False, 1)
        elif pds=='IplImage const *':
            expose_member_as_Mat(klass, z.name, False, 0)
        elif pds in common.c2cpp:
            expose_member_as_FixType(common.c2cpp[pds], klass, z.name)
        elif pds=='CvSeq *' or pds=='CvSet *':
            expose_member_as_pointee(klass, z.name)
