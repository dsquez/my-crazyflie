// Generated by gencpp from file crazyflie_driver/AddCrazyflieRequest.msg
// DO NOT EDIT!


#ifndef CRAZYFLIE_DRIVER_MESSAGE_ADDCRAZYFLIEREQUEST_H
#define CRAZYFLIE_DRIVER_MESSAGE_ADDCRAZYFLIEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <crazyflie_driver/LogBlock.h>

namespace crazyflie_driver
{
template <class ContainerAllocator>
struct AddCrazyflieRequest_
{
  typedef AddCrazyflieRequest_<ContainerAllocator> Type;

  AddCrazyflieRequest_()
    : uri()
    , tf_prefix()
    , roll_trim(0.0)
    , pitch_trim(0.0)
    , enable_logging(false)
    , enable_parameters(false)
    , log_blocks()
    , use_ros_time(false)
    , enable_logging_imu(false)
    , enable_logging_temperature(false)
    , enable_logging_magnetic_field(false)
    , enable_logging_pressure(false)
    , enable_logging_battery(false)
    , enable_logging_pose(false)
    , enable_logging_packets(false)  {
    }
  AddCrazyflieRequest_(const ContainerAllocator& _alloc)
    : uri(_alloc)
    , tf_prefix(_alloc)
    , roll_trim(0.0)
    , pitch_trim(0.0)
    , enable_logging(false)
    , enable_parameters(false)
    , log_blocks(_alloc)
    , use_ros_time(false)
    , enable_logging_imu(false)
    , enable_logging_temperature(false)
    , enable_logging_magnetic_field(false)
    , enable_logging_pressure(false)
    , enable_logging_battery(false)
    , enable_logging_pose(false)
    , enable_logging_packets(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uri_type;
  _uri_type uri;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tf_prefix_type;
  _tf_prefix_type tf_prefix;

   typedef float _roll_trim_type;
  _roll_trim_type roll_trim;

   typedef float _pitch_trim_type;
  _pitch_trim_type pitch_trim;

   typedef uint8_t _enable_logging_type;
  _enable_logging_type enable_logging;

   typedef uint8_t _enable_parameters_type;
  _enable_parameters_type enable_parameters;

   typedef std::vector< ::crazyflie_driver::LogBlock_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::crazyflie_driver::LogBlock_<ContainerAllocator> >::other >  _log_blocks_type;
  _log_blocks_type log_blocks;

   typedef uint8_t _use_ros_time_type;
  _use_ros_time_type use_ros_time;

   typedef uint8_t _enable_logging_imu_type;
  _enable_logging_imu_type enable_logging_imu;

   typedef uint8_t _enable_logging_temperature_type;
  _enable_logging_temperature_type enable_logging_temperature;

   typedef uint8_t _enable_logging_magnetic_field_type;
  _enable_logging_magnetic_field_type enable_logging_magnetic_field;

   typedef uint8_t _enable_logging_pressure_type;
  _enable_logging_pressure_type enable_logging_pressure;

   typedef uint8_t _enable_logging_battery_type;
  _enable_logging_battery_type enable_logging_battery;

   typedef uint8_t _enable_logging_pose_type;
  _enable_logging_pose_type enable_logging_pose;

   typedef uint8_t _enable_logging_packets_type;
  _enable_logging_packets_type enable_logging_packets;





  typedef boost::shared_ptr< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddCrazyflieRequest_

typedef ::crazyflie_driver::AddCrazyflieRequest_<std::allocator<void> > AddCrazyflieRequest;

typedef boost::shared_ptr< ::crazyflie_driver::AddCrazyflieRequest > AddCrazyflieRequestPtr;
typedef boost::shared_ptr< ::crazyflie_driver::AddCrazyflieRequest const> AddCrazyflieRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crazyflie_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'crazyflie_driver': ['/home/dsquez/my-crazyflie/crazyflie_ws/src/crazyflie_ros/crazyflie_driver/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "532d9ac6ee37f1d90ac3223857b70779";
  }

  static const char* value(const ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x532d9ac6ee37f1d9ULL;
  static const uint64_t static_value2 = 0x0ac3223857b70779ULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyflie_driver/AddCrazyflieRequest";
  }

  static const char* value(const ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string uri\n\
string tf_prefix\n\
float32 roll_trim\n\
float32 pitch_trim\n\
bool enable_logging\n\
bool enable_parameters\n\
LogBlock[] log_blocks\n\
bool use_ros_time\n\
bool enable_logging_imu\n\
bool enable_logging_temperature\n\
bool enable_logging_magnetic_field\n\
bool enable_logging_pressure\n\
bool enable_logging_battery\n\
bool enable_logging_pose\n\
bool enable_logging_packets\n\
\n\
================================================================================\n\
MSG: crazyflie_driver/LogBlock\n\
string topic_name\n\
int16 frequency\n\
string[] variables\n\
";
  }

  static const char* value(const ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uri);
      stream.next(m.tf_prefix);
      stream.next(m.roll_trim);
      stream.next(m.pitch_trim);
      stream.next(m.enable_logging);
      stream.next(m.enable_parameters);
      stream.next(m.log_blocks);
      stream.next(m.use_ros_time);
      stream.next(m.enable_logging_imu);
      stream.next(m.enable_logging_temperature);
      stream.next(m.enable_logging_magnetic_field);
      stream.next(m.enable_logging_pressure);
      stream.next(m.enable_logging_battery);
      stream.next(m.enable_logging_pose);
      stream.next(m.enable_logging_packets);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddCrazyflieRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crazyflie_driver::AddCrazyflieRequest_<ContainerAllocator>& v)
  {
    s << indent << "uri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uri);
    s << indent << "tf_prefix: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tf_prefix);
    s << indent << "roll_trim: ";
    Printer<float>::stream(s, indent + "  ", v.roll_trim);
    s << indent << "pitch_trim: ";
    Printer<float>::stream(s, indent + "  ", v.pitch_trim);
    s << indent << "enable_logging: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_logging);
    s << indent << "enable_parameters: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_parameters);
    s << indent << "log_blocks[]" << std::endl;
    for (size_t i = 0; i < v.log_blocks.size(); ++i)
    {
      s << indent << "  log_blocks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::crazyflie_driver::LogBlock_<ContainerAllocator> >::stream(s, indent + "    ", v.log_blocks[i]);
    }
    s << indent << "use_ros_time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_ros_time);
    s << indent << "enable_logging_imu: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_logging_imu);
    s << indent << "enable_logging_temperature: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_logging_temperature);
    s << indent << "enable_logging_magnetic_field: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_logging_magnetic_field);
    s << indent << "enable_logging_pressure: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_logging_pressure);
    s << indent << "enable_logging_battery: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_logging_battery);
    s << indent << "enable_logging_pose: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_logging_pose);
    s << indent << "enable_logging_packets: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_logging_packets);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYFLIE_DRIVER_MESSAGE_ADDCRAZYFLIEREQUEST_H
