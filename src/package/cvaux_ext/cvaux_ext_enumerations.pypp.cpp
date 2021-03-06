// This file has been generated by Py++.

#include "boost/python.hpp"
#include "cvaux_wrapper.hpp"
#include "cvaux_ext_enumerations.pypp.hpp"

namespace bp = boost::python;

void register_enumerations(){

    bp::enum_< CV_FACE_ELEMENTS>("CV_FACE_ELEMENTS")
        .value("CV_FACE_MOUTH", CV_FACE_MOUTH)
        .value("CV_FACE_LEFT_EYE", CV_FACE_LEFT_EYE)
        .value("CV_FACE_RIGHT_EYE", CV_FACE_RIGHT_EYE)
        .export_values()
        ;

}
