// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "cvparamgrid.pypp.hpp"

namespace bp = boost::python;

void register_CvParamGrid_class(){

    { //::CvParamGrid
        typedef bp::class_< CvParamGrid > CvParamGrid_exposer_t;
        CvParamGrid_exposer_t CvParamGrid_exposer = CvParamGrid_exposer_t( "CvParamGrid", bp::init< >() );
        bp::scope CvParamGrid_scope( CvParamGrid_exposer );
        CvParamGrid_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvParamGrid >() );
        bp::scope().attr("SVM_C") = (int)CvParamGrid::SVM_C;
        bp::scope().attr("SVM_GAMMA") = (int)CvParamGrid::SVM_GAMMA;
        bp::scope().attr("SVM_P") = (int)CvParamGrid::SVM_P;
        bp::scope().attr("SVM_NU") = (int)CvParamGrid::SVM_NU;
        bp::scope().attr("SVM_COEF") = (int)CvParamGrid::SVM_COEF;
        bp::scope().attr("SVM_DEGREE") = (int)CvParamGrid::SVM_DEGREE;
        CvParamGrid_exposer.def( bp::init< double, double, double >(( bp::arg("_min_val"), bp::arg("_max_val"), bp::arg("log_step") )) );
        { //::CvParamGrid::check
        
            typedef bool ( ::CvParamGrid::*check_function_type )(  ) const;
            
            CvParamGrid_exposer.def( 
                "check"
                , check_function_type( &::CvParamGrid::check ) );
        
        }
        CvParamGrid_exposer.def_readwrite( "max_val", &CvParamGrid::max_val );
        CvParamGrid_exposer.def_readwrite( "min_val", &CvParamGrid::min_val );
        CvParamGrid_exposer.def_readwrite( "step", &CvParamGrid::step );
    }

}
