// Generated by gencpp from file dyros_jet_msgs/TaskCommand.msg
// DO NOT EDIT!


#ifndef DYROS_JET_MSGS_MESSAGE_TASKCOMMAND_H
#define DYROS_JET_MSGS_MESSAGE_TASKCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace dyros_jet_msgs
{
template <class ContainerAllocator>
struct TaskCommand_
{
  typedef TaskCommand_<ContainerAllocator> Type;

  TaskCommand_()
    : header()
    , end_effector()
    , mode()
    , pose()
    , duration()  {
      end_effector.assign(false);

      mode.assign(0);

      duration.assign(0.0);
  }
  TaskCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , end_effector()
    , mode()
    , pose()
    , duration()  {
  (void)_alloc;
      end_effector.assign(false);

      mode.assign(0);

      pose.assign( ::geometry_msgs::Pose_<ContainerAllocator> (_alloc));

      duration.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array<uint8_t, 4>  _end_effector_type;
  _end_effector_type end_effector;

   typedef boost::array<uint32_t, 4>  _mode_type;
  _mode_type mode;

   typedef boost::array< ::geometry_msgs::Pose_<ContainerAllocator> , 4>  _pose_type;
  _pose_type pose;

   typedef boost::array<double, 4>  _duration_type;
  _duration_type duration;



  enum {
    EE_LEFT_FOOT = 0u,
    EE_RIGHT_FOOT = 1u,
    EE_LEFT_HAND = 2u,
    EE_RIGHT_HAND = 3u,
    RELATIVE = 0u,
    ABSOLUTE = 1u,
  };


  typedef boost::shared_ptr< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> const> ConstPtr;

}; // struct TaskCommand_

typedef ::dyros_jet_msgs::TaskCommand_<std::allocator<void> > TaskCommand;

typedef boost::shared_ptr< ::dyros_jet_msgs::TaskCommand > TaskCommandPtr;
typedef boost::shared_ptr< ::dyros_jet_msgs::TaskCommand const> TaskCommandConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dyros_jet_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'dyros_jet_msgs': ['/home/rui/catkin_ws/src/Humanoid2020FallHW/dyros_jet_msgs/msg', '/home/rui/catkin_ws/devel/share/dyros_jet_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "636def6d1efe8a9dd71ed012354704b8";
  }

  static const char* value(const ::dyros_jet_msgs::TaskCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x636def6d1efe8a9dULL;
  static const uint64_t static_value2 = 0xd71ed012354704b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dyros_jet_msgs/TaskCommand";
  }

  static const char* value(const ::dyros_jet_msgs::TaskCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# end_effector = true -> use \n\
bool[4] end_effector\n\
uint32 EE_LEFT_FOOT = 0\n\
uint32 EE_RIGHT_FOOT = 1\n\
uint32 EE_LEFT_HAND = 2\n\
uint32 EE_RIGHT_HAND = 3\n\
\n\
uint32[4] mode\n\
uint32 RELATIVE=0\n\
uint32 ABSOLUTE=1\n\
\n\
geometry_msgs/Pose[4] pose\n\
\n\
float64[4] duration\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::dyros_jet_msgs::TaskCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.end_effector);
      stream.next(m.mode);
      stream.next(m.pose);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dyros_jet_msgs::TaskCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dyros_jet_msgs::TaskCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "end_effector[]" << std::endl;
    for (size_t i = 0; i < v.end_effector.size(); ++i)
    {
      s << indent << "  end_effector[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.end_effector[i]);
    }
    s << indent << "mode[]" << std::endl;
    for (size_t i = 0; i < v.mode.size(); ++i)
    {
      s << indent << "  mode[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.mode[i]);
    }
    s << indent << "pose[]" << std::endl;
    for (size_t i = 0; i < v.pose.size(); ++i)
    {
      s << indent << "  pose[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.pose[i]);
    }
    s << indent << "duration[]" << std::endl;
    for (size_t i = 0; i < v.duration.size(); ++i)
    {
      s << indent << "  duration[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.duration[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYROS_JET_MSGS_MESSAGE_TASKCOMMAND_H
