// Generated by gencpp from file ys_ros_msgs/Velocity.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_VELOCITY_H
#define YS_ROS_MSGS_MESSAGE_VELOCITY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ys_ros_msgs
{
template <class ContainerAllocator>
struct Velocity_
{
  typedef Velocity_<ContainerAllocator> Type;

  Velocity_()
    : header()
    , timestamp()
    , velocity(0.0)
    , mode(0)  {
    }
  Velocity_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , timestamp()
    , velocity(0.0)
    , mode(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef double _velocity_type;
  _velocity_type velocity;

   typedef int32_t _mode_type;
  _mode_type mode;





  typedef boost::shared_ptr< ::ys_ros_msgs::Velocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ys_ros_msgs::Velocity_<ContainerAllocator> const> ConstPtr;

}; // struct Velocity_

typedef ::ys_ros_msgs::Velocity_<std::allocator<void> > Velocity;

typedef boost::shared_ptr< ::ys_ros_msgs::Velocity > VelocityPtr;
typedef boost::shared_ptr< ::ys_ros_msgs::Velocity const> VelocityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ys_ros_msgs::Velocity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ys_ros_msgs::Velocity_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ys_ros_msgs::Velocity_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::Velocity_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.timestamp == rhs.timestamp &&
    lhs.velocity == rhs.velocity &&
    lhs.mode == rhs.mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ys_ros_msgs::Velocity_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::Velocity_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ys_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::Velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::Velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::Velocity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::Velocity_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::Velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::Velocity_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ys_ros_msgs::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5c68ed5f3076bf31f887ab95f45d96e";
  }

  static const char* value(const ::ys_ros_msgs::Velocity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5c68ed5f3076bf3ULL;
  static const uint64_t static_value2 = 0x1f887ab95f45d96eULL;
};

template<class ContainerAllocator>
struct DataType< ::ys_ros_msgs::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ys_ros_msgs/Velocity";
  }

  static const char* value(const ::ys_ros_msgs::Velocity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ys_ros_msgs::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"time    timestamp\n"
"float64 velocity\n"
"int32 mode\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::ys_ros_msgs::Velocity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ys_ros_msgs::Velocity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.timestamp);
      stream.next(m.velocity);
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Velocity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ys_ros_msgs::Velocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ys_ros_msgs::Velocity_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_VELOCITY_H
