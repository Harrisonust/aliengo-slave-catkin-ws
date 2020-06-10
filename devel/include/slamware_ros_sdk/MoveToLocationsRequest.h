// Generated by gencpp from file slamware_ros_sdk/MoveToLocationsRequest.msg
// DO NOT EDIT!


#ifndef SLAMWARE_ROS_SDK_MESSAGE_MOVETOLOCATIONSREQUEST_H
#define SLAMWARE_ROS_SDK_MESSAGE_MOVETOLOCATIONSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <slamware_ros_sdk/MoveOptions.h>

namespace slamware_ros_sdk
{
template <class ContainerAllocator>
struct MoveToLocationsRequest_
{
  typedef MoveToLocationsRequest_<ContainerAllocator> Type;

  MoveToLocationsRequest_()
    : locations()
    , options()
    , yaw(0.0)  {
    }
  MoveToLocationsRequest_(const ContainerAllocator& _alloc)
    : locations(_alloc)
    , options(_alloc)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _locations_type;
  _locations_type locations;

   typedef  ::slamware_ros_sdk::MoveOptions_<ContainerAllocator>  _options_type;
  _options_type options;

   typedef float _yaw_type;
  _yaw_type yaw;





  typedef boost::shared_ptr< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveToLocationsRequest_

typedef ::slamware_ros_sdk::MoveToLocationsRequest_<std::allocator<void> > MoveToLocationsRequest;

typedef boost::shared_ptr< ::slamware_ros_sdk::MoveToLocationsRequest > MoveToLocationsRequestPtr;
typedef boost::shared_ptr< ::slamware_ros_sdk::MoveToLocationsRequest const> MoveToLocationsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator1> & lhs, const ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.locations == rhs.locations &&
    lhs.options == rhs.options &&
    lhs.yaw == rhs.yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator1> & lhs, const ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace slamware_ros_sdk

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f33f6579602c04837318e79ebcc71bf";
  }

  static const char* value(const ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f33f6579602c048ULL;
  static const uint64_t static_value2 = 0x37318e79ebcc71bfULL;
};

template<class ContainerAllocator>
struct DataType< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slamware_ros_sdk/MoveToLocationsRequest";
  }

  static const char* value(const ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"geometry_msgs/Point[] locations\n"
"MoveOptions options\n"
"float32 yaw\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: slamware_ros_sdk/MoveOptions\n"
"\n"
"MoveOptionFlag opt_flags\n"
"OptionalFlt64 speed_ratio\n"
"\n"
"================================================================================\n"
"MSG: slamware_ros_sdk/MoveOptionFlag\n"
"\n"
"uint32 NONE=0\n"
"uint32 APPENDING=1\n"
"uint32 MILESTONE=2\n"
"uint32 NO_SMOOTH=4\n"
"uint32 KEY_POINTS=8\n"
"uint32 PRECISE=16\n"
"uint32 WITH_YAW=32\n"
"uint32 RETURN_UNREACHABLE_DIRECTLY=64\n"
"uint32 KEY_POINTS_WITH_OA=128\n"
"\n"
"uint32 flags\n"
"\n"
"================================================================================\n"
"MSG: slamware_ros_sdk/OptionalFlt64\n"
"\n"
"bool is_valid\n"
"float64 value\n"
;
  }

  static const char* value(const ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.locations);
      stream.next(m.options);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveToLocationsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slamware_ros_sdk::MoveToLocationsRequest_<ContainerAllocator>& v)
  {
    s << indent << "locations[]" << std::endl;
    for (size_t i = 0; i < v.locations.size(); ++i)
    {
      s << indent << "  locations[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.locations[i]);
    }
    s << indent << "options: ";
    s << std::endl;
    Printer< ::slamware_ros_sdk::MoveOptions_<ContainerAllocator> >::stream(s, indent + "  ", v.options);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAMWARE_ROS_SDK_MESSAGE_MOVETOLOCATIONSREQUEST_H
