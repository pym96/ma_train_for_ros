// Generated by gencpp from file rm_msgs/TagMsg.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_TAGMSG_H
#define RM_MSGS_MESSAGE_TAGMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace rm_msgs
{
template <class ContainerAllocator>
struct TagMsg_
{
  typedef TagMsg_<ContainerAllocator> Type;

  TagMsg_()
    : color(0)
    , letter(0)
    , pose()  {
    }
  TagMsg_(const ContainerAllocator& _alloc)
    : color(0)
    , letter(0)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _color_type;
  _color_type color;

   typedef uint8_t _letter_type;
  _letter_type letter;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::rm_msgs::TagMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::TagMsg_<ContainerAllocator> const> ConstPtr;

}; // struct TagMsg_

typedef ::rm_msgs::TagMsg_<std::allocator<void> > TagMsg;

typedef boost::shared_ptr< ::rm_msgs::TagMsg > TagMsgPtr;
typedef boost::shared_ptr< ::rm_msgs::TagMsg const> TagMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::TagMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::TagMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::TagMsg_<ContainerAllocator1> & lhs, const ::rm_msgs::TagMsg_<ContainerAllocator2> & rhs)
{
  return lhs.color == rhs.color &&
    lhs.letter == rhs.letter &&
    lhs.pose == rhs.pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::TagMsg_<ContainerAllocator1> & lhs, const ::rm_msgs::TagMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::TagMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::TagMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::TagMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::TagMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::TagMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::TagMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::TagMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "20cfdd82cc6da3ba1e2608103b8aa270";
  }

  static const char* value(const ::rm_msgs::TagMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x20cfdd82cc6da3baULL;
  static const uint64_t static_value2 = 0x1e2608103b8aa270ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::TagMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/TagMsg";
  }

  static const char* value(const ::rm_msgs::TagMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::TagMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 color\n"
"uint8 letter\n"
"geometry_msgs/Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::rm_msgs::TagMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::TagMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.color);
      stream.next(m.letter);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TagMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::TagMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::TagMsg_<ContainerAllocator>& v)
  {
    s << indent << "color: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.color);
    s << indent << "letter: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.letter);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_TAGMSG_H
