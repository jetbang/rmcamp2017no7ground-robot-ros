// Generated by gencpp from file console/serial_data.msg
// DO NOT EDIT!


#ifndef CONSOLE_MESSAGE_SERIAL_DATA_H
#define CONSOLE_MESSAGE_SERIAL_DATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace console
{
template <class ContainerAllocator>
struct serial_data_
{
  typedef serial_data_<ContainerAllocator> Type;

  serial_data_()
    : data()  {
    }
  serial_data_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::console::serial_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::console::serial_data_<ContainerAllocator> const> ConstPtr;

}; // struct serial_data_

typedef ::console::serial_data_<std::allocator<void> > serial_data;

typedef boost::shared_ptr< ::console::serial_data > serial_dataPtr;
typedef boost::shared_ptr< ::console::serial_data const> serial_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::console::serial_data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::console::serial_data_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace console

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'console': ['/home/bj/workspace/ros/car_ros/src/console/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::console::serial_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::console::serial_data_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::console::serial_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::console::serial_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::console::serial_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::console::serial_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::console::serial_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "79cd2e4a60f8fd7afcb0476d2ea77fdc";
  }

  static const char* value(const ::console::serial_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x79cd2e4a60f8fd7aULL;
  static const uint64_t static_value2 = 0xfcb0476d2ea77fdcULL;
};

template<class ContainerAllocator>
struct DataType< ::console::serial_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "console/serial_data";
  }

  static const char* value(const ::console::serial_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::console::serial_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64[] data\n\
";
  }

  static const char* value(const ::console::serial_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::console::serial_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct serial_data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::console::serial_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::console::serial_data_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONSOLE_MESSAGE_SERIAL_DATA_H
