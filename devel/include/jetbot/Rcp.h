// Generated by gencpp from file jetbot/Rcp.msg
// DO NOT EDIT!


#ifndef JETBOT_MESSAGE_RCP_H
#define JETBOT_MESSAGE_RCP_H


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
struct Rcp_
{
  typedef Rcp_<ContainerAllocator> Type;

  Rcp_()
    : ch1(0)
    , ch2(0)
    , ch3(0)
    , ch4(0)
    , sw1(0)
    , sw2(0)  {
    }
  Rcp_(const ContainerAllocator& _alloc)
    : ch1(0)
    , ch2(0)
    , ch3(0)
    , ch4(0)
    , sw1(0)
    , sw2(0)  {
  (void)_alloc;
    }



   typedef uint16_t _ch1_type;
  _ch1_type ch1;

   typedef uint16_t _ch2_type;
  _ch2_type ch2;

   typedef uint16_t _ch3_type;
  _ch3_type ch3;

   typedef uint16_t _ch4_type;
  _ch4_type ch4;

   typedef uint8_t _sw1_type;
  _sw1_type sw1;

   typedef uint8_t _sw2_type;
  _sw2_type sw2;




  typedef boost::shared_ptr< ::jetbot::Rcp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetbot::Rcp_<ContainerAllocator> const> ConstPtr;

}; // struct Rcp_

typedef ::jetbot::Rcp_<std::allocator<void> > Rcp;

typedef boost::shared_ptr< ::jetbot::Rcp > RcpPtr;
typedef boost::shared_ptr< ::jetbot::Rcp const> RcpConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetbot::Rcp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetbot::Rcp_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::jetbot::Rcp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetbot::Rcp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::Rcp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::Rcp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::Rcp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::Rcp_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetbot::Rcp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5bd0f9dd4a8a3cd6a641f38748d7c7e3";
  }

  static const char* value(const ::jetbot::Rcp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5bd0f9dd4a8a3cd6ULL;
  static const uint64_t static_value2 = 0xa641f38748d7c7e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetbot::Rcp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetbot/Rcp";
  }

  static const char* value(const ::jetbot::Rcp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetbot::Rcp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 ch1\n\
uint16 ch2\n\
uint16 ch3\n\
uint16 ch4\n\
uint8 sw1\n\
uint8 sw2\n\
";
  }

  static const char* value(const ::jetbot::Rcp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetbot::Rcp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ch1);
      stream.next(m.ch2);
      stream.next(m.ch3);
      stream.next(m.ch4);
      stream.next(m.sw1);
      stream.next(m.sw2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Rcp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetbot::Rcp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetbot::Rcp_<ContainerAllocator>& v)
  {
    s << indent << "ch1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ch1);
    s << indent << "ch2: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ch2);
    s << indent << "ch3: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ch3);
    s << indent << "ch4: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ch4);
    s << indent << "sw1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sw1);
    s << indent << "sw2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sw2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETBOT_MESSAGE_RCP_H
