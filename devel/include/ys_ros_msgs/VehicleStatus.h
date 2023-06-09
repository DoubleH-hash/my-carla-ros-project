// Generated by gencpp from file ys_ros_msgs/VehicleStatus.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_VEHICLESTATUS_H
#define YS_ROS_MSGS_MESSAGE_VEHICLESTATUS_H


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
struct VehicleStatus_
{
  typedef VehicleStatus_<ContainerAllocator> Type;

  VehicleStatus_()
    : header()
    , timestamp()
    , steerAngle(0.0)
    , vehicleSpeed(0.0)
    , vehicleAcceleration(0.0)
    , gear(0)
    , controlStatus(0)  {
    }
  VehicleStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , timestamp()
    , steerAngle(0.0)
    , vehicleSpeed(0.0)
    , vehicleAcceleration(0.0)
    , gear(0)
    , controlStatus(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef double _steerAngle_type;
  _steerAngle_type steerAngle;

   typedef double _vehicleSpeed_type;
  _vehicleSpeed_type vehicleSpeed;

   typedef double _vehicleAcceleration_type;
  _vehicleAcceleration_type vehicleAcceleration;

   typedef int8_t _gear_type;
  _gear_type gear;

   typedef int8_t _controlStatus_type;
  _controlStatus_type controlStatus;





  typedef boost::shared_ptr< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleStatus_

typedef ::ys_ros_msgs::VehicleStatus_<std::allocator<void> > VehicleStatus;

typedef boost::shared_ptr< ::ys_ros_msgs::VehicleStatus > VehicleStatusPtr;
typedef boost::shared_ptr< ::ys_ros_msgs::VehicleStatus const> VehicleStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ys_ros_msgs::VehicleStatus_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::VehicleStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.timestamp == rhs.timestamp &&
    lhs.steerAngle == rhs.steerAngle &&
    lhs.vehicleSpeed == rhs.vehicleSpeed &&
    lhs.vehicleAcceleration == rhs.vehicleAcceleration &&
    lhs.gear == rhs.gear &&
    lhs.controlStatus == rhs.controlStatus;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ys_ros_msgs::VehicleStatus_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::VehicleStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ys_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f8661bcfb5159cd801073982e804559";
  }

  static const char* value(const ::ys_ros_msgs::VehicleStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f8661bcfb5159cdULL;
  static const uint64_t static_value2 = 0x801073982e804559ULL;
};

template<class ContainerAllocator>
struct DataType< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ys_ros_msgs/VehicleStatus";
  }

  static const char* value(const ::ys_ros_msgs::VehicleStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"time timestamp\n"
"float64 steerAngle # deg 左负右正\n"
"float64 vehicleSpeed # km/h\n"
"float64 vehicleAcceleration # m/s^2\n"
"int8 gear                   # P=1 R=2 N=3 D=4\n"
"int8 controlStatus          # force_stop = 0, stop = 1, forward = 2, back = 3, idle = 4\n"
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

  static const char* value(const ::ys_ros_msgs::VehicleStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.timestamp);
      stream.next(m.steerAngle);
      stream.next(m.vehicleSpeed);
      stream.next(m.vehicleAcceleration);
      stream.next(m.gear);
      stream.next(m.controlStatus);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ys_ros_msgs::VehicleStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ys_ros_msgs::VehicleStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "steerAngle: ";
    Printer<double>::stream(s, indent + "  ", v.steerAngle);
    s << indent << "vehicleSpeed: ";
    Printer<double>::stream(s, indent + "  ", v.vehicleSpeed);
    s << indent << "vehicleAcceleration: ";
    Printer<double>::stream(s, indent + "  ", v.vehicleAcceleration);
    s << indent << "gear: ";
    Printer<int8_t>::stream(s, indent + "  ", v.gear);
    s << indent << "controlStatus: ";
    Printer<int8_t>::stream(s, indent + "  ", v.controlStatus);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_VEHICLESTATUS_H
