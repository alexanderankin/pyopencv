// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "__dummy_struct.pypp.hpp"

namespace bp = boost::python;

static inline ::CvScalar cvt_Vec4d_CvScalar(::cv::Vec< double, 4 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec3d_CvScalar(::cv::Vec< double, 3 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec2d_CvScalar(::cv::Vec< double, 2 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec4f_CvScalar(::cv::Vec< float, 4 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec3f_CvScalar(::cv::Vec< float, 3 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec2f_CvScalar(::cv::Vec< float, 2 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec4i_CvScalar(::cv::Vec< int, 4 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec3i_CvScalar(::cv::Vec< int, 3 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec2i_CvScalar(::cv::Vec< int, 2 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec4w_CvScalar(::cv::Vec< unsigned short, 4 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec3w_CvScalar(::cv::Vec< unsigned short, 3 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec2w_CvScalar(::cv::Vec< unsigned short, 2 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec4s_CvScalar(::cv::Vec< short, 4 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec3s_CvScalar(::cv::Vec< short, 3 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec2s_CvScalar(::cv::Vec< short, 2 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec4b_CvScalar(::cv::Vec< unsigned char, 4 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec3b_CvScalar(::cv::Vec< unsigned char, 3 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec2b_CvScalar(::cv::Vec< unsigned char, 2 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec6d_CvScalar(::cv::Vec< double, 6 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvScalar cvt_Vec6f_CvScalar(::cv::Vec< float, 6 > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::cv::Vec<short, 2> cvt_Vec2b_Vec2s(::cv::Vec<unsigned char, 2> const &inst)
{
    return inst.operator ::cv::Vec<short, 2>();
}

static inline ::cv::Vec<unsigned short, 2> cvt_Vec2b_Vec2w(::cv::Vec<unsigned char, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 2>();
}

static inline ::cv::Vec<int, 2> cvt_Vec2b_Vec2i(::cv::Vec<unsigned char, 2> const &inst)
{
    return inst.operator ::cv::Vec<int, 2>();
}

static inline ::cv::Vec<float, 2> cvt_Vec2b_Vec2f(::cv::Vec<unsigned char, 2> const &inst)
{
    return inst.operator ::cv::Vec<float, 2>();
}

static inline ::cv::Vec<double, 2> cvt_Vec2b_Vec2d(::cv::Vec<unsigned char, 2> const &inst)
{
    return inst.operator ::cv::Vec<double, 2>();
}

static inline ::cv::Vec<unsigned char, 2> cvt_Vec2s_Vec2b(::cv::Vec<short, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 2>();
}

static inline ::cv::Vec<unsigned short, 2> cvt_Vec2s_Vec2w(::cv::Vec<short, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 2>();
}

static inline ::cv::Vec<int, 2> cvt_Vec2s_Vec2i(::cv::Vec<short, 2> const &inst)
{
    return inst.operator ::cv::Vec<int, 2>();
}

static inline ::cv::Vec<float, 2> cvt_Vec2s_Vec2f(::cv::Vec<short, 2> const &inst)
{
    return inst.operator ::cv::Vec<float, 2>();
}

static inline ::cv::Vec<double, 2> cvt_Vec2s_Vec2d(::cv::Vec<short, 2> const &inst)
{
    return inst.operator ::cv::Vec<double, 2>();
}

static inline ::cv::Vec<unsigned char, 2> cvt_Vec2w_Vec2b(::cv::Vec<unsigned short, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 2>();
}

static inline ::cv::Vec<short, 2> cvt_Vec2w_Vec2s(::cv::Vec<unsigned short, 2> const &inst)
{
    return inst.operator ::cv::Vec<short, 2>();
}

static inline ::cv::Vec<int, 2> cvt_Vec2w_Vec2i(::cv::Vec<unsigned short, 2> const &inst)
{
    return inst.operator ::cv::Vec<int, 2>();
}

static inline ::cv::Vec<float, 2> cvt_Vec2w_Vec2f(::cv::Vec<unsigned short, 2> const &inst)
{
    return inst.operator ::cv::Vec<float, 2>();
}

static inline ::cv::Vec<double, 2> cvt_Vec2w_Vec2d(::cv::Vec<unsigned short, 2> const &inst)
{
    return inst.operator ::cv::Vec<double, 2>();
}

static inline ::cv::Vec<unsigned char, 2> cvt_Vec2i_Vec2b(::cv::Vec<int, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 2>();
}

static inline ::cv::Vec<short, 2> cvt_Vec2i_Vec2s(::cv::Vec<int, 2> const &inst)
{
    return inst.operator ::cv::Vec<short, 2>();
}

static inline ::cv::Vec<unsigned short, 2> cvt_Vec2i_Vec2w(::cv::Vec<int, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 2>();
}

static inline ::cv::Vec<float, 2> cvt_Vec2i_Vec2f(::cv::Vec<int, 2> const &inst)
{
    return inst.operator ::cv::Vec<float, 2>();
}

static inline ::cv::Vec<double, 2> cvt_Vec2i_Vec2d(::cv::Vec<int, 2> const &inst)
{
    return inst.operator ::cv::Vec<double, 2>();
}

static inline ::cv::Vec<unsigned char, 2> cvt_Vec2f_Vec2b(::cv::Vec<float, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 2>();
}

static inline ::cv::Vec<short, 2> cvt_Vec2f_Vec2s(::cv::Vec<float, 2> const &inst)
{
    return inst.operator ::cv::Vec<short, 2>();
}

static inline ::cv::Vec<unsigned short, 2> cvt_Vec2f_Vec2w(::cv::Vec<float, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 2>();
}

static inline ::cv::Vec<int, 2> cvt_Vec2f_Vec2i(::cv::Vec<float, 2> const &inst)
{
    return inst.operator ::cv::Vec<int, 2>();
}

static inline ::cv::Vec<double, 2> cvt_Vec2f_Vec2d(::cv::Vec<float, 2> const &inst)
{
    return inst.operator ::cv::Vec<double, 2>();
}

static inline ::cv::Vec<unsigned char, 2> cvt_Vec2d_Vec2b(::cv::Vec<double, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 2>();
}

static inline ::cv::Vec<short, 2> cvt_Vec2d_Vec2s(::cv::Vec<double, 2> const &inst)
{
    return inst.operator ::cv::Vec<short, 2>();
}

static inline ::cv::Vec<unsigned short, 2> cvt_Vec2d_Vec2w(::cv::Vec<double, 2> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 2>();
}

static inline ::cv::Vec<int, 2> cvt_Vec2d_Vec2i(::cv::Vec<double, 2> const &inst)
{
    return inst.operator ::cv::Vec<int, 2>();
}

static inline ::cv::Vec<float, 2> cvt_Vec2d_Vec2f(::cv::Vec<double, 2> const &inst)
{
    return inst.operator ::cv::Vec<float, 2>();
}

static inline ::cv::Vec<short, 3> cvt_Vec3b_Vec3s(::cv::Vec<unsigned char, 3> const &inst)
{
    return inst.operator ::cv::Vec<short, 3>();
}

static inline ::cv::Vec<unsigned short, 3> cvt_Vec3b_Vec3w(::cv::Vec<unsigned char, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 3>();
}

static inline ::cv::Vec<int, 3> cvt_Vec3b_Vec3i(::cv::Vec<unsigned char, 3> const &inst)
{
    return inst.operator ::cv::Vec<int, 3>();
}

static inline ::cv::Vec<float, 3> cvt_Vec3b_Vec3f(::cv::Vec<unsigned char, 3> const &inst)
{
    return inst.operator ::cv::Vec<float, 3>();
}

static inline ::cv::Vec<double, 3> cvt_Vec3b_Vec3d(::cv::Vec<unsigned char, 3> const &inst)
{
    return inst.operator ::cv::Vec<double, 3>();
}

static inline ::cv::Vec<unsigned char, 3> cvt_Vec3s_Vec3b(::cv::Vec<short, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 3>();
}

static inline ::cv::Vec<unsigned short, 3> cvt_Vec3s_Vec3w(::cv::Vec<short, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 3>();
}

static inline ::cv::Vec<int, 3> cvt_Vec3s_Vec3i(::cv::Vec<short, 3> const &inst)
{
    return inst.operator ::cv::Vec<int, 3>();
}

static inline ::cv::Vec<float, 3> cvt_Vec3s_Vec3f(::cv::Vec<short, 3> const &inst)
{
    return inst.operator ::cv::Vec<float, 3>();
}

static inline ::cv::Vec<double, 3> cvt_Vec3s_Vec3d(::cv::Vec<short, 3> const &inst)
{
    return inst.operator ::cv::Vec<double, 3>();
}

static inline ::cv::Vec<unsigned char, 3> cvt_Vec3w_Vec3b(::cv::Vec<unsigned short, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 3>();
}

static inline ::cv::Vec<short, 3> cvt_Vec3w_Vec3s(::cv::Vec<unsigned short, 3> const &inst)
{
    return inst.operator ::cv::Vec<short, 3>();
}

static inline ::cv::Vec<int, 3> cvt_Vec3w_Vec3i(::cv::Vec<unsigned short, 3> const &inst)
{
    return inst.operator ::cv::Vec<int, 3>();
}

static inline ::cv::Vec<float, 3> cvt_Vec3w_Vec3f(::cv::Vec<unsigned short, 3> const &inst)
{
    return inst.operator ::cv::Vec<float, 3>();
}

static inline ::cv::Vec<double, 3> cvt_Vec3w_Vec3d(::cv::Vec<unsigned short, 3> const &inst)
{
    return inst.operator ::cv::Vec<double, 3>();
}

static inline ::cv::Vec<unsigned char, 3> cvt_Vec3i_Vec3b(::cv::Vec<int, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 3>();
}

static inline ::cv::Vec<short, 3> cvt_Vec3i_Vec3s(::cv::Vec<int, 3> const &inst)
{
    return inst.operator ::cv::Vec<short, 3>();
}

static inline ::cv::Vec<unsigned short, 3> cvt_Vec3i_Vec3w(::cv::Vec<int, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 3>();
}

static inline ::cv::Vec<float, 3> cvt_Vec3i_Vec3f(::cv::Vec<int, 3> const &inst)
{
    return inst.operator ::cv::Vec<float, 3>();
}

static inline ::cv::Vec<double, 3> cvt_Vec3i_Vec3d(::cv::Vec<int, 3> const &inst)
{
    return inst.operator ::cv::Vec<double, 3>();
}

static inline ::cv::Vec<unsigned char, 3> cvt_Vec3f_Vec3b(::cv::Vec<float, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 3>();
}

static inline ::cv::Vec<short, 3> cvt_Vec3f_Vec3s(::cv::Vec<float, 3> const &inst)
{
    return inst.operator ::cv::Vec<short, 3>();
}

static inline ::cv::Vec<unsigned short, 3> cvt_Vec3f_Vec3w(::cv::Vec<float, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 3>();
}

static inline ::cv::Vec<int, 3> cvt_Vec3f_Vec3i(::cv::Vec<float, 3> const &inst)
{
    return inst.operator ::cv::Vec<int, 3>();
}

static inline ::cv::Vec<double, 3> cvt_Vec3f_Vec3d(::cv::Vec<float, 3> const &inst)
{
    return inst.operator ::cv::Vec<double, 3>();
}

static inline ::cv::Vec<unsigned char, 3> cvt_Vec3d_Vec3b(::cv::Vec<double, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 3>();
}

static inline ::cv::Vec<short, 3> cvt_Vec3d_Vec3s(::cv::Vec<double, 3> const &inst)
{
    return inst.operator ::cv::Vec<short, 3>();
}

static inline ::cv::Vec<unsigned short, 3> cvt_Vec3d_Vec3w(::cv::Vec<double, 3> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 3>();
}

static inline ::cv::Vec<int, 3> cvt_Vec3d_Vec3i(::cv::Vec<double, 3> const &inst)
{
    return inst.operator ::cv::Vec<int, 3>();
}

static inline ::cv::Vec<float, 3> cvt_Vec3d_Vec3f(::cv::Vec<double, 3> const &inst)
{
    return inst.operator ::cv::Vec<float, 3>();
}

static inline ::cv::Vec<short, 4> cvt_Vec4b_Vec4s(::cv::Vec<unsigned char, 4> const &inst)
{
    return inst.operator ::cv::Vec<short, 4>();
}

static inline ::cv::Vec<unsigned short, 4> cvt_Vec4b_Vec4w(::cv::Vec<unsigned char, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 4>();
}

static inline ::cv::Vec<int, 4> cvt_Vec4b_Vec4i(::cv::Vec<unsigned char, 4> const &inst)
{
    return inst.operator ::cv::Vec<int, 4>();
}

static inline ::cv::Vec<float, 4> cvt_Vec4b_Vec4f(::cv::Vec<unsigned char, 4> const &inst)
{
    return inst.operator ::cv::Vec<float, 4>();
}

static inline ::cv::Vec<double, 4> cvt_Vec4b_Vec4d(::cv::Vec<unsigned char, 4> const &inst)
{
    return inst.operator ::cv::Vec<double, 4>();
}

static inline ::cv::Vec<unsigned char, 4> cvt_Vec4s_Vec4b(::cv::Vec<short, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 4>();
}

static inline ::cv::Vec<unsigned short, 4> cvt_Vec4s_Vec4w(::cv::Vec<short, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 4>();
}

static inline ::cv::Vec<int, 4> cvt_Vec4s_Vec4i(::cv::Vec<short, 4> const &inst)
{
    return inst.operator ::cv::Vec<int, 4>();
}

static inline ::cv::Vec<float, 4> cvt_Vec4s_Vec4f(::cv::Vec<short, 4> const &inst)
{
    return inst.operator ::cv::Vec<float, 4>();
}

static inline ::cv::Vec<double, 4> cvt_Vec4s_Vec4d(::cv::Vec<short, 4> const &inst)
{
    return inst.operator ::cv::Vec<double, 4>();
}

static inline ::cv::Vec<unsigned char, 4> cvt_Vec4w_Vec4b(::cv::Vec<unsigned short, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 4>();
}

static inline ::cv::Vec<short, 4> cvt_Vec4w_Vec4s(::cv::Vec<unsigned short, 4> const &inst)
{
    return inst.operator ::cv::Vec<short, 4>();
}

static inline ::cv::Vec<int, 4> cvt_Vec4w_Vec4i(::cv::Vec<unsigned short, 4> const &inst)
{
    return inst.operator ::cv::Vec<int, 4>();
}

static inline ::cv::Vec<float, 4> cvt_Vec4w_Vec4f(::cv::Vec<unsigned short, 4> const &inst)
{
    return inst.operator ::cv::Vec<float, 4>();
}

static inline ::cv::Vec<double, 4> cvt_Vec4w_Vec4d(::cv::Vec<unsigned short, 4> const &inst)
{
    return inst.operator ::cv::Vec<double, 4>();
}

static inline ::cv::Vec<unsigned char, 4> cvt_Vec4i_Vec4b(::cv::Vec<int, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 4>();
}

static inline ::cv::Vec<short, 4> cvt_Vec4i_Vec4s(::cv::Vec<int, 4> const &inst)
{
    return inst.operator ::cv::Vec<short, 4>();
}

static inline ::cv::Vec<unsigned short, 4> cvt_Vec4i_Vec4w(::cv::Vec<int, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 4>();
}

static inline ::cv::Vec<float, 4> cvt_Vec4i_Vec4f(::cv::Vec<int, 4> const &inst)
{
    return inst.operator ::cv::Vec<float, 4>();
}

static inline ::cv::Vec<double, 4> cvt_Vec4i_Vec4d(::cv::Vec<int, 4> const &inst)
{
    return inst.operator ::cv::Vec<double, 4>();
}

static inline ::cv::Vec<unsigned char, 4> cvt_Vec4f_Vec4b(::cv::Vec<float, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 4>();
}

static inline ::cv::Vec<short, 4> cvt_Vec4f_Vec4s(::cv::Vec<float, 4> const &inst)
{
    return inst.operator ::cv::Vec<short, 4>();
}

static inline ::cv::Vec<unsigned short, 4> cvt_Vec4f_Vec4w(::cv::Vec<float, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 4>();
}

static inline ::cv::Vec<int, 4> cvt_Vec4f_Vec4i(::cv::Vec<float, 4> const &inst)
{
    return inst.operator ::cv::Vec<int, 4>();
}

static inline ::cv::Vec<double, 4> cvt_Vec4f_Vec4d(::cv::Vec<float, 4> const &inst)
{
    return inst.operator ::cv::Vec<double, 4>();
}

static inline ::cv::Vec<unsigned char, 4> cvt_Vec4d_Vec4b(::cv::Vec<double, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned char, 4>();
}

static inline ::cv::Vec<short, 4> cvt_Vec4d_Vec4s(::cv::Vec<double, 4> const &inst)
{
    return inst.operator ::cv::Vec<short, 4>();
}

static inline ::cv::Vec<unsigned short, 4> cvt_Vec4d_Vec4w(::cv::Vec<double, 4> const &inst)
{
    return inst.operator ::cv::Vec<unsigned short, 4>();
}

static inline ::cv::Vec<int, 4> cvt_Vec4d_Vec4i(::cv::Vec<double, 4> const &inst)
{
    return inst.operator ::cv::Vec<int, 4>();
}

static inline ::cv::Vec<float, 4> cvt_Vec4d_Vec4f(::cv::Vec<double, 4> const &inst)
{
    return inst.operator ::cv::Vec<float, 4>();
}

static inline ::cv::Vec<double, 6> cvt_Vec6f_Vec6d(::cv::Vec<float, 6> const &inst)
{
    return inst.operator ::cv::Vec<double, 6>();
}

static inline ::cv::Vec<float, 6> cvt_Vec6d_Vec6f(::cv::Vec<double, 6> const &inst)
{
    return inst.operator ::cv::Vec<float, 6>();
}

static inline ::cv::Complex<double> cvt_Complexf_Complexd(::cv::Complex<float> const &inst)
{
    return inst.operator ::cv::Complex<double>();
}

static inline ::cv::Complex<float> cvt_Complexd_Complexf(::cv::Complex<double> const &inst)
{
    return inst.operator ::cv::Complex<float>();
}

static inline ::CvPoint cvt_Point2i_CvPoint(::cv::Point_< int > const &inst)
{
    return inst.operator ::CvPoint();
}

static inline ::CvPoint cvt_Point2d_CvPoint(::cv::Point_< double > const &inst)
{
    return inst.operator ::CvPoint();
}

static inline ::CvPoint cvt_Point2f_CvPoint(::cv::Point_< float > const &inst)
{
    return inst.operator ::CvPoint();
}

static inline ::cv::Point_<float> cvt_Point2i_Point2f(::cv::Point_<int> const &inst)
{
    return inst.operator ::cv::Point_<float>();
}

static inline ::cv::Point_<double> cvt_Point2i_Point2d(::cv::Point_<int> const &inst)
{
    return inst.operator ::cv::Point_<double>();
}

static inline ::cv::Point_<int> cvt_Point2f_Point2i(::cv::Point_<float> const &inst)
{
    return inst.operator ::cv::Point_<int>();
}

static inline ::cv::Point_<double> cvt_Point2f_Point2d(::cv::Point_<float> const &inst)
{
    return inst.operator ::cv::Point_<double>();
}

static inline ::cv::Point_<int> cvt_Point2d_Point2i(::cv::Point_<double> const &inst)
{
    return inst.operator ::cv::Point_<int>();
}

static inline ::cv::Point_<float> cvt_Point2d_Point2f(::cv::Point_<double> const &inst)
{
    return inst.operator ::cv::Point_<float>();
}

static inline ::CvPoint3D32f cvt_Point3d_CvPoint3D32f(::cv::Point3_< double > const &inst)
{
    return inst.operator ::CvPoint3D32f();
}

static inline ::CvPoint3D32f cvt_Point3f_CvPoint3D32f(::cv::Point3_< float > const &inst)
{
    return inst.operator ::CvPoint3D32f();
}

static inline ::CvPoint3D32f cvt_Point3i_CvPoint3D32f(::cv::Point3_< int > const &inst)
{
    return inst.operator ::CvPoint3D32f();
}

static inline ::cv::Point3_<float> cvt_Point3i_Point3f(::cv::Point3_<int> const &inst)
{
    return inst.operator ::cv::Point3_<float>();
}

static inline ::cv::Point3_<double> cvt_Point3i_Point3d(::cv::Point3_<int> const &inst)
{
    return inst.operator ::cv::Point3_<double>();
}

static inline ::cv::Point3_<int> cvt_Point3f_Point3i(::cv::Point3_<float> const &inst)
{
    return inst.operator ::cv::Point3_<int>();
}

static inline ::cv::Point3_<double> cvt_Point3f_Point3d(::cv::Point3_<float> const &inst)
{
    return inst.operator ::cv::Point3_<double>();
}

static inline ::cv::Point3_<int> cvt_Point3d_Point3i(::cv::Point3_<double> const &inst)
{
    return inst.operator ::cv::Point3_<int>();
}

static inline ::cv::Point3_<float> cvt_Point3d_Point3f(::cv::Point3_<double> const &inst)
{
    return inst.operator ::cv::Point3_<float>();
}

static inline ::cv::Size_<float> cvt_Size2i_Size2f(::cv::Size_<int> const &inst)
{
    return inst.operator ::cv::Size_<float>();
}

static inline ::cv::Size_<double> cvt_Size2i_Size2d(::cv::Size_<int> const &inst)
{
    return inst.operator ::cv::Size_<double>();
}

static inline ::cv::Size_<int> cvt_Size2f_Size2i(::cv::Size_<float> const &inst)
{
    return inst.operator ::cv::Size_<int>();
}

static inline ::cv::Size_<double> cvt_Size2f_Size2d(::cv::Size_<float> const &inst)
{
    return inst.operator ::cv::Size_<double>();
}

static inline ::cv::Size_<int> cvt_Size2d_Size2i(::cv::Size_<double> const &inst)
{
    return inst.operator ::cv::Size_<int>();
}

static inline ::cv::Size_<float> cvt_Size2d_Size2f(::cv::Size_<double> const &inst)
{
    return inst.operator ::cv::Size_<float>();
}

static inline ::cv::Rect_<float> cvt_Rect_Rectf(::cv::Rect_<int> const &inst)
{
    return inst.operator ::cv::Rect_<float>();
}

static inline ::cv::Rect_<double> cvt_Rect_Rectd(::cv::Rect_<int> const &inst)
{
    return inst.operator ::cv::Rect_<double>();
}

static inline ::cv::Rect_<int> cvt_Rectf_Rect(::cv::Rect_<float> const &inst)
{
    return inst.operator ::cv::Rect_<int>();
}

static inline ::cv::Rect_<double> cvt_Rectf_Rectd(::cv::Rect_<float> const &inst)
{
    return inst.operator ::cv::Rect_<double>();
}

static inline ::cv::Rect_<int> cvt_Rectd_Rect(::cv::Rect_<double> const &inst)
{
    return inst.operator ::cv::Rect_<int>();
}

static inline ::cv::Rect_<float> cvt_Rectd_Rectf(::cv::Rect_<double> const &inst)
{
    return inst.operator ::cv::Rect_<float>();
}

static inline ::CvBox2D cvt_RotatedRect_CvBox2D(::cv::RotatedRect const &inst)
{
    return inst.operator ::CvBox2D();
}

static inline ::CvScalar cvt_Scalar__less__double__greater__CvScalar(::cv::Scalar_< double > const &inst)
{
    return inst.operator ::CvScalar();
}

static inline ::CvSlice cvt_Range_CvSlice(::cv::Range const &inst)
{
    return inst.operator ::CvSlice();
}

void register___dummy_struct_class(){

    { //::cv::dummy_struct
        typedef bp::class_< cv::dummy_struct > __dummy_struct_exposer_t;
        __dummy_struct_exposer_t __dummy_struct_exposer = __dummy_struct_exposer_t( "__dummy_struct" );
        bp::scope __dummy_struct_scope( __dummy_struct_exposer );
        __dummy_struct_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::dummy_struct >() );
        bp::class_< cv::dummy_struct::dummy_struct2 >( "dummy_struct2" )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::dummy_struct::dummy_struct2 >() );
        __dummy_struct_exposer.setattr("v0", 0);
    }
    {
        
        bp::def("asCvScalar", &cvt_Vec4d_CvScalar, (bp::arg("inst_Vec4d")));
        bp::def("asCvScalar", &cvt_Vec3d_CvScalar, (bp::arg("inst_Vec3d")));
        bp::def("asCvScalar", &cvt_Vec2d_CvScalar, (bp::arg("inst_Vec2d")));
        bp::def("asCvScalar", &cvt_Vec4f_CvScalar, (bp::arg("inst_Vec4f")));
        bp::def("asCvScalar", &cvt_Vec3f_CvScalar, (bp::arg("inst_Vec3f")));
        bp::def("asCvScalar", &cvt_Vec2f_CvScalar, (bp::arg("inst_Vec2f")));
        bp::def("asCvScalar", &cvt_Vec4i_CvScalar, (bp::arg("inst_Vec4i")));
        bp::def("asCvScalar", &cvt_Vec3i_CvScalar, (bp::arg("inst_Vec3i")));
        bp::def("asCvScalar", &cvt_Vec2i_CvScalar, (bp::arg("inst_Vec2i")));
        bp::def("asCvScalar", &cvt_Vec4w_CvScalar, (bp::arg("inst_Vec4w")));
        bp::def("asCvScalar", &cvt_Vec3w_CvScalar, (bp::arg("inst_Vec3w")));
        bp::def("asCvScalar", &cvt_Vec2w_CvScalar, (bp::arg("inst_Vec2w")));
        bp::def("asCvScalar", &cvt_Vec4s_CvScalar, (bp::arg("inst_Vec4s")));
        bp::def("asCvScalar", &cvt_Vec3s_CvScalar, (bp::arg("inst_Vec3s")));
        bp::def("asCvScalar", &cvt_Vec2s_CvScalar, (bp::arg("inst_Vec2s")));
        bp::def("asCvScalar", &cvt_Vec4b_CvScalar, (bp::arg("inst_Vec4b")));
        bp::def("asCvScalar", &cvt_Vec3b_CvScalar, (bp::arg("inst_Vec3b")));
        bp::def("asCvScalar", &cvt_Vec2b_CvScalar, (bp::arg("inst_Vec2b")));
        bp::def("asCvScalar", &cvt_Vec6d_CvScalar, (bp::arg("inst_Vec6d")));
        bp::def("asCvScalar", &cvt_Vec6f_CvScalar, (bp::arg("inst_Vec6f")));
        bp::def("asVec2s", &cvt_Vec2b_Vec2s, (bp::arg("inst_Vec2b")));
        bp::def("asVec2w", &cvt_Vec2b_Vec2w, (bp::arg("inst_Vec2b")));
        bp::def("asVec2i", &cvt_Vec2b_Vec2i, (bp::arg("inst_Vec2b")));
        bp::def("asVec2f", &cvt_Vec2b_Vec2f, (bp::arg("inst_Vec2b")));
        bp::def("asVec2d", &cvt_Vec2b_Vec2d, (bp::arg("inst_Vec2b")));
        bp::def("asVec2b", &cvt_Vec2s_Vec2b, (bp::arg("inst_Vec2s")));
        bp::def("asVec2w", &cvt_Vec2s_Vec2w, (bp::arg("inst_Vec2s")));
        bp::def("asVec2i", &cvt_Vec2s_Vec2i, (bp::arg("inst_Vec2s")));
        bp::def("asVec2f", &cvt_Vec2s_Vec2f, (bp::arg("inst_Vec2s")));
        bp::def("asVec2d", &cvt_Vec2s_Vec2d, (bp::arg("inst_Vec2s")));
        bp::def("asVec2b", &cvt_Vec2w_Vec2b, (bp::arg("inst_Vec2w")));
        bp::def("asVec2s", &cvt_Vec2w_Vec2s, (bp::arg("inst_Vec2w")));
        bp::def("asVec2i", &cvt_Vec2w_Vec2i, (bp::arg("inst_Vec2w")));
        bp::def("asVec2f", &cvt_Vec2w_Vec2f, (bp::arg("inst_Vec2w")));
        bp::def("asVec2d", &cvt_Vec2w_Vec2d, (bp::arg("inst_Vec2w")));
        bp::def("asVec2b", &cvt_Vec2i_Vec2b, (bp::arg("inst_Vec2i")));
        bp::def("asVec2s", &cvt_Vec2i_Vec2s, (bp::arg("inst_Vec2i")));
        bp::def("asVec2w", &cvt_Vec2i_Vec2w, (bp::arg("inst_Vec2i")));
        bp::def("asVec2f", &cvt_Vec2i_Vec2f, (bp::arg("inst_Vec2i")));
        bp::def("asVec2d", &cvt_Vec2i_Vec2d, (bp::arg("inst_Vec2i")));
        bp::def("asVec2b", &cvt_Vec2f_Vec2b, (bp::arg("inst_Vec2f")));
        bp::def("asVec2s", &cvt_Vec2f_Vec2s, (bp::arg("inst_Vec2f")));
        bp::def("asVec2w", &cvt_Vec2f_Vec2w, (bp::arg("inst_Vec2f")));
        bp::def("asVec2i", &cvt_Vec2f_Vec2i, (bp::arg("inst_Vec2f")));
        bp::def("asVec2d", &cvt_Vec2f_Vec2d, (bp::arg("inst_Vec2f")));
        bp::def("asVec2b", &cvt_Vec2d_Vec2b, (bp::arg("inst_Vec2d")));
        bp::def("asVec2s", &cvt_Vec2d_Vec2s, (bp::arg("inst_Vec2d")));
        bp::def("asVec2w", &cvt_Vec2d_Vec2w, (bp::arg("inst_Vec2d")));
        bp::def("asVec2i", &cvt_Vec2d_Vec2i, (bp::arg("inst_Vec2d")));
        bp::def("asVec2f", &cvt_Vec2d_Vec2f, (bp::arg("inst_Vec2d")));
        bp::def("asVec3s", &cvt_Vec3b_Vec3s, (bp::arg("inst_Vec3b")));
        bp::def("asVec3w", &cvt_Vec3b_Vec3w, (bp::arg("inst_Vec3b")));
        bp::def("asVec3i", &cvt_Vec3b_Vec3i, (bp::arg("inst_Vec3b")));
        bp::def("asVec3f", &cvt_Vec3b_Vec3f, (bp::arg("inst_Vec3b")));
        bp::def("asVec3d", &cvt_Vec3b_Vec3d, (bp::arg("inst_Vec3b")));
        bp::def("asVec3b", &cvt_Vec3s_Vec3b, (bp::arg("inst_Vec3s")));
        bp::def("asVec3w", &cvt_Vec3s_Vec3w, (bp::arg("inst_Vec3s")));
        bp::def("asVec3i", &cvt_Vec3s_Vec3i, (bp::arg("inst_Vec3s")));
        bp::def("asVec3f", &cvt_Vec3s_Vec3f, (bp::arg("inst_Vec3s")));
        bp::def("asVec3d", &cvt_Vec3s_Vec3d, (bp::arg("inst_Vec3s")));
        bp::def("asVec3b", &cvt_Vec3w_Vec3b, (bp::arg("inst_Vec3w")));
        bp::def("asVec3s", &cvt_Vec3w_Vec3s, (bp::arg("inst_Vec3w")));
        bp::def("asVec3i", &cvt_Vec3w_Vec3i, (bp::arg("inst_Vec3w")));
        bp::def("asVec3f", &cvt_Vec3w_Vec3f, (bp::arg("inst_Vec3w")));
        bp::def("asVec3d", &cvt_Vec3w_Vec3d, (bp::arg("inst_Vec3w")));
        bp::def("asVec3b", &cvt_Vec3i_Vec3b, (bp::arg("inst_Vec3i")));
        bp::def("asVec3s", &cvt_Vec3i_Vec3s, (bp::arg("inst_Vec3i")));
        bp::def("asVec3w", &cvt_Vec3i_Vec3w, (bp::arg("inst_Vec3i")));
        bp::def("asVec3f", &cvt_Vec3i_Vec3f, (bp::arg("inst_Vec3i")));
        bp::def("asVec3d", &cvt_Vec3i_Vec3d, (bp::arg("inst_Vec3i")));
        bp::def("asVec3b", &cvt_Vec3f_Vec3b, (bp::arg("inst_Vec3f")));
        bp::def("asVec3s", &cvt_Vec3f_Vec3s, (bp::arg("inst_Vec3f")));
        bp::def("asVec3w", &cvt_Vec3f_Vec3w, (bp::arg("inst_Vec3f")));
        bp::def("asVec3i", &cvt_Vec3f_Vec3i, (bp::arg("inst_Vec3f")));
        bp::def("asVec3d", &cvt_Vec3f_Vec3d, (bp::arg("inst_Vec3f")));
        bp::def("asVec3b", &cvt_Vec3d_Vec3b, (bp::arg("inst_Vec3d")));
        bp::def("asVec3s", &cvt_Vec3d_Vec3s, (bp::arg("inst_Vec3d")));
        bp::def("asVec3w", &cvt_Vec3d_Vec3w, (bp::arg("inst_Vec3d")));
        bp::def("asVec3i", &cvt_Vec3d_Vec3i, (bp::arg("inst_Vec3d")));
        bp::def("asVec3f", &cvt_Vec3d_Vec3f, (bp::arg("inst_Vec3d")));
        bp::def("asVec4s", &cvt_Vec4b_Vec4s, (bp::arg("inst_Vec4b")));
        bp::def("asVec4w", &cvt_Vec4b_Vec4w, (bp::arg("inst_Vec4b")));
        bp::def("asVec4i", &cvt_Vec4b_Vec4i, (bp::arg("inst_Vec4b")));
        bp::def("asVec4f", &cvt_Vec4b_Vec4f, (bp::arg("inst_Vec4b")));
        bp::def("asVec4d", &cvt_Vec4b_Vec4d, (bp::arg("inst_Vec4b")));
        bp::def("asVec4b", &cvt_Vec4s_Vec4b, (bp::arg("inst_Vec4s")));
        bp::def("asVec4w", &cvt_Vec4s_Vec4w, (bp::arg("inst_Vec4s")));
        bp::def("asVec4i", &cvt_Vec4s_Vec4i, (bp::arg("inst_Vec4s")));
        bp::def("asVec4f", &cvt_Vec4s_Vec4f, (bp::arg("inst_Vec4s")));
        bp::def("asVec4d", &cvt_Vec4s_Vec4d, (bp::arg("inst_Vec4s")));
        bp::def("asVec4b", &cvt_Vec4w_Vec4b, (bp::arg("inst_Vec4w")));
        bp::def("asVec4s", &cvt_Vec4w_Vec4s, (bp::arg("inst_Vec4w")));
        bp::def("asVec4i", &cvt_Vec4w_Vec4i, (bp::arg("inst_Vec4w")));
        bp::def("asVec4f", &cvt_Vec4w_Vec4f, (bp::arg("inst_Vec4w")));
        bp::def("asVec4d", &cvt_Vec4w_Vec4d, (bp::arg("inst_Vec4w")));
        bp::def("asVec4b", &cvt_Vec4i_Vec4b, (bp::arg("inst_Vec4i")));
        bp::def("asVec4s", &cvt_Vec4i_Vec4s, (bp::arg("inst_Vec4i")));
        bp::def("asVec4w", &cvt_Vec4i_Vec4w, (bp::arg("inst_Vec4i")));
        bp::def("asVec4f", &cvt_Vec4i_Vec4f, (bp::arg("inst_Vec4i")));
        bp::def("asVec4d", &cvt_Vec4i_Vec4d, (bp::arg("inst_Vec4i")));
        bp::def("asVec4b", &cvt_Vec4f_Vec4b, (bp::arg("inst_Vec4f")));
        bp::def("asVec4s", &cvt_Vec4f_Vec4s, (bp::arg("inst_Vec4f")));
        bp::def("asVec4w", &cvt_Vec4f_Vec4w, (bp::arg("inst_Vec4f")));
        bp::def("asVec4i", &cvt_Vec4f_Vec4i, (bp::arg("inst_Vec4f")));
        bp::def("asVec4d", &cvt_Vec4f_Vec4d, (bp::arg("inst_Vec4f")));
        bp::def("asVec4b", &cvt_Vec4d_Vec4b, (bp::arg("inst_Vec4d")));
        bp::def("asVec4s", &cvt_Vec4d_Vec4s, (bp::arg("inst_Vec4d")));
        bp::def("asVec4w", &cvt_Vec4d_Vec4w, (bp::arg("inst_Vec4d")));
        bp::def("asVec4i", &cvt_Vec4d_Vec4i, (bp::arg("inst_Vec4d")));
        bp::def("asVec4f", &cvt_Vec4d_Vec4f, (bp::arg("inst_Vec4d")));
        bp::def("asVec6d", &cvt_Vec6f_Vec6d, (bp::arg("inst_Vec6f")));
        bp::def("asVec6f", &cvt_Vec6d_Vec6f, (bp::arg("inst_Vec6d")));
        bp::def("asComplexd", &cvt_Complexf_Complexd, (bp::arg("inst_Complexf")));
        bp::def("asComplexf", &cvt_Complexd_Complexf, (bp::arg("inst_Complexd")));
        bp::def("asCvPoint", &cvt_Point2i_CvPoint, (bp::arg("inst_Point2i")));
        bp::def("asCvPoint", &cvt_Point2d_CvPoint, (bp::arg("inst_Point2d")));
        bp::def("asCvPoint", &cvt_Point2f_CvPoint, (bp::arg("inst_Point2f")));
        bp::def("asPoint2f", &cvt_Point2i_Point2f, (bp::arg("inst_Point2i")));
        bp::def("asPoint2d", &cvt_Point2i_Point2d, (bp::arg("inst_Point2i")));
        bp::def("asPoint2i", &cvt_Point2f_Point2i, (bp::arg("inst_Point2f")));
        bp::def("asPoint2d", &cvt_Point2f_Point2d, (bp::arg("inst_Point2f")));
        bp::def("asPoint2i", &cvt_Point2d_Point2i, (bp::arg("inst_Point2d")));
        bp::def("asPoint2f", &cvt_Point2d_Point2f, (bp::arg("inst_Point2d")));
        bp::def("asCvPoint3D32f", &cvt_Point3d_CvPoint3D32f, (bp::arg("inst_Point3d")));
        bp::def("asCvPoint3D32f", &cvt_Point3f_CvPoint3D32f, (bp::arg("inst_Point3f")));
        bp::def("asCvPoint3D32f", &cvt_Point3i_CvPoint3D32f, (bp::arg("inst_Point3i")));
        bp::def("asPoint3f", &cvt_Point3i_Point3f, (bp::arg("inst_Point3i")));
        bp::def("asPoint3d", &cvt_Point3i_Point3d, (bp::arg("inst_Point3i")));
        bp::def("asPoint3i", &cvt_Point3f_Point3i, (bp::arg("inst_Point3f")));
        bp::def("asPoint3d", &cvt_Point3f_Point3d, (bp::arg("inst_Point3f")));
        bp::def("asPoint3i", &cvt_Point3d_Point3i, (bp::arg("inst_Point3d")));
        bp::def("asPoint3f", &cvt_Point3d_Point3f, (bp::arg("inst_Point3d")));
        bp::def("asSize2f", &cvt_Size2i_Size2f, (bp::arg("inst_Size2i")));
        bp::def("asSize2d", &cvt_Size2i_Size2d, (bp::arg("inst_Size2i")));
        bp::def("asSize2i", &cvt_Size2f_Size2i, (bp::arg("inst_Size2f")));
        bp::def("asSize2d", &cvt_Size2f_Size2d, (bp::arg("inst_Size2f")));
        bp::def("asSize2i", &cvt_Size2d_Size2i, (bp::arg("inst_Size2d")));
        bp::def("asSize2f", &cvt_Size2d_Size2f, (bp::arg("inst_Size2d")));
        bp::def("asRectf", &cvt_Rect_Rectf, (bp::arg("inst_Rect")));
        bp::def("asRectd", &cvt_Rect_Rectd, (bp::arg("inst_Rect")));
        bp::def("asRect", &cvt_Rectf_Rect, (bp::arg("inst_Rectf")));
        bp::def("asRectd", &cvt_Rectf_Rectd, (bp::arg("inst_Rectf")));
        bp::def("asRect", &cvt_Rectd_Rect, (bp::arg("inst_Rectd")));
        bp::def("asRectf", &cvt_Rectd_Rectf, (bp::arg("inst_Rectd")));
        bp::def("asCvBox2D", &cvt_RotatedRect_CvBox2D, (bp::arg("inst_RotatedRect")));
        bp::def("asCvScalar", &cvt_Scalar__less__double__greater__CvScalar, (bp::arg("inst_Scalar__less__double__greater_")));
        bp::def("asCvSlice", &cvt_Range_CvSlice, (bp::arg("inst_Range")));;
    }

}
