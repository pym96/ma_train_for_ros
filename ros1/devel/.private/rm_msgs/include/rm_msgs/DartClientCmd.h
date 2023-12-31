// Generated by gencpp from file rm_msgs/DartClientCmd.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_DARTCLIENTCMD_H
#define RM_MSGS_MESSAGE_DARTCLIENTCMD_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rm_msgs
{
template <class ContainerAllocator>
struct DartClientCmd_
{
  typedef DartClientCmd_<ContainerAllocator> Type;

  DartClientCmd_()
    : dart_launch_opening_status(0)
    , dart_attack_target(0)
    , target_change_time(0)
    , first_dart_speed(0)
    , second_dart_speed(0)
    , third_dart_speed(0)
    , fourth_dart_speed(0)
    , last_dart_launch_time(0)
    , operate_launch_cmd_time(0)
    , stamp()  {
    }
  DartClientCmd_(const ContainerAllocator& _alloc)
    : dart_launch_opening_status(0)
    , dart_attack_target(0)
    , target_change_time(0)
    , first_dart_speed(0)
    , second_dart_speed(0)
    , third_dart_speed(0)
    , fourth_dart_speed(0)
    , last_dart_launch_time(0)
    , operate_launch_cmd_time(0)
    , stamp()  {
  (void)_alloc;
    }



   typedef uint8_t _dart_launch_opening_status_type;
  _dart_launch_opening_status_type dart_launch_opening_status;

   typedef uint8_t _dart_attack_target_type;
  _dart_attack_target_type dart_attack_target;

   typedef uint16_t _target_change_time_type;
  _target_change_time_type target_change_time;

   typedef uint8_t _first_dart_speed_type;
  _first_dart_speed_type first_dart_speed;

   typedef uint8_t _second_dart_speed_type;
  _second_dart_speed_type second_dart_speed;

   typedef uint8_t _third_dart_speed_type;
  _third_dart_speed_type third_dart_speed;

   typedef uint8_t _fourth_dart_speed_type;
  _fourth_dart_speed_type fourth_dart_speed;

   typedef uint16_t _last_dart_launch_time_type;
  _last_dart_launch_time_type last_dart_launch_time;

   typedef uint16_t _operate_launch_cmd_time_type;
  _operate_launch_cmd_time_type operate_launch_cmd_time;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CLOSED)
  #undef CLOSED
#endif
#if defined(_WIN32) && defined(OPENING_OR_CLOSING)
  #undef OPENING_OR_CLOSING
#endif
#if defined(_WIN32) && defined(OPENED)
  #undef OPENED
#endif

  enum {
    CLOSED = 1u,
    OPENING_OR_CLOSING = 2u,
    OPENED = 0u,
  };


  typedef boost::shared_ptr< ::rm_msgs::DartClientCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::DartClientCmd_<ContainerAllocator> const> ConstPtr;

}; // struct DartClientCmd_

typedef ::rm_msgs::DartClientCmd_<std::allocator<void> > DartClientCmd;

typedef boost::shared_ptr< ::rm_msgs::DartClientCmd > DartClientCmdPtr;
typedef boost::shared_ptr< ::rm_msgs::DartClientCmd const> DartClientCmdConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::DartClientCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::DartClientCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::DartClientCmd_<ContainerAllocator1> & lhs, const ::rm_msgs::DartClientCmd_<ContainerAllocator2> & rhs)
{
  return lhs.dart_launch_opening_status == rhs.dart_launch_opening_status &&
    lhs.dart_attack_target == rhs.dart_attack_target &&
    lhs.target_change_time == rhs.target_change_time &&
    lhs.first_dart_speed == rhs.first_dart_speed &&
    lhs.second_dart_speed == rhs.second_dart_speed &&
    lhs.third_dart_speed == rhs.third_dart_speed &&
    lhs.fourth_dart_speed == rhs.fourth_dart_speed &&
    lhs.last_dart_launch_time == rhs.last_dart_launch_time &&
    lhs.operate_launch_cmd_time == rhs.operate_launch_cmd_time &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::DartClientCmd_<ContainerAllocator1> & lhs, const ::rm_msgs::DartClientCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::DartClientCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::DartClientCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::DartClientCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::DartClientCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::DartClientCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::DartClientCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::DartClientCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0411c0f6c4a7e463f78cc3d240a1860e";
  }

  static const char* value(const ::rm_msgs::DartClientCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0411c0f6c4a7e463ULL;
  static const uint64_t static_value2 = 0xf78cc3d240a1860eULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::DartClientCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/DartClientCmd";
  }

  static const char* value(const ::rm_msgs::DartClientCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::DartClientCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 dart_launch_opening_status\n"
"uint8 dart_attack_target\n"
"uint16 target_change_time\n"
"uint8 first_dart_speed\n"
"uint8 second_dart_speed\n"
"uint8 third_dart_speed\n"
"uint8 fourth_dart_speed\n"
"uint16 last_dart_launch_time\n"
"uint16 operate_launch_cmd_time\n"
"\n"
"uint8 CLOSED = 1\n"
"uint8 OPENING_OR_CLOSING = 2\n"
"uint8 OPENED = 0\n"
"\n"
"time stamp\n"
;
  }

  static const char* value(const ::rm_msgs::DartClientCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::DartClientCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dart_launch_opening_status);
      stream.next(m.dart_attack_target);
      stream.next(m.target_change_time);
      stream.next(m.first_dart_speed);
      stream.next(m.second_dart_speed);
      stream.next(m.third_dart_speed);
      stream.next(m.fourth_dart_speed);
      stream.next(m.last_dart_launch_time);
      stream.next(m.operate_launch_cmd_time);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DartClientCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::DartClientCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::DartClientCmd_<ContainerAllocator>& v)
  {
    s << indent << "dart_launch_opening_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dart_launch_opening_status);
    s << indent << "dart_attack_target: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dart_attack_target);
    s << indent << "target_change_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.target_change_time);
    s << indent << "first_dart_speed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.first_dart_speed);
    s << indent << "second_dart_speed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.second_dart_speed);
    s << indent << "third_dart_speed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.third_dart_speed);
    s << indent << "fourth_dart_speed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fourth_dart_speed);
    s << indent << "last_dart_launch_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.last_dart_launch_time);
    s << indent << "operate_launch_cmd_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.operate_launch_cmd_time);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_DARTCLIENTCMD_H
