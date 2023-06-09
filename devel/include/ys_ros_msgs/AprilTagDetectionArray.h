// Generated by gencpp from file ys_ros_msgs/AprilTagDetectionArray.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_APRILTAGDETECTIONARRAY_H
#define YS_ROS_MSGS_MESSAGE_APRILTAGDETECTIONARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ys_ros_msgs/AprilTagDetection.h>

namespace ys_ros_msgs
{
template <class ContainerAllocator>
struct AprilTagDetectionArray_
{
  typedef AprilTagDetectionArray_<ContainerAllocator> Type;

  AprilTagDetectionArray_()
    : header()
    , detections()  {
    }
  AprilTagDetectionArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::ys_ros_msgs::AprilTagDetection_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::ys_ros_msgs::AprilTagDetection_<ContainerAllocator> >> _detections_type;
  _detections_type detections;





  typedef boost::shared_ptr< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> const> ConstPtr;

}; // struct AprilTagDetectionArray_

typedef ::ys_ros_msgs::AprilTagDetectionArray_<std::allocator<void> > AprilTagDetectionArray;

typedef boost::shared_ptr< ::ys_ros_msgs::AprilTagDetectionArray > AprilTagDetectionArrayPtr;
typedef boost::shared_ptr< ::ys_ros_msgs::AprilTagDetectionArray const> AprilTagDetectionArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.detections == rhs.detections;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ys_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fb2dd94ea422b055d426ca1a0cba3b9c";
  }

  static const char* value(const ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfb2dd94ea422b055ULL;
  static const uint64_t static_value2 = 0xd426ca1a0cba3b9cULL;
};

template<class ContainerAllocator>
struct DataType< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ys_ros_msgs/AprilTagDetectionArray";
  }

  static const char* value(const ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"AprilTagDetection[] detections\n"
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
"\n"
"================================================================================\n"
"MSG: ys_ros_msgs/AprilTagDetection\n"
"string family\n"
"int32 id\n"
"geometry_msgs/Point center      # centre in (x,y) pixel coordinates\n"
"geometry_msgs/Point[4] corners  # corners of tag ((x1,y1),(x2,y2),...)\n"
"geometry_msgs/PoseWithCovarianceStamped pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovarianceStamped\n"
"# This expresses an estimated pose with a reference coordinate frame and timestamp\n"
"\n"
"Header header\n"
"PoseWithCovariance pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AprilTagDetectionArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ys_ros_msgs::AprilTagDetectionArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ys_ros_msgs::AprilTagDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_APRILTAGDETECTIONARRAY_H
