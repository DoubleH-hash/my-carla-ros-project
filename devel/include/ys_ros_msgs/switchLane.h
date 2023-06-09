// Generated by gencpp from file ys_ros_msgs/switchLane.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_SWITCHLANE_H
#define YS_ROS_MSGS_MESSAGE_SWITCHLANE_H

#include <ros/service_traits.h>


#include <ys_ros_msgs/switchLaneRequest.h>
#include <ys_ros_msgs/switchLaneResponse.h>


namespace ys_ros_msgs
{

struct switchLane
{

typedef switchLaneRequest Request;
typedef switchLaneResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct switchLane
} // namespace ys_ros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ys_ros_msgs::switchLane > {
  static const char* value()
  {
    return "173693392e9fa111283169251c339a9c";
  }

  static const char* value(const ::ys_ros_msgs::switchLane&) { return value(); }
};

template<>
struct DataType< ::ys_ros_msgs::switchLane > {
  static const char* value()
  {
    return "ys_ros_msgs/switchLane";
  }

  static const char* value(const ::ys_ros_msgs::switchLane&) { return value(); }
};


// service_traits::MD5Sum< ::ys_ros_msgs::switchLaneRequest> should match
// service_traits::MD5Sum< ::ys_ros_msgs::switchLane >
template<>
struct MD5Sum< ::ys_ros_msgs::switchLaneRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ys_ros_msgs::switchLane >::value();
  }
  static const char* value(const ::ys_ros_msgs::switchLaneRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ys_ros_msgs::switchLaneRequest> should match
// service_traits::DataType< ::ys_ros_msgs::switchLane >
template<>
struct DataType< ::ys_ros_msgs::switchLaneRequest>
{
  static const char* value()
  {
    return DataType< ::ys_ros_msgs::switchLane >::value();
  }
  static const char* value(const ::ys_ros_msgs::switchLaneRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ys_ros_msgs::switchLaneResponse> should match
// service_traits::MD5Sum< ::ys_ros_msgs::switchLane >
template<>
struct MD5Sum< ::ys_ros_msgs::switchLaneResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ys_ros_msgs::switchLane >::value();
  }
  static const char* value(const ::ys_ros_msgs::switchLaneResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ys_ros_msgs::switchLaneResponse> should match
// service_traits::DataType< ::ys_ros_msgs::switchLane >
template<>
struct DataType< ::ys_ros_msgs::switchLaneResponse>
{
  static const char* value()
  {
    return DataType< ::ys_ros_msgs::switchLane >::value();
  }
  static const char* value(const ::ys_ros_msgs::switchLaneResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_SWITCHLANE_H
