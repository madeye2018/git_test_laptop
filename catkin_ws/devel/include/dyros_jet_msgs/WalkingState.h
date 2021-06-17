// Generated by gencpp from file dyros_jet_msgs/WalkingState.msg
// DO NOT EDIT!


#ifndef DYROS_JET_MSGS_MESSAGE_WALKINGSTATE_H
#define DYROS_JET_MSGS_MESSAGE_WALKINGSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dyros_jet_msgs
{
template <class ContainerAllocator>
struct WalkingState_
{
  typedef WalkingState_<ContainerAllocator> Type;

  WalkingState_()
    : walking_end(false)
    , walking_end_foot_side(false)  {
    }
  WalkingState_(const ContainerAllocator& _alloc)
    : walking_end(false)
    , walking_end_foot_side(false)  {
  (void)_alloc;
    }



   typedef uint8_t _walking_end_type;
  _walking_end_type walking_end;

   typedef uint8_t _walking_end_foot_side_type;
  _walking_end_foot_side_type walking_end_foot_side;





  typedef boost::shared_ptr< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> const> ConstPtr;

}; // struct WalkingState_

typedef ::dyros_jet_msgs::WalkingState_<std::allocator<void> > WalkingState;

typedef boost::shared_ptr< ::dyros_jet_msgs::WalkingState > WalkingStatePtr;
typedef boost::shared_ptr< ::dyros_jet_msgs::WalkingState const> WalkingStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dyros_jet_msgs::WalkingState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dyros_jet_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'dyros_jet_msgs': ['/home/rui/catkin_ws/src/Humanoid2020FallHW/dyros_jet_msgs/msg', '/home/rui/catkin_ws/devel/share/dyros_jet_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e5b99df3c7eac3f1f42ddf9f1822ced4";
  }

  static const char* value(const ::dyros_jet_msgs::WalkingState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe5b99df3c7eac3f1ULL;
  static const uint64_t static_value2 = 0xf42ddf9f1822ced4ULL;
};

template<class ContainerAllocator>
struct DataType< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dyros_jet_msgs/WalkingState";
  }

  static const char* value(const ::dyros_jet_msgs::WalkingState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool walking_end\n\
bool walking_end_foot_side\n\
\n\
";
  }

  static const char* value(const ::dyros_jet_msgs::WalkingState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.walking_end);
      stream.next(m.walking_end_foot_side);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WalkingState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dyros_jet_msgs::WalkingState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dyros_jet_msgs::WalkingState_<ContainerAllocator>& v)
  {
    s << indent << "walking_end: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.walking_end);
    s << indent << "walking_end_foot_side: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.walking_end_foot_side);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYROS_JET_MSGS_MESSAGE_WALKINGSTATE_H