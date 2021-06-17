// Generated by gencpp from file rt_dynamixel_msgs/MotorSettingResponse.msg
// DO NOT EDIT!


#ifndef RT_DYNAMIXEL_MSGS_MESSAGE_MOTORSETTINGRESPONSE_H
#define RT_DYNAMIXEL_MSGS_MESSAGE_MOTORSETTINGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rt_dynamixel_msgs
{
template <class ContainerAllocator>
struct MotorSettingResponse_
{
  typedef MotorSettingResponse_<ContainerAllocator> Type;

  MotorSettingResponse_()
    : result(0)
    , value(0)  {
    }
  MotorSettingResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , value(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef int64_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MotorSettingResponse_

typedef ::rt_dynamixel_msgs::MotorSettingResponse_<std::allocator<void> > MotorSettingResponse;

typedef boost::shared_ptr< ::rt_dynamixel_msgs::MotorSettingResponse > MotorSettingResponsePtr;
typedef boost::shared_ptr< ::rt_dynamixel_msgs::MotorSettingResponse const> MotorSettingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rt_dynamixel_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rt_dynamixel_msgs': ['/home/rui/catkin_ws/src/rt_dynamixel_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2d24c7dd53dc7c2fd1b5a1f364f18349";
  }

  static const char* value(const ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2d24c7dd53dc7c2fULL;
  static const uint64_t static_value2 = 0xd1b5a1f364f18349ULL;
};

template<class ContainerAllocator>
struct DataType< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rt_dynamixel_msgs/MotorSettingResponse";
  }

  static const char* value(const ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
int64 value\n\
\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorSettingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rt_dynamixel_msgs::MotorSettingResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "value: ";
    Printer<int64_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RT_DYNAMIXEL_MSGS_MESSAGE_MOTORSETTINGRESPONSE_H
