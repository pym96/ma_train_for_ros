// Generated by gencpp from file rm_msgs/SetLimitVelRequest.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_SETLIMITVELREQUEST_H
#define RM_MSGS_MESSAGE_SETLIMITVELREQUEST_H


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
struct SetLimitVelRequest_
{
  typedef SetLimitVelRequest_<ContainerAllocator> Type;

  SetLimitVelRequest_()
    : limit_vel(0.0)  {
    }
  SetLimitVelRequest_(const ContainerAllocator& _alloc)
    : limit_vel(0.0)  {
  (void)_alloc;
    }



   typedef float _limit_vel_type;
  _limit_vel_type limit_vel;





  typedef boost::shared_ptr< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetLimitVelRequest_

typedef ::rm_msgs::SetLimitVelRequest_<std::allocator<void> > SetLimitVelRequest;

typedef boost::shared_ptr< ::rm_msgs::SetLimitVelRequest > SetLimitVelRequestPtr;
typedef boost::shared_ptr< ::rm_msgs::SetLimitVelRequest const> SetLimitVelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::SetLimitVelRequest_<ContainerAllocator1> & lhs, const ::rm_msgs::SetLimitVelRequest_<ContainerAllocator2> & rhs)
{
  return lhs.limit_vel == rhs.limit_vel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::SetLimitVelRequest_<ContainerAllocator1> & lhs, const ::rm_msgs::SetLimitVelRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a8702d35067db92042403fd9588fc65d";
  }

  static const char* value(const ::rm_msgs::SetLimitVelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa8702d35067db920ULL;
  static const uint64_t static_value2 = 0x42403fd9588fc65dULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/SetLimitVelRequest";
  }

  static const char* value(const ::rm_msgs::SetLimitVelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 limit_vel\n"
;
  }

  static const char* value(const ::rm_msgs::SetLimitVelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.limit_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetLimitVelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::SetLimitVelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::SetLimitVelRequest_<ContainerAllocator>& v)
  {
    s << indent << "limit_vel: ";
    Printer<float>::stream(s, indent + "  ", v.limit_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_SETLIMITVELREQUEST_H
