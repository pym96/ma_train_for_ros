// Generated by gencpp from file rm_msgs/EnableGyroRequest.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_ENABLEGYROREQUEST_H
#define RM_MSGS_MESSAGE_ENABLEGYROREQUEST_H


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
struct EnableGyroRequest_
{
  typedef EnableGyroRequest_<ContainerAllocator> Type;

  EnableGyroRequest_()
    : gyro_speed(0.0)  {
    }
  EnableGyroRequest_(const ContainerAllocator& _alloc)
    : gyro_speed(0.0)  {
  (void)_alloc;
    }



   typedef float _gyro_speed_type;
  _gyro_speed_type gyro_speed;





  typedef boost::shared_ptr< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> const> ConstPtr;

}; // struct EnableGyroRequest_

typedef ::rm_msgs::EnableGyroRequest_<std::allocator<void> > EnableGyroRequest;

typedef boost::shared_ptr< ::rm_msgs::EnableGyroRequest > EnableGyroRequestPtr;
typedef boost::shared_ptr< ::rm_msgs::EnableGyroRequest const> EnableGyroRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::EnableGyroRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::EnableGyroRequest_<ContainerAllocator1> & lhs, const ::rm_msgs::EnableGyroRequest_<ContainerAllocator2> & rhs)
{
  return lhs.gyro_speed == rhs.gyro_speed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::EnableGyroRequest_<ContainerAllocator1> & lhs, const ::rm_msgs::EnableGyroRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be814238de886fef6fcd2391436b7b12";
  }

  static const char* value(const ::rm_msgs::EnableGyroRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe814238de886fefULL;
  static const uint64_t static_value2 = 0x6fcd2391436b7b12ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/EnableGyroRequest";
  }

  static const char* value(const ::rm_msgs::EnableGyroRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 gyro_speed\n"
;
  }

  static const char* value(const ::rm_msgs::EnableGyroRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gyro_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnableGyroRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::EnableGyroRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::EnableGyroRequest_<ContainerAllocator>& v)
  {
    s << indent << "gyro_speed: ";
    Printer<float>::stream(s, indent + "  ", v.gyro_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_ENABLEGYROREQUEST_H
