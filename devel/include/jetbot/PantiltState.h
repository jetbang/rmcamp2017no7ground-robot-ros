// Generated by gencpp from file jetbot/PantiltState.msg
// DO NOT EDIT!


#ifndef JETBOT_MESSAGE_PANTILTSTATE_H
#define JETBOT_MESSAGE_PANTILTSTATE_H


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
struct PantiltState_
{
  typedef PantiltState_<ContainerAllocator> Type;

  PantiltState_()
    : p(0)
    , t(0)  {
    }
  PantiltState_(const ContainerAllocator& _alloc)
    : p(0)
    , t(0)  {
  (void)_alloc;
    }



   typedef int16_t _p_type;
  _p_type p;

   typedef int16_t _t_type;
  _t_type t;




  typedef boost::shared_ptr< ::jetbot::PantiltState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetbot::PantiltState_<ContainerAllocator> const> ConstPtr;

}; // struct PantiltState_

typedef ::jetbot::PantiltState_<std::allocator<void> > PantiltState;

typedef boost::shared_ptr< ::jetbot::PantiltState > PantiltStatePtr;
typedef boost::shared_ptr< ::jetbot::PantiltState const> PantiltStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetbot::PantiltState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetbot::PantiltState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::jetbot::PantiltState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetbot::PantiltState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::PantiltState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::PantiltState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::PantiltState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::PantiltState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetbot::PantiltState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b08ea430ac45fde2716ea064d94e7a4";
  }

  static const char* value(const ::jetbot::PantiltState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b08ea430ac45fdeULL;
  static const uint64_t static_value2 = 0x2716ea064d94e7a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetbot::PantiltState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetbot/PantiltState";
  }

  static const char* value(const ::jetbot::PantiltState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetbot::PantiltState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 p\n\
int16 t\n\
";
  }

  static const char* value(const ::jetbot::PantiltState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetbot::PantiltState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.p);
      stream.next(m.t);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PantiltState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetbot::PantiltState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetbot::PantiltState_<ContainerAllocator>& v)
  {
    s << indent << "p: ";
    Printer<int16_t>::stream(s, indent + "  ", v.p);
    s << indent << "t: ";
    Printer<int16_t>::stream(s, indent + "  ", v.t);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETBOT_MESSAGE_PANTILTSTATE_H
