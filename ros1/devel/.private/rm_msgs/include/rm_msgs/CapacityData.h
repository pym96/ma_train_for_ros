// Generated by gencpp from file rm_msgs/CapacityData.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_CAPACITYDATA_H
#define RM_MSGS_MESSAGE_CAPACITYDATA_H


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
struct CapacityData_
{
  typedef CapacityData_<ContainerAllocator> Type;

  CapacityData_()
    : chassis_power(0)
    , expect_power(0)
    , capacity_expect_charge_power(0)
    , capacity_recent_charge_power(0.0)
    , cap_power(0.0)
    , stamp()  {
    }
  CapacityData_(const ContainerAllocator& _alloc)
    : chassis_power(0)
    , expect_power(0)
    , capacity_expect_charge_power(0)
    , capacity_recent_charge_power(0.0)
    , cap_power(0.0)
    , stamp()  {
  (void)_alloc;
    }



   typedef uint8_t _chassis_power_type;
  _chassis_power_type chassis_power;

   typedef uint8_t _expect_power_type;
  _expect_power_type expect_power;

   typedef uint8_t _capacity_expect_charge_power_type;
  _capacity_expect_charge_power_type capacity_expect_charge_power;

   typedef float _capacity_recent_charge_power_type;
  _capacity_recent_charge_power_type capacity_recent_charge_power;

   typedef float _cap_power_type;
  _cap_power_type cap_power;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;





  typedef boost::shared_ptr< ::rm_msgs::CapacityData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::CapacityData_<ContainerAllocator> const> ConstPtr;

}; // struct CapacityData_

typedef ::rm_msgs::CapacityData_<std::allocator<void> > CapacityData;

typedef boost::shared_ptr< ::rm_msgs::CapacityData > CapacityDataPtr;
typedef boost::shared_ptr< ::rm_msgs::CapacityData const> CapacityDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::CapacityData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::CapacityData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::CapacityData_<ContainerAllocator1> & lhs, const ::rm_msgs::CapacityData_<ContainerAllocator2> & rhs)
{
  return lhs.chassis_power == rhs.chassis_power &&
    lhs.expect_power == rhs.expect_power &&
    lhs.capacity_expect_charge_power == rhs.capacity_expect_charge_power &&
    lhs.capacity_recent_charge_power == rhs.capacity_recent_charge_power &&
    lhs.cap_power == rhs.cap_power &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::CapacityData_<ContainerAllocator1> & lhs, const ::rm_msgs::CapacityData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::CapacityData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::CapacityData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::CapacityData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::CapacityData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::CapacityData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::CapacityData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::CapacityData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ad6f6d030cbf10ddb62b620036fbab5";
  }

  static const char* value(const ::rm_msgs::CapacityData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ad6f6d030cbf10dULL;
  static const uint64_t static_value2 = 0xdb62b620036fbab5ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::CapacityData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/CapacityData";
  }

  static const char* value(const ::rm_msgs::CapacityData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::CapacityData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 chassis_power\n"
"uint8 expect_power\n"
"uint8 capacity_expect_charge_power\n"
"float32 capacity_recent_charge_power\n"
"float32 cap_power\n"
"\n"
"time stamp\n"
;
  }

  static const char* value(const ::rm_msgs::CapacityData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::CapacityData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.chassis_power);
      stream.next(m.expect_power);
      stream.next(m.capacity_expect_charge_power);
      stream.next(m.capacity_recent_charge_power);
      stream.next(m.cap_power);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CapacityData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::CapacityData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::CapacityData_<ContainerAllocator>& v)
  {
    s << indent << "chassis_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.chassis_power);
    s << indent << "expect_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.expect_power);
    s << indent << "capacity_expect_charge_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.capacity_expect_charge_power);
    s << indent << "capacity_recent_charge_power: ";
    Printer<float>::stream(s, indent + "  ", v.capacity_recent_charge_power);
    s << indent << "cap_power: ";
    Printer<float>::stream(s, indent + "  ", v.cap_power);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_CAPACITYDATA_H
