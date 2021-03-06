// Generated by gencpp from file rt_dynamixel_msgs/ModeSetting.msg
// DO NOT EDIT!


#ifndef RT_DYNAMIXEL_MSGS_MESSAGE_MODESETTING_H
#define RT_DYNAMIXEL_MSGS_MESSAGE_MODESETTING_H

#include <ros/service_traits.h>


#include <rt_dynamixel_msgs/ModeSettingRequest.h>
#include <rt_dynamixel_msgs/ModeSettingResponse.h>


namespace rt_dynamixel_msgs
{

struct ModeSetting
{

typedef ModeSettingRequest Request;
typedef ModeSettingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ModeSetting
} // namespace rt_dynamixel_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rt_dynamixel_msgs::ModeSetting > {
  static const char* value()
  {
    return "84eab6ad37979cc9c127ed5e5d0e8fdb";
  }

  static const char* value(const ::rt_dynamixel_msgs::ModeSetting&) { return value(); }
};

template<>
struct DataType< ::rt_dynamixel_msgs::ModeSetting > {
  static const char* value()
  {
    return "rt_dynamixel_msgs/ModeSetting";
  }

  static const char* value(const ::rt_dynamixel_msgs::ModeSetting&) { return value(); }
};


// service_traits::MD5Sum< ::rt_dynamixel_msgs::ModeSettingRequest> should match 
// service_traits::MD5Sum< ::rt_dynamixel_msgs::ModeSetting > 
template<>
struct MD5Sum< ::rt_dynamixel_msgs::ModeSettingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rt_dynamixel_msgs::ModeSetting >::value();
  }
  static const char* value(const ::rt_dynamixel_msgs::ModeSettingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rt_dynamixel_msgs::ModeSettingRequest> should match 
// service_traits::DataType< ::rt_dynamixel_msgs::ModeSetting > 
template<>
struct DataType< ::rt_dynamixel_msgs::ModeSettingRequest>
{
  static const char* value()
  {
    return DataType< ::rt_dynamixel_msgs::ModeSetting >::value();
  }
  static const char* value(const ::rt_dynamixel_msgs::ModeSettingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rt_dynamixel_msgs::ModeSettingResponse> should match 
// service_traits::MD5Sum< ::rt_dynamixel_msgs::ModeSetting > 
template<>
struct MD5Sum< ::rt_dynamixel_msgs::ModeSettingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rt_dynamixel_msgs::ModeSetting >::value();
  }
  static const char* value(const ::rt_dynamixel_msgs::ModeSettingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rt_dynamixel_msgs::ModeSettingResponse> should match 
// service_traits::DataType< ::rt_dynamixel_msgs::ModeSetting > 
template<>
struct DataType< ::rt_dynamixel_msgs::ModeSettingResponse>
{
  static const char* value()
  {
    return DataType< ::rt_dynamixel_msgs::ModeSetting >::value();
  }
  static const char* value(const ::rt_dynamixel_msgs::ModeSettingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RT_DYNAMIXEL_MSGS_MESSAGE_MODESETTING_H
