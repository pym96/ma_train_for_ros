// Generated by gencpp from file rm_msgs/PowerManagementSampleAndStatusData.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_POWERMANAGEMENTSAMPLEANDSTATUSDATA_H
#define RM_MSGS_MESSAGE_POWERMANAGEMENTSAMPLEANDSTATUSDATA_H


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
struct PowerManagementSampleAndStatusData_
{
  typedef PowerManagementSampleAndStatusData_<ContainerAllocator> Type;

  PowerManagementSampleAndStatusData_()
    : chassis_power(0.0)
    , chassis_expect_power(0.0)
    , capacity_recent_charge_power(0.0)
    , capacity_remain_charge(0.0)
    , capacity_expect_charge_power(0)
    , state_machine_running_state(0)
    , power_management_protection_info(0)
    , power_management_topology(0)
    , stamp()  {
    }
  PowerManagementSampleAndStatusData_(const ContainerAllocator& _alloc)
    : chassis_power(0.0)
    , chassis_expect_power(0.0)
    , capacity_recent_charge_power(0.0)
    , capacity_remain_charge(0.0)
    , capacity_expect_charge_power(0)
    , state_machine_running_state(0)
    , power_management_protection_info(0)
    , power_management_topology(0)
    , stamp()  {
  (void)_alloc;
    }



   typedef float _chassis_power_type;
  _chassis_power_type chassis_power;

   typedef float _chassis_expect_power_type;
  _chassis_expect_power_type chassis_expect_power;

   typedef float _capacity_recent_charge_power_type;
  _capacity_recent_charge_power_type capacity_recent_charge_power;

   typedef float _capacity_remain_charge_type;
  _capacity_remain_charge_type capacity_remain_charge;

   typedef uint8_t _capacity_expect_charge_power_type;
  _capacity_expect_charge_power_type capacity_expect_charge_power;

   typedef uint8_t _state_machine_running_state_type;
  _state_machine_running_state_type state_machine_running_state;

   typedef uint8_t _power_management_protection_info_type;
  _power_management_protection_info_type power_management_protection_info;

   typedef uint8_t _power_management_topology_type;
  _power_management_topology_type power_management_topology;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;





  typedef boost::shared_ptr< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> const> ConstPtr;

}; // struct PowerManagementSampleAndStatusData_

typedef ::rm_msgs::PowerManagementSampleAndStatusData_<std::allocator<void> > PowerManagementSampleAndStatusData;

typedef boost::shared_ptr< ::rm_msgs::PowerManagementSampleAndStatusData > PowerManagementSampleAndStatusDataPtr;
typedef boost::shared_ptr< ::rm_msgs::PowerManagementSampleAndStatusData const> PowerManagementSampleAndStatusDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator1> & lhs, const ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator2> & rhs)
{
  return lhs.chassis_power == rhs.chassis_power &&
    lhs.chassis_expect_power == rhs.chassis_expect_power &&
    lhs.capacity_recent_charge_power == rhs.capacity_recent_charge_power &&
    lhs.capacity_remain_charge == rhs.capacity_remain_charge &&
    lhs.capacity_expect_charge_power == rhs.capacity_expect_charge_power &&
    lhs.state_machine_running_state == rhs.state_machine_running_state &&
    lhs.power_management_protection_info == rhs.power_management_protection_info &&
    lhs.power_management_topology == rhs.power_management_topology &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator1> & lhs, const ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65aea0c4cfd1f7e0707186c9fe85ead2";
  }

  static const char* value(const ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65aea0c4cfd1f7e0ULL;
  static const uint64_t static_value2 = 0x707186c9fe85ead2ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/PowerManagementSampleAndStatusData";
  }

  static const char* value(const ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 chassis_power\n"
"float32 chassis_expect_power\n"
"float32 capacity_recent_charge_power\n"
"float32 capacity_remain_charge\n"
"uint8 capacity_expect_charge_power\n"
"uint8 state_machine_running_state\n"
"uint8 power_management_protection_info\n"
"uint8 power_management_topology\n"
"\n"
"time stamp\n"
;
  }

  static const char* value(const ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.chassis_power);
      stream.next(m.chassis_expect_power);
      stream.next(m.capacity_recent_charge_power);
      stream.next(m.capacity_remain_charge);
      stream.next(m.capacity_expect_charge_power);
      stream.next(m.state_machine_running_state);
      stream.next(m.power_management_protection_info);
      stream.next(m.power_management_topology);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerManagementSampleAndStatusData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::PowerManagementSampleAndStatusData_<ContainerAllocator>& v)
  {
    s << indent << "chassis_power: ";
    Printer<float>::stream(s, indent + "  ", v.chassis_power);
    s << indent << "chassis_expect_power: ";
    Printer<float>::stream(s, indent + "  ", v.chassis_expect_power);
    s << indent << "capacity_recent_charge_power: ";
    Printer<float>::stream(s, indent + "  ", v.capacity_recent_charge_power);
    s << indent << "capacity_remain_charge: ";
    Printer<float>::stream(s, indent + "  ", v.capacity_remain_charge);
    s << indent << "capacity_expect_charge_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.capacity_expect_charge_power);
    s << indent << "state_machine_running_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state_machine_running_state);
    s << indent << "power_management_protection_info: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.power_management_protection_info);
    s << indent << "power_management_topology: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.power_management_topology);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_POWERMANAGEMENTSAMPLEANDSTATUSDATA_H