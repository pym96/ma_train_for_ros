// Generated by gencpp from file rm_msgs/PowerManagementUnknownExceptionData.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_POWERMANAGEMENTUNKNOWNEXCEPTIONDATA_H
#define RM_MSGS_MESSAGE_POWERMANAGEMENTUNKNOWNEXCEPTIONDATA_H


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
struct PowerManagementUnknownExceptionData_
{
  typedef PowerManagementUnknownExceptionData_<ContainerAllocator> Type;

  PowerManagementUnknownExceptionData_()
    : abnormal_reset_reason(0)
    , state_machine_before_reset_mode(0)
    , power_management_before_reset_topology(0)
    , stamp()  {
    }
  PowerManagementUnknownExceptionData_(const ContainerAllocator& _alloc)
    : abnormal_reset_reason(0)
    , state_machine_before_reset_mode(0)
    , power_management_before_reset_topology(0)
    , stamp()  {
  (void)_alloc;
    }



   typedef uint8_t _abnormal_reset_reason_type;
  _abnormal_reset_reason_type abnormal_reset_reason;

   typedef uint8_t _state_machine_before_reset_mode_type;
  _state_machine_before_reset_mode_type state_machine_before_reset_mode;

   typedef uint8_t _power_management_before_reset_topology_type;
  _power_management_before_reset_topology_type power_management_before_reset_topology;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;





  typedef boost::shared_ptr< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> const> ConstPtr;

}; // struct PowerManagementUnknownExceptionData_

typedef ::rm_msgs::PowerManagementUnknownExceptionData_<std::allocator<void> > PowerManagementUnknownExceptionData;

typedef boost::shared_ptr< ::rm_msgs::PowerManagementUnknownExceptionData > PowerManagementUnknownExceptionDataPtr;
typedef boost::shared_ptr< ::rm_msgs::PowerManagementUnknownExceptionData const> PowerManagementUnknownExceptionDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator1> & lhs, const ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator2> & rhs)
{
  return lhs.abnormal_reset_reason == rhs.abnormal_reset_reason &&
    lhs.state_machine_before_reset_mode == rhs.state_machine_before_reset_mode &&
    lhs.power_management_before_reset_topology == rhs.power_management_before_reset_topology &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator1> & lhs, const ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fe5796a7df8d9f8ea5253e8284933a59";
  }

  static const char* value(const ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfe5796a7df8d9f8eULL;
  static const uint64_t static_value2 = 0xa5253e8284933a59ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/PowerManagementUnknownExceptionData";
  }

  static const char* value(const ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 abnormal_reset_reason\n"
"uint8 state_machine_before_reset_mode\n"
"uint8 power_management_before_reset_topology\n"
"\n"
"time stamp\n"
;
  }

  static const char* value(const ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.abnormal_reset_reason);
      stream.next(m.state_machine_before_reset_mode);
      stream.next(m.power_management_before_reset_topology);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerManagementUnknownExceptionData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::PowerManagementUnknownExceptionData_<ContainerAllocator>& v)
  {
    s << indent << "abnormal_reset_reason: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.abnormal_reset_reason);
    s << indent << "state_machine_before_reset_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state_machine_before_reset_mode);
    s << indent << "power_management_before_reset_topology: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.power_management_before_reset_topology);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_POWERMANAGEMENTUNKNOWNEXCEPTIONDATA_H
