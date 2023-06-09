// Generated by gencpp from file ys_ros_msgs/LaneDetection.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_LANEDETECTION_H
#define YS_ROS_MSGS_MESSAGE_LANEDETECTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point32.h>

namespace ys_ros_msgs
{
template <class ContainerAllocator>
struct LaneDetection_
{
  typedef LaneDetection_<ContainerAllocator> Type;

  LaneDetection_()
    : id(0)
    , points()  {
    }
  LaneDetection_(const ContainerAllocator& _alloc)
    : id(0)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _id_type;
  _id_type id;

   typedef std::vector< ::geometry_msgs::Point32_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Point32_<ContainerAllocator> >> _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> const> ConstPtr;

}; // struct LaneDetection_

typedef ::ys_ros_msgs::LaneDetection_<std::allocator<void> > LaneDetection;

typedef boost::shared_ptr< ::ys_ros_msgs::LaneDetection > LaneDetectionPtr;
typedef boost::shared_ptr< ::ys_ros_msgs::LaneDetection const> LaneDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ys_ros_msgs::LaneDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ys_ros_msgs::LaneDetection_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::LaneDetection_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ys_ros_msgs::LaneDetection_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::LaneDetection_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ys_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ae84749a7fa640c3dc057405822cdef8";
  }

  static const char* value(const ::ys_ros_msgs::LaneDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xae84749a7fa640c3ULL;
  static const uint64_t static_value2 = 0xdc057405822cdef8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ys_ros_msgs/LaneDetection";
  }

  static const char* value(const ::ys_ros_msgs::LaneDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 id     # lane number\n"
"\n"
"geometry_msgs/Point32[] points   # lane point list\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::ys_ros_msgs::LaneDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaneDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ys_ros_msgs::LaneDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ys_ros_msgs::LaneDetection_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.id);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_LANEDETECTION_H