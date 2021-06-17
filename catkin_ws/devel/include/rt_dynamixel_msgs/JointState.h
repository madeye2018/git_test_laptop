// Generated by gencpp from file rt_dynamixel_msgs/JointState.msg
// DO NOT EDIT!


#ifndef RT_DYNAMIXEL_MSGS_MESSAGE_JOINTSTATE_H
#define RT_DYNAMIXEL_MSGS_MESSAGE_JOINTSTATE_H


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
struct JointState_
{
  typedef JointState_<ContainerAllocator> Type;

  JointState_()
    : id()
    , updated()
    , angle()
    , velocity()
    , current()  {
    }
  JointState_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , updated(_alloc)
    , angle(_alloc)
    , velocity(_alloc)
    , current(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _id_type;
  _id_type id;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _updated_type;
  _updated_type updated;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _angle_type;
  _angle_type angle;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _velocity_type;
  _velocity_type velocity;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _current_type;
  _current_type current;



  enum {
    UPDATED = 0u,
    LOST = 128u,
  };


  typedef boost::shared_ptr< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> const> ConstPtr;

}; // struct JointState_

typedef ::rt_dynamixel_msgs::JointState_<std::allocator<void> > JointState;

typedef boost::shared_ptr< ::rt_dynamixel_msgs::JointState > JointStatePtr;
typedef boost::shared_ptr< ::rt_dynamixel_msgs::JointState const> JointStateConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rt_dynamixel_msgs::JointState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rt_dynamixel_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rt_dynamixel_msgs': ['/home/rui/catkin_ws/src/rt_dynamixel_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "06ba1356a0bc81b57a392e7b27a8749e";
  }

  static const char* value(const ::rt_dynamixel_msgs::JointState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x06ba1356a0bc81b5ULL;
  static const uint64_t static_value2 = 0x7a392e7b27a8749eULL;
};

template<class ContainerAllocator>
struct DataType< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rt_dynamixel_msgs/JointState";
  }

  static const char* value(const ::rt_dynamixel_msgs::JointState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 UPDATED=0\n\
uint8 LOST=128\n\
\n\
uint8[] id\n\
uint8[] updated # error\n\
float64[] angle\n\
float64[] velocity\n\
float64[] current\n\
\n\
";
  }

  static const char* value(const ::rt_dynamixel_msgs::JointState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.updated);
      stream.next(m.angle);
      stream.next(m.velocity);
      stream.next(m.current);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rt_dynamixel_msgs::JointState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rt_dynamixel_msgs::JointState_<ContainerAllocator>& v)
  {
    s << indent << "id[]" << std::endl;
    for (size_t i = 0; i < v.id.size(); ++i)
    {
      s << indent << "  id[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.id[i]);
    }
    s << indent << "updated[]" << std::endl;
    for (size_t i = 0; i < v.updated.size(); ++i)
    {
      s << indent << "  updated[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.updated[i]);
    }
    s << indent << "angle[]" << std::endl;
    for (size_t i = 0; i < v.angle.size(); ++i)
    {
      s << indent << "  angle[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.angle[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "current[]" << std::endl;
    for (size_t i = 0; i < v.current.size(); ++i)
    {
      s << indent << "  current[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.current[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RT_DYNAMIXEL_MSGS_MESSAGE_JOINTSTATE_H
