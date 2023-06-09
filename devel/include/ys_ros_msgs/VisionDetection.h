// Generated by gencpp from file ys_ros_msgs/VisionDetection.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_VISIONDETECTION_H
#define YS_ROS_MSGS_MESSAGE_VISIONDETECTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace ys_ros_msgs
{
template <class ContainerAllocator>
struct VisionDetection_
{
  typedef VisionDetection_<ContainerAllocator> Type;

  VisionDetection_()
    : id()
    , pose()  {
    }
  VisionDetection_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _id_type;
  _id_type id;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> const> ConstPtr;

}; // struct VisionDetection_

typedef ::ys_ros_msgs::VisionDetection_<std::allocator<void> > VisionDetection;

typedef boost::shared_ptr< ::ys_ros_msgs::VisionDetection > VisionDetectionPtr;
typedef boost::shared_ptr< ::ys_ros_msgs::VisionDetection const> VisionDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ys_ros_msgs::VisionDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ys_ros_msgs::VisionDetection_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::VisionDetection_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.pose == rhs.pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ys_ros_msgs::VisionDetection_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::VisionDetection_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ys_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "95e38df87200e40f187710e349905573";
  }

  static const char* value(const ::ys_ros_msgs::VisionDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x95e38df87200e40fULL;
  static const uint64_t static_value2 = 0x187710e349905573ULL;
};

template<class ContainerAllocator>
struct DataType< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ys_ros_msgs/VisionDetection";
  }

  static const char* value(const ::ys_ros_msgs::VisionDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string id     # obstacle name\n"
"\n"
"geometry_msgs/Pose pose\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
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

  static const char* value(const ::ys_ros_msgs::VisionDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VisionDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ys_ros_msgs::VisionDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ys_ros_msgs::VisionDetection_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.id);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_VISIONDETECTION_H
