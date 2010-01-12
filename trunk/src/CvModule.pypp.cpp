// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "cvmodule.pypp.hpp"

namespace bp = boost::python;

struct CvModule_wrapper : CvModule, bp::wrapper< CvModule > {

    CvModule_wrapper(CvModule const & arg )
    : CvModule( arg )
      , bp::wrapper< CvModule >(){
        // copy constructor
        
    }

    CvModule_wrapper(::CvModuleInfo * _info )
    : CvModule( boost::python::ptr(_info) )
      , bp::wrapper< CvModule >(){
        // constructor
    
    }

    static bp::object get_info( ::CvModule const & inst ){        
        return inst.info? bp::object(inst.info): bp::object();
    }

    static bp::object get_first( ::CvModule const & inst ){        
        return inst.first? bp::object(inst.first): bp::object();
    }

    static bp::object get_last( ::CvModule const & inst ){        
        return inst.last? bp::object(inst.last): bp::object();
    }

};

void register_CvModule_class(){

    { //::CvModule
        typedef bp::class_< CvModule_wrapper > CvModule_exposer_t;
        CvModule_exposer_t CvModule_exposer = CvModule_exposer_t( "CvModule", bp::init< CvModuleInfo * >(( bp::arg("_info") )) );
        bp::scope CvModule_scope( CvModule_exposer );
        CvModule_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvModule >() );
        bp::implicitly_convertible< CvModuleInfo *, CvModule >();
        CvModule_exposer.add_property( "info", bp::make_function(&::CvModule_wrapper::get_info) );
        CvModule_exposer.add_property( "first", bp::make_function(&::CvModule_wrapper::get_first) );
        CvModule_exposer.add_property( "last", bp::make_function(&::CvModule_wrapper::get_last) );
    }

}
