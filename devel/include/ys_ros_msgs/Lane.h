// Generated by gencpp from file ys_ros_msgs/Lane.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_LANE_H
#define YS_ROS_MSGS_MESSAGE_LANE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ys_ros_msgs/PointXYA.h>

namespace ys_ros_msgs
{
template <class ContainerAllocator>
struct Lane_
{
  typedef Lane_<ContainerAllocator> Type;

  Lane_()
    : point_num(0)
    , points()  {
    }
  Lane_(const ContainerAllocator& _alloc)
    : point_num(0)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _point_num_type;
  _point_num_type point_num;

   typedef std::vector< ::ys_ros_msgs::PointXYA_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::ys_ros_msgs::PointXYA_<ContainerAllocator> >> _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::ys_ros_msgs::Lane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ys_ros_msgs::Lane_<ContainerAllocator> const> ConstPtr;

}; // struct Lane_

typedef ::ys_ros_msgs::Lane_<std::allocator<void> > Lane;

typedef boost::shared_ptr< ::ys_ros_msgs::Lane > LanePtr;
typedef boost::shared_ptr< ::ys_ros_msgs::Lane const> LaneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ys_ros_msgs::Lane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ys_ros_msgs::Lane_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ys_ros_msgs::Lane_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::Lane_<ContainerAllocator2> & rhs)
{
  return lhs.point_num == rhs.point_num &&
    lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ys_ros_msgs::Lane_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::Lane_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ys_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::Lane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::Lane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::Lane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::Lane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::Lane_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ys_ros_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e74866261a63d1ab8c60bcad421a3b72";
  }

  static const char* value(const ::ys_ros_msgs::Lane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe74866261a63d1abULL;
  static const uint64_t static_value2 = 0x8c60bcad421a3b72ULL;
};

template<class ContainerAllocator>
struct DataType< ::ys_ros_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ys_ros_msgs/Lane";
  }

  static const char* value(const ::ys_ros_msgs::Lane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ys_ros_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 point_num\n"
"PointXYA[] points\n"
"================================================================================\n"
"MSG: ys_ros_msgs/PointXYA\n"
"Header header\n"
"float64 x\n"
"float64 y\n"
"float64 yaw  # degs\n"
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

  static const char* value(const ::ys_ros_msgs::Lane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ys_ros_msgs::Lane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point_num);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Lane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ys_ros_msgs::Lane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ys_ros_msgs::Lane_<ContainerAllocator>& v)
  {
    s << indent << "point_num: ";
    Printer<int32_t>::stream(s, indent + "  ", v.point_num);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ys_ros_msgs::PointXYA_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_LANE_H
