// Generated by gencpp from file ys_ros_msgs/laneFinishRequest.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_LANEFINISHREQUEST_H
#define YS_ROS_MSGS_MESSAGE_LANEFINISHREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ys_ros_msgs
{
template <class ContainerAllocator>
struct laneFinishRequest_
{
  typedef laneFinishRequest_<ContainerAllocator> Type;

  laneFinishRequest_()
    : lane_id(0)  {
    }
  laneFinishRequest_(const ContainerAllocator& _alloc)
    : lane_id(0)  {
  (void)_alloc;
    }



   typedef int32_t _lane_id_type;
  _lane_id_type lane_id;





  typedef boost::shared_ptr< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> const> ConstPtr;

}; // struct laneFinishRequest_

typedef ::ys_ros_msgs::laneFinishRequest_<std::allocator<void> > laneFinishRequest;

typedef boost::shared_ptr< ::ys_ros_msgs::laneFinishRequest > laneFinishRequestPtr;
typedef boost::shared_ptr< ::ys_ros_msgs::laneFinishRequest const> laneFinishRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator2> & rhs)
{
  return lhs.lane_id == rhs.lane_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ys_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "22a16463d225f98d2cfa8fbcee744904";
  }

  static const char* value(const ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x22a16463d225f98dULL;
  static const uint64_t static_value2 = 0x2cfa8fbcee744904ULL;
};

template<class ContainerAllocator>
struct DataType< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ys_ros_msgs/laneFinishRequest";
  }

  static const char* value(const ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 lane_id\n"
;
  }

  static const char* value(const ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lane_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct laneFinishRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ys_ros_msgs::laneFinishRequest_<ContainerAllocator>& v)
  {
    s << indent << "lane_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lane_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_LANEFINISHREQUEST_H