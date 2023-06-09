// Generated by gencpp from file ys_ros_msgs/getLaneById.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_GETLANEBYID_H
#define YS_ROS_MSGS_MESSAGE_GETLANEBYID_H

#include <ros/service_traits.h>


#include <ys_ros_msgs/getLaneByIdRequest.h>
#include <ys_ros_msgs/getLaneByIdResponse.h>


namespace ys_ros_msgs
{

struct getLaneById
{

typedef getLaneByIdRequest Request;
typedef getLaneByIdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct getLaneById
} // namespace ys_ros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ys_ros_msgs::getLaneById > {
  static const char* value()
  {
    return "b5929bbea2e368bcec6d7de3a649d93e";
  }

  static const char* value(const ::ys_ros_msgs::getLaneById&) { return value(); }
};

template<>
struct DataType< ::ys_ros_msgs::getLaneById > {
  static const char* value()
  {
    return "ys_ros_msgs/getLaneById";
  }

  static const char* value(const ::ys_ros_msgs::getLaneById&) { return value(); }
};


// service_traits::MD5Sum< ::ys_ros_msgs::getLaneByIdRequest> should match
// service_traits::MD5Sum< ::ys_ros_msgs::getLaneById >
template<>
struct MD5Sum< ::ys_ros_msgs::getLaneByIdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ys_ros_msgs::getLaneById >::value();
  }
  static const char* value(const ::ys_ros_msgs::getLaneByIdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ys_ros_msgs::getLaneByIdRequest> should match
// service_traits::DataType< ::ys_ros_msgs::getLaneById >
template<>
struct DataType< ::ys_ros_msgs::getLaneByIdRequest>
{
  static const char* value()
  {
    return DataType< ::ys_ros_msgs::getLaneById >::value();
  }
  static const char* value(const ::ys_ros_msgs::getLaneByIdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ys_ros_msgs::getLaneByIdResponse> should match
// service_traits::MD5Sum< ::ys_ros_msgs::getLaneById >
template<>
struct MD5Sum< ::ys_ros_msgs::getLaneByIdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ys_ros_msgs::getLaneById >::value();
  }
  static const char* value(const ::ys_ros_msgs::getLaneByIdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ys_ros_msgs::getLaneByIdResponse> should match
// service_traits::DataType< ::ys_ros_msgs::getLaneById >
template<>
struct DataType< ::ys_ros_msgs::getLaneByIdResponse>
{
  static const char* value()
  {
    return DataType< ::ys_ros_msgs::getLaneById >::value();
  }
  static const char* value(const ::ys_ros_msgs::getLaneByIdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_GETLANEBYID_H
