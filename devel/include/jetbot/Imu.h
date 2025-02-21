// Generated by gencpp from file jetbot/Imu.msg
// DO NOT EDIT!


#ifndef JETBOT_MESSAGE_IMU_H
#define JETBOT_MESSAGE_IMU_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jetbot
{
template <class ContainerAllocator>
struct Imu_
{
  typedef Imu_<ContainerAllocator> Type;

  Imu_()
    : frame_id(0)
    , ax(0)
    , ay(0)
    , az(0)
    , gx(0)
    , gy(0)
    , gz(0)  {
    }
  Imu_(const ContainerAllocator& _alloc)
    : frame_id(0)
    , ax(0)
    , ay(0)
    , az(0)
    , gx(0)
    , gy(0)
    , gz(0)  {
  (void)_alloc;
    }



   typedef uint32_t _frame_id_type;
  _frame_id_type frame_id;

   typedef int16_t _ax_type;
  _ax_type ax;

   typedef int16_t _ay_type;
  _ay_type ay;

   typedef int16_t _az_type;
  _az_type az;

   typedef int16_t _gx_type;
  _gx_type gx;

   typedef int16_t _gy_type;
  _gy_type gy;

   typedef int16_t _gz_type;
  _gz_type gz;




  typedef boost::shared_ptr< ::jetbot::Imu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetbot::Imu_<ContainerAllocator> const> ConstPtr;

}; // struct Imu_

typedef ::jetbot::Imu_<std::allocator<void> > Imu;

typedef boost::shared_ptr< ::jetbot::Imu > ImuPtr;
typedef boost::shared_ptr< ::jetbot::Imu const> ImuConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetbot::Imu_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetbot::Imu_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jetbot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jetbot': ['/home/bj/workspace/ros/car_ros/src/jetbot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jetbot::Imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetbot::Imu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::Imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::Imu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::Imu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::Imu_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetbot::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8cfe32375741210f7374d76754e2eef7";
  }

  static const char* value(const ::jetbot::Imu_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8cfe32375741210fULL;
  static const uint64_t static_value2 = 0x7374d76754e2eef7ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetbot::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetbot/Imu";
  }

  static const char* value(const ::jetbot::Imu_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetbot::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 frame_id\n\
int16 ax\n\
int16 ay\n\
int16 az\n\
int16 gx\n\
int16 gy\n\
int16 gz\n\
";
  }

  static const char* value(const ::jetbot::Imu_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetbot::Imu_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_id);
      stream.next(m.ax);
      stream.next(m.ay);
      stream.next(m.az);
      stream.next(m.gx);
      stream.next(m.gy);
      stream.next(m.gz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Imu_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetbot::Imu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetbot::Imu_<ContainerAllocator>& v)
  {
    s << indent << "frame_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.frame_id);
    s << indent << "ax: ";
    Printer<int16_t>::stream(s, indent + "  ", v.ax);
    s << indent << "ay: ";
    Printer<int16_t>::stream(s, indent + "  ", v.ay);
    s << indent << "az: ";
    Printer<int16_t>::stream(s, indent + "  ", v.az);
    s << indent << "gx: ";
    Printer<int16_t>::stream(s, indent + "  ", v.gx);
    s << indent << "gy: ";
    Printer<int16_t>::stream(s, indent + "  ", v.gy);
    s << indent << "gz: ";
    Printer<int16_t>::stream(s, indent + "  ", v.gz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETBOT_MESSAGE_IMU_H
