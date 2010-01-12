// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "cvcontourscanner.pypp.hpp"

namespace bp = boost::python;

void register_CvContourScanner_class(){

    bp::class_< _CvContourScanner >( "CvContourScanner" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< _CvContourScanner >() );

}
