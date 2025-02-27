// Generated by gencpp from file marsworks_vis_2/Tvec.msg
// DO NOT EDIT!


#ifndef MARSWORKS_VIS_2_MESSAGE_TVEC_H
#define MARSWORKS_VIS_2_MESSAGE_TVEC_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace marsworks_vis_2
{
template <class ContainerAllocator>
struct Tvec_
{
  typedef Tvec_<ContainerAllocator> Type;

  Tvec_()
    : x(0)
    , y(0)
    , z(0)  {
    }
  Tvec_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)
    , z(0)  {
  (void)_alloc;
    }



   typedef int16_t _x_type;
  _x_type x;

   typedef int16_t _y_type;
  _y_type y;

   typedef int16_t _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::marsworks_vis_2::Tvec_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marsworks_vis_2::Tvec_<ContainerAllocator> const> ConstPtr;

}; // struct Tvec_

typedef ::marsworks_vis_2::Tvec_<std::allocator<void> > Tvec;

typedef boost::shared_ptr< ::marsworks_vis_2::Tvec > TvecPtr;
typedef boost::shared_ptr< ::marsworks_vis_2::Tvec const> TvecConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marsworks_vis_2::Tvec_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marsworks_vis_2::Tvec_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marsworks_vis_2::Tvec_<ContainerAllocator1> & lhs, const ::marsworks_vis_2::Tvec_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marsworks_vis_2::Tvec_<ContainerAllocator1> & lhs, const ::marsworks_vis_2::Tvec_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marsworks_vis_2

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marsworks_vis_2::Tvec_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marsworks_vis_2::Tvec_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marsworks_vis_2::Tvec_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marsworks_vis_2::Tvec_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marsworks_vis_2::Tvec_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marsworks_vis_2::Tvec_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marsworks_vis_2::Tvec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85729383565f7e059d4a213b3db1317b";
  }

  static const char* value(const ::marsworks_vis_2::Tvec_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85729383565f7e05ULL;
  static const uint64_t static_value2 = 0x9d4a213b3db1317bULL;
};

template<class ContainerAllocator>
struct DataType< ::marsworks_vis_2::Tvec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marsworks_vis_2/Tvec";
  }

  static const char* value(const ::marsworks_vis_2::Tvec_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marsworks_vis_2::Tvec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 x\n"
"int16 y\n"
"int16 z\n"
;
  }

  static const char* value(const ::marsworks_vis_2::Tvec_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marsworks_vis_2::Tvec_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Tvec_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marsworks_vis_2::Tvec_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marsworks_vis_2::Tvec_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int16_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int16_t>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<int16_t>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARSWORKS_VIS_2_MESSAGE_TVEC_H
