// Generated by gencpp from file rm_msgs/TrackData.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_TRACKDATA_H
#define RM_MSGS_MESSAGE_TRACKDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>

namespace rm_msgs
{
template <class ContainerAllocator>
struct TrackData_
{
  typedef TrackData_<ContainerAllocator> Type;

  TrackData_()
    : header()
    , id(0)
    , tracking(false)
    , armors_num(0)
    , position()
    , yaw(0.0)
    , velocity()
    , v_yaw(0.0)
    , radius_1(0.0)
    , radius_2(0.0)
    , dz(0.0)
    , accel(0.0)  {
    }
  TrackData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , tracking(false)
    , armors_num(0)
    , position(_alloc)
    , yaw(0.0)
    , velocity(_alloc)
    , v_yaw(0.0)
    , radius_1(0.0)
    , radius_2(0.0)
    , dz(0.0)
    , accel(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _id_type;
  _id_type id;

   typedef uint8_t _tracking_type;
  _tracking_type tracking;

   typedef uint8_t _armors_num_type;
  _armors_num_type armors_num;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef double _yaw_type;
  _yaw_type yaw;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef double _v_yaw_type;
  _v_yaw_type v_yaw;

   typedef double _radius_1_type;
  _radius_1_type radius_1;

   typedef double _radius_2_type;
  _radius_2_type radius_2;

   typedef double _dz_type;
  _dz_type dz;

   typedef double _accel_type;
  _accel_type accel;





  typedef boost::shared_ptr< ::rm_msgs::TrackData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::TrackData_<ContainerAllocator> const> ConstPtr;

}; // struct TrackData_

typedef ::rm_msgs::TrackData_<std::allocator<void> > TrackData;

typedef boost::shared_ptr< ::rm_msgs::TrackData > TrackDataPtr;
typedef boost::shared_ptr< ::rm_msgs::TrackData const> TrackDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::TrackData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::TrackData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::TrackData_<ContainerAllocator1> & lhs, const ::rm_msgs::TrackData_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.id == rhs.id &&
    lhs.tracking == rhs.tracking &&
    lhs.armors_num == rhs.armors_num &&
    lhs.position == rhs.position &&
    lhs.yaw == rhs.yaw &&
    lhs.velocity == rhs.velocity &&
    lhs.v_yaw == rhs.v_yaw &&
    lhs.radius_1 == rhs.radius_1 &&
    lhs.radius_2 == rhs.radius_2 &&
    lhs.dz == rhs.dz &&
    lhs.accel == rhs.accel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::TrackData_<ContainerAllocator1> & lhs, const ::rm_msgs::TrackData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::TrackData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::TrackData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::TrackData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::TrackData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::TrackData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::TrackData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::TrackData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "90f0f1ca5b79dd2fabd894dad7de25af";
  }

  static const char* value(const ::rm_msgs::TrackData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x90f0f1ca5b79dd2fULL;
  static const uint64_t static_value2 = 0xabd894dad7de25afULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::TrackData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/TrackData";
  }

  static const char* value(const ::rm_msgs::TrackData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::TrackData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"uint8 id\n"
"bool tracking\n"
"uint8 armors_num\n"
"geometry_msgs/Point position\n"
"float64 yaw\n"
"geometry_msgs/Vector3 velocity\n"
"float64 v_yaw\n"
"float64 radius_1\n"
"float64 radius_2\n"
"float64 dz\n"
"float64 accel\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::rm_msgs::TrackData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::TrackData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.tracking);
      stream.next(m.armors_num);
      stream.next(m.position);
      stream.next(m.yaw);
      stream.next(m.velocity);
      stream.next(m.v_yaw);
      stream.next(m.radius_1);
      stream.next(m.radius_2);
      stream.next(m.dz);
      stream.next(m.accel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::TrackData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::TrackData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "tracking: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tracking);
    s << indent << "armors_num: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.armors_num);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "v_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.v_yaw);
    s << indent << "radius_1: ";
    Printer<double>::stream(s, indent + "  ", v.radius_1);
    s << indent << "radius_2: ";
    Printer<double>::stream(s, indent + "  ", v.radius_2);
    s << indent << "dz: ";
    Printer<double>::stream(s, indent + "  ", v.dz);
    s << indent << "accel: ";
    Printer<double>::stream(s, indent + "  ", v.accel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_TRACKDATA_H
