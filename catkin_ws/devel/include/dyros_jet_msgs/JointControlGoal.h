// Generated by gencpp from file dyros_jet_msgs/JointControlGoal.msg
// DO NOT EDIT!


#ifndef DYROS_JET_MSGS_MESSAGE_JOINTCONTROLGOAL_H
#define DYROS_JET_MSGS_MESSAGE_JOINTCONTROLGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dyros_jet_msgs/JointCommand.h>

namespace dyros_jet_msgs
{
template <class ContainerAllocator>
struct JointControlGoal_
{
  typedef JointControlGoal_<ContainerAllocator> Type;

  JointControlGoal_()
    : command()  {
    }
  JointControlGoal_(const ContainerAllocator& _alloc)
    : command(_alloc)  {
  (void)_alloc;
    }



   typedef  ::dyros_jet_msgs::JointCommand_<ContainerAllocator>  _command_type;
  _command_type command;





  typedef boost::shared_ptr< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> const> ConstPtr;

}; // struct JointControlGoal_

typedef ::dyros_jet_msgs::JointControlGoal_<std::allocator<void> > JointControlGoal;

typedef boost::shared_ptr< ::dyros_jet_msgs::JointControlGoal > JointControlGoalPtr;
typedef boost::shared_ptr< ::dyros_jet_msgs::JointControlGoal const> JointControlGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dyros_jet_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'dyros_jet_msgs': ['/home/rui/catkin_ws/src/Humanoid2020FallHW/dyros_jet_msgs/msg', '/home/rui/catkin_ws/devel/share/dyros_jet_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "874fb898b8ead1ed8aabbca492edc2e1";
  }

  static const char* value(const ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x874fb898b8ead1edULL;
  static const uint64_t static_value2 = 0x8aabbca492edc2e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dyros_jet_msgs/JointControlGoal";
  }

  static const char* value(const ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
dyros_jet_msgs/JointCommand command\n\
\n\
================================================================================\n\
MSG: dyros_jet_msgs/JointCommand\n\
std_msgs/Header header\n\
\n\
string[] name\n\
float64[] position\n\
float64[] duration\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointControlGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dyros_jet_msgs::JointControlGoal_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    s << std::endl;
    Printer< ::dyros_jet_msgs::JointCommand_<ContainerAllocator> >::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYROS_JET_MSGS_MESSAGE_JOINTCONTROLGOAL_H
