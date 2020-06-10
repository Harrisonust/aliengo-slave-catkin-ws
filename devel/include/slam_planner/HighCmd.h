// Generated by gencpp from file slam_planner/HighCmd.msg
// DO NOT EDIT!


#ifndef SLAM_PLANNER_MESSAGE_HIGHCMD_H
#define SLAM_PLANNER_MESSAGE_HIGHCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <slam_planner/LED.h>

namespace slam_planner
{
template <class ContainerAllocator>
struct HighCmd_
{
  typedef HighCmd_<ContainerAllocator> Type;

  HighCmd_()
    : levelFlag(0)
    , commVersion(0)
    , robotID(0)
    , SN(0)
    , bandWidth(0)
    , mode(0)
    , forwardSpeed(0.0)
    , sideSpeed(0.0)
    , rotateSpeed(0.0)
    , bodyHeight(0.0)
    , footRaiseHeight(0.0)
    , yaw(0.0)
    , pitch(0.0)
    , roll(0.0)
    , led()
    , wirelessRemote()
    , AppRemote()
    , reserve(0)
    , crc(0)  {
      wirelessRemote.assign(0);

      AppRemote.assign(0);
  }
  HighCmd_(const ContainerAllocator& _alloc)
    : levelFlag(0)
    , commVersion(0)
    , robotID(0)
    , SN(0)
    , bandWidth(0)
    , mode(0)
    , forwardSpeed(0.0)
    , sideSpeed(0.0)
    , rotateSpeed(0.0)
    , bodyHeight(0.0)
    , footRaiseHeight(0.0)
    , yaw(0.0)
    , pitch(0.0)
    , roll(0.0)
    , led()
    , wirelessRemote()
    , AppRemote()
    , reserve(0)
    , crc(0)  {
  (void)_alloc;
      led.assign( ::slam_planner::LED_<ContainerAllocator> (_alloc));

      wirelessRemote.assign(0);

      AppRemote.assign(0);
  }



   typedef uint8_t _levelFlag_type;
  _levelFlag_type levelFlag;

   typedef uint16_t _commVersion_type;
  _commVersion_type commVersion;

   typedef uint16_t _robotID_type;
  _robotID_type robotID;

   typedef uint32_t _SN_type;
  _SN_type SN;

   typedef uint8_t _bandWidth_type;
  _bandWidth_type bandWidth;

   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef float _forwardSpeed_type;
  _forwardSpeed_type forwardSpeed;

   typedef float _sideSpeed_type;
  _sideSpeed_type sideSpeed;

   typedef float _rotateSpeed_type;
  _rotateSpeed_type rotateSpeed;

   typedef float _bodyHeight_type;
  _bodyHeight_type bodyHeight;

   typedef float _footRaiseHeight_type;
  _footRaiseHeight_type footRaiseHeight;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _roll_type;
  _roll_type roll;

   typedef boost::array< ::slam_planner::LED_<ContainerAllocator> , 4>  _led_type;
  _led_type led;

   typedef boost::array<uint8_t, 40>  _wirelessRemote_type;
  _wirelessRemote_type wirelessRemote;

   typedef boost::array<uint8_t, 40>  _AppRemote_type;
  _AppRemote_type AppRemote;

   typedef uint32_t _reserve_type;
  _reserve_type reserve;

   typedef int32_t _crc_type;
  _crc_type crc;





  typedef boost::shared_ptr< ::slam_planner::HighCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slam_planner::HighCmd_<ContainerAllocator> const> ConstPtr;

}; // struct HighCmd_

typedef ::slam_planner::HighCmd_<std::allocator<void> > HighCmd;

typedef boost::shared_ptr< ::slam_planner::HighCmd > HighCmdPtr;
typedef boost::shared_ptr< ::slam_planner::HighCmd const> HighCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slam_planner::HighCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slam_planner::HighCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::slam_planner::HighCmd_<ContainerAllocator1> & lhs, const ::slam_planner::HighCmd_<ContainerAllocator2> & rhs)
{
  return lhs.levelFlag == rhs.levelFlag &&
    lhs.commVersion == rhs.commVersion &&
    lhs.robotID == rhs.robotID &&
    lhs.SN == rhs.SN &&
    lhs.bandWidth == rhs.bandWidth &&
    lhs.mode == rhs.mode &&
    lhs.forwardSpeed == rhs.forwardSpeed &&
    lhs.sideSpeed == rhs.sideSpeed &&
    lhs.rotateSpeed == rhs.rotateSpeed &&
    lhs.bodyHeight == rhs.bodyHeight &&
    lhs.footRaiseHeight == rhs.footRaiseHeight &&
    lhs.yaw == rhs.yaw &&
    lhs.pitch == rhs.pitch &&
    lhs.roll == rhs.roll &&
    lhs.led == rhs.led &&
    lhs.wirelessRemote == rhs.wirelessRemote &&
    lhs.AppRemote == rhs.AppRemote &&
    lhs.reserve == rhs.reserve &&
    lhs.crc == rhs.crc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::slam_planner::HighCmd_<ContainerAllocator1> & lhs, const ::slam_planner::HighCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace slam_planner

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::slam_planner::HighCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slam_planner::HighCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_planner::HighCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_planner::HighCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_planner::HighCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_planner::HighCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slam_planner::HighCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1a655499a3f64905db59ceed65ca774a";
  }

  static const char* value(const ::slam_planner::HighCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1a655499a3f64905ULL;
  static const uint64_t static_value2 = 0xdb59ceed65ca774aULL;
};

template<class ContainerAllocator>
struct DataType< ::slam_planner::HighCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slam_planner/HighCmd";
  }

  static const char* value(const ::slam_planner::HighCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slam_planner::HighCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 levelFlag\n"
"uint16 commVersion\n"
"uint16 robotID\n"
"uint32 SN\n"
"uint8 bandWidth\n"
"uint8 mode\n"
"float32 forwardSpeed\n"
"float32 sideSpeed\n"
"float32 rotateSpeed	\n"
"float32 bodyHeight\n"
"float32 footRaiseHeight\n"
"float32 yaw\n"
"float32 pitch\n"
"float32 roll\n"
"LED[4] led\n"
"uint8[40] wirelessRemote\n"
"uint8[40] AppRemote\n"
"uint32 reserve\n"
"int32 crc\n"
"================================================================================\n"
"MSG: slam_planner/LED\n"
"uint8 r\n"
"uint8 g\n"
"uint8 b\n"
;
  }

  static const char* value(const ::slam_planner::HighCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slam_planner::HighCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.levelFlag);
      stream.next(m.commVersion);
      stream.next(m.robotID);
      stream.next(m.SN);
      stream.next(m.bandWidth);
      stream.next(m.mode);
      stream.next(m.forwardSpeed);
      stream.next(m.sideSpeed);
      stream.next(m.rotateSpeed);
      stream.next(m.bodyHeight);
      stream.next(m.footRaiseHeight);
      stream.next(m.yaw);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.led);
      stream.next(m.wirelessRemote);
      stream.next(m.AppRemote);
      stream.next(m.reserve);
      stream.next(m.crc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HighCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slam_planner::HighCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slam_planner::HighCmd_<ContainerAllocator>& v)
  {
    s << indent << "levelFlag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.levelFlag);
    s << indent << "commVersion: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.commVersion);
    s << indent << "robotID: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.robotID);
    s << indent << "SN: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.SN);
    s << indent << "bandWidth: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bandWidth);
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "forwardSpeed: ";
    Printer<float>::stream(s, indent + "  ", v.forwardSpeed);
    s << indent << "sideSpeed: ";
    Printer<float>::stream(s, indent + "  ", v.sideSpeed);
    s << indent << "rotateSpeed: ";
    Printer<float>::stream(s, indent + "  ", v.rotateSpeed);
    s << indent << "bodyHeight: ";
    Printer<float>::stream(s, indent + "  ", v.bodyHeight);
    s << indent << "footRaiseHeight: ";
    Printer<float>::stream(s, indent + "  ", v.footRaiseHeight);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "led[]" << std::endl;
    for (size_t i = 0; i < v.led.size(); ++i)
    {
      s << indent << "  led[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::slam_planner::LED_<ContainerAllocator> >::stream(s, indent + "    ", v.led[i]);
    }
    s << indent << "wirelessRemote[]" << std::endl;
    for (size_t i = 0; i < v.wirelessRemote.size(); ++i)
    {
      s << indent << "  wirelessRemote[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.wirelessRemote[i]);
    }
    s << indent << "AppRemote[]" << std::endl;
    for (size_t i = 0; i < v.AppRemote.size(); ++i)
    {
      s << indent << "  AppRemote[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.AppRemote[i]);
    }
    s << indent << "reserve: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reserve);
    s << indent << "crc: ";
    Printer<int32_t>::stream(s, indent + "  ", v.crc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAM_PLANNER_MESSAGE_HIGHCMD_H
