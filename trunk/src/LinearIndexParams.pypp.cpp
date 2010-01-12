// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "linearindexparams.pypp.hpp"

namespace bp = boost::python;

struct LinearIndexParams_wrapper : cv::flann::LinearIndexParams, bp::wrapper< cv::flann::LinearIndexParams > {

    LinearIndexParams_wrapper(cv::flann::LinearIndexParams const & arg )
    : cv::flann::LinearIndexParams( arg )
      , bp::wrapper< cv::flann::LinearIndexParams >(){
        // copy constructor
        
    }

    LinearIndexParams_wrapper( )
    : cv::flann::LinearIndexParams( )
      , bp::wrapper< cv::flann::LinearIndexParams >(){
        // null constructor
    
    }

    virtual ::flann::Index * createIndex( ::cv::Mat const & dataset ) const  {
        if( bp::override func_createIndex = this->get_override( "createIndex" ) )
            return func_createIndex( boost::ref(dataset) );
        else{
            return this->cv::flann::LinearIndexParams::createIndex( boost::ref(dataset) );
        }
    }
    
    ::flann::Index * default_createIndex( ::cv::Mat const & dataset ) const  {
        return cv::flann::LinearIndexParams::createIndex( boost::ref(dataset) );
    }

};

void register_LinearIndexParams_class(){

    bp::class_< LinearIndexParams_wrapper >( "LinearIndexParams", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::flann::LinearIndexParams >() )    
        .def( 
            "createIndex"
            , (::flann::Index * ( ::cv::flann::LinearIndexParams::* )( ::cv::Mat const & ) const)(&::cv::flann::LinearIndexParams::createIndex)
            , (::flann::Index * ( LinearIndexParams_wrapper::* )( ::cv::Mat const & ) const)(&LinearIndexParams_wrapper::default_createIndex)
            , ( bp::arg("dataset") )
            , bp::return_value_policy< bp::reference_existing_object >() );

}
