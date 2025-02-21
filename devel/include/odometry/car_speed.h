// Generated by gencpp from file odometry/car_speed.msg
// DO NOT EDIT!


#ifndef ODOMETRY_MESSAGE_CAR_SPEED_H
#define ODOMETRY_MESSAGE_CAR_SPEED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace odometry
{
template <class ContainerAllocator>
struct car_speed_
{
  typedef car_speed_<ContainerAllocator> Type;

  car_speed_()
    : angle(0.0)
    , v_x(0.0)
    , v_y(0.0)
    , v_r(0.0)
    , yaw(0.0)  {
    }
  car_speed_(const ContainerAllocator& _alloc)
    : angle(0.0)
    , v_x(0.0)
    , v_y(0.0)
    , v_r(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef double _angle_type;
  _angle_type angle;

   typedef double _v_x_type;
  _v_x_type v_x;

   typedef double _v_y_type;
  _v_y_type v_y;

   typedef double _v_r_type;
  _v_r_type v_r;

   typedef double _yaw_type;
  _yaw_type yaw;




  typedef boost::shared_ptr< ::odometry::car_speed_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::odometry::car_speed_<ContainerAllocator> const> ConstPtr;

}; // struct car_speed_

typedef ::odometry::car_speed_<std::allocator<void> > car_speed;

typedef boost::shared_ptr< ::odometry::car_speed > car_speedPtr;
typedef boost::shared_ptr< ::odometry::car_speed const> car_speedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::odometry::car_speed_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::odometry::car_speed_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace odometry

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'odometry': ['/home/bj/workspace/ros/car_ros/src/odometry/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::odometry::car_speed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::odometry::car_speed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::odometry::car_speed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::odometry::car_speed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::odometry::car_speed_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::odometry::car_speed_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::odometry::car_speed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7a02c599e55c2d47f4d95b574a34e902";
  }

  static const char* value(const ::odometry::car_speed_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7a02c599e55c2d47ULL;
  static const uint64_t static_value2 = 0xf4d95b574a34e902ULL;
};

template<class ContainerAllocator>
struct DataType< ::odometry::car_speed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "odometry/car_speed";
  }

  static const char* value(const ::odometry::car_speed_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::odometry::car_speed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 angle\n\
float64 v_x\n\
float64 v_y\n\
float64 v_r\n\
float64 yaw\n\
";
  }

  static const char* value(const ::odometry::car_speed_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::odometry::car_speed_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angle);
      stream.next(m.v_x);
      stream.next(m.v_y);
      stream.next(m.v_r);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct car_speed_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::odometry::car_speed_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::odometry::car_speed_<ContainerAllocator>& v)
  {
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
    s << indent << "v_x: ";
    Printer<double>::stream(s, indent + "  ", v.v_x);
    s << indent << "v_y: ";
    Printer<double>::stream(s, indent + "  ", v.v_y);
    s << indent << "v_r: ";
    Printer<double>::stream(s, indent + "  ", v.v_r);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ODOMETRY_MESSAGE_CAR_SPEED_H
