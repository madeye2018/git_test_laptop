// Generated by gencpp from file rt_dynamixel_msgs/ModeSettingRequest.msg
// DO NOT EDIT!


#ifndef RT_DYNAMIXEL_MSGS_MESSAGE_MODESETTINGREQUEST_H
#define RT_DYNAMIXEL_MSGS_MESSAGE_MODESETTINGREQUEST_H


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
struct ModeSettingRequest_
{
  typedef ModeSettingRequest_<ContainerAllocator> Type;

  ModeSettingRequest_()
    : mode(0)  {
    }
  ModeSettingRequest_(const ContainerAllocator& _alloc)
    : mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _mode_type;
  _mode_type mode;



  enum {
    DISABLE = 0,
    CONTROL_RUN = 1,
    SETTING = 2,
    TEST = 500,
  };


  typedef boost::shared_ptr< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ModeSettingRequest_

typedef ::rt_dynamixel_msgs::ModeSettingRequest_<std::allocator<void> > ModeSettingRequest;

typedef boost::shared_ptr< ::rt_dynamixel_msgs::ModeSettingRequest > ModeSettingRequestPtr;
typedef boost::shared_ptr< ::rt_dynamixel_msgs::ModeSettingRequest const> ModeSettingRequestConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c520236f9e82b8e26831ca516b0480de";
  }

  static const char* value(const ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc520236f9e82b8e2ULL;
  static const uint64_t static_value2 = 0x6831ca516b0480deULL;
};

template<class ContainerAllocator>
struct DataType< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rt_dynamixel_msgs/ModeSettingRequest";
  }

  static const char* value(const ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
int32 DISABLE=0\n\
int32 CONTROL_RUN=1\n\
int32 SETTING=2\n\
int32 TEST=500\n\
\n\
int32 mode\n\
";
  }

  static const char* value(const ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ModeSettingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rt_dynamixel_msgs::ModeSettingRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RT_DYNAMIXEL_MSGS_MESSAGE_MODESETTINGREQUEST_H
