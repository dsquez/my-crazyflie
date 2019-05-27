// Generated by gencpp from file vicon_bridge/Marker.msg
// DO NOT EDIT!


#ifndef VICON_BRIDGE_MESSAGE_MARKER_H
#define VICON_BRIDGE_MESSAGE_MARKER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace vicon_bridge
{
template <class ContainerAllocator>
struct Marker_
{
  typedef Marker_<ContainerAllocator> Type;

  Marker_()
    : marker_name()
    , subject_name()
    , segment_name()
    , translation()
    , occluded(false)  {
    }
  Marker_(const ContainerAllocator& _alloc)
    : marker_name(_alloc)
    , subject_name(_alloc)
    , segment_name(_alloc)
    , translation(_alloc)
    , occluded(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _marker_name_type;
  _marker_name_type marker_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _subject_name_type;
  _subject_name_type subject_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _segment_name_type;
  _segment_name_type segment_name;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _translation_type;
  _translation_type translation;

   typedef uint8_t _occluded_type;
  _occluded_type occluded;





  typedef boost::shared_ptr< ::vicon_bridge::Marker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vicon_bridge::Marker_<ContainerAllocator> const> ConstPtr;

}; // struct Marker_

typedef ::vicon_bridge::Marker_<std::allocator<void> > Marker;

typedef boost::shared_ptr< ::vicon_bridge::Marker > MarkerPtr;
typedef boost::shared_ptr< ::vicon_bridge::Marker const> MarkerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vicon_bridge::Marker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vicon_bridge::Marker_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vicon_bridge

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'vicon_bridge': ['/home/dsquez/crazyflie_ws/src/vicon_bridge/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vicon_bridge::Marker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vicon_bridge::Marker_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vicon_bridge::Marker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vicon_bridge::Marker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vicon_bridge::Marker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vicon_bridge::Marker_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vicon_bridge::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da6f93747c24b19a71932ae4b040f489";
  }

  static const char* value(const ::vicon_bridge::Marker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda6f93747c24b19aULL;
  static const uint64_t static_value2 = 0x71932ae4b040f489ULL;
};

template<class ContainerAllocator>
struct DataType< ::vicon_bridge::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vicon_bridge/Marker";
  }

  static const char* value(const ::vicon_bridge::Marker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vicon_bridge::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string marker_name\n\
string subject_name\n\
string segment_name\n\
geometry_msgs/Point translation\n\
bool occluded\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::vicon_bridge::Marker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vicon_bridge::Marker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.marker_name);
      stream.next(m.subject_name);
      stream.next(m.segment_name);
      stream.next(m.translation);
      stream.next(m.occluded);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Marker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vicon_bridge::Marker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vicon_bridge::Marker_<ContainerAllocator>& v)
  {
    s << indent << "marker_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.marker_name);
    s << indent << "subject_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.subject_name);
    s << indent << "segment_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.segment_name);
    s << indent << "translation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.translation);
    s << indent << "occluded: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.occluded);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VICON_BRIDGE_MESSAGE_MARKER_H
