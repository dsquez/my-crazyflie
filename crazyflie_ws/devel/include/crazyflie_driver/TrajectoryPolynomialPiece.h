// Generated by gencpp from file crazyflie_driver/TrajectoryPolynomialPiece.msg
// DO NOT EDIT!


#ifndef CRAZYFLIE_DRIVER_MESSAGE_TRAJECTORYPOLYNOMIALPIECE_H
#define CRAZYFLIE_DRIVER_MESSAGE_TRAJECTORYPOLYNOMIALPIECE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace crazyflie_driver
{
template <class ContainerAllocator>
struct TrajectoryPolynomialPiece_
{
  typedef TrajectoryPolynomialPiece_<ContainerAllocator> Type;

  TrajectoryPolynomialPiece_()
    : poly_x()
    , poly_y()
    , poly_z()
    , poly_yaw()
    , duration()  {
    }
  TrajectoryPolynomialPiece_(const ContainerAllocator& _alloc)
    : poly_x(_alloc)
    , poly_y(_alloc)
    , poly_z(_alloc)
    , poly_yaw(_alloc)
    , duration()  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _poly_x_type;
  _poly_x_type poly_x;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _poly_y_type;
  _poly_y_type poly_y;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _poly_z_type;
  _poly_z_type poly_z;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _poly_yaw_type;
  _poly_yaw_type poly_yaw;

   typedef ros::Duration _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> const> ConstPtr;

}; // struct TrajectoryPolynomialPiece_

typedef ::crazyflie_driver::TrajectoryPolynomialPiece_<std::allocator<void> > TrajectoryPolynomialPiece;

typedef boost::shared_ptr< ::crazyflie_driver::TrajectoryPolynomialPiece > TrajectoryPolynomialPiecePtr;
typedef boost::shared_ptr< ::crazyflie_driver::TrajectoryPolynomialPiece const> TrajectoryPolynomialPieceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crazyflie_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'crazyflie_driver': ['/home/derek/my-crazyflie/crazyflie_ws/src/crazyflie_ros/crazyflie_driver/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9099d336831f8a28304456aacb0d75e8";
  }

  static const char* value(const ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9099d336831f8a28ULL;
  static const uint64_t static_value2 = 0x304456aacb0d75e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyflie_driver/TrajectoryPolynomialPiece";
  }

  static const char* value(const ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
\n\
float32[] poly_x\n\
float32[] poly_y\n\
float32[] poly_z\n\
float32[] poly_yaw\n\
duration duration\n\
";
  }

  static const char* value(const ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.poly_x);
      stream.next(m.poly_y);
      stream.next(m.poly_z);
      stream.next(m.poly_yaw);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrajectoryPolynomialPiece_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crazyflie_driver::TrajectoryPolynomialPiece_<ContainerAllocator>& v)
  {
    s << indent << "poly_x[]" << std::endl;
    for (size_t i = 0; i < v.poly_x.size(); ++i)
    {
      s << indent << "  poly_x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.poly_x[i]);
    }
    s << indent << "poly_y[]" << std::endl;
    for (size_t i = 0; i < v.poly_y.size(); ++i)
    {
      s << indent << "  poly_y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.poly_y[i]);
    }
    s << indent << "poly_z[]" << std::endl;
    for (size_t i = 0; i < v.poly_z.size(); ++i)
    {
      s << indent << "  poly_z[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.poly_z[i]);
    }
    s << indent << "poly_yaw[]" << std::endl;
    for (size_t i = 0; i < v.poly_yaw.size(); ++i)
    {
      s << indent << "  poly_yaw[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.poly_yaw[i]);
    }
    s << indent << "duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYFLIE_DRIVER_MESSAGE_TRAJECTORYPOLYNOMIALPIECE_H
