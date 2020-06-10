# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from slamware_ros_sdk/MoveOptions.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import slamware_ros_sdk.msg

class MoveOptions(genpy.Message):
  _md5sum = "1e9be980ef594e7453a8d9bbbda54e01"
  _type = "slamware_ros_sdk/MoveOptions"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
MoveOptionFlag opt_flags
OptionalFlt64 speed_ratio

================================================================================
MSG: slamware_ros_sdk/MoveOptionFlag

uint32 NONE=0
uint32 APPENDING=1
uint32 MILESTONE=2
uint32 NO_SMOOTH=4
uint32 KEY_POINTS=8
uint32 PRECISE=16
uint32 WITH_YAW=32
uint32 RETURN_UNREACHABLE_DIRECTLY=64
uint32 KEY_POINTS_WITH_OA=128

uint32 flags

================================================================================
MSG: slamware_ros_sdk/OptionalFlt64

bool is_valid
float64 value
"""
  __slots__ = ['opt_flags','speed_ratio']
  _slot_types = ['slamware_ros_sdk/MoveOptionFlag','slamware_ros_sdk/OptionalFlt64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       opt_flags,speed_ratio

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MoveOptions, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.opt_flags is None:
        self.opt_flags = slamware_ros_sdk.msg.MoveOptionFlag()
      if self.speed_ratio is None:
        self.speed_ratio = slamware_ros_sdk.msg.OptionalFlt64()
    else:
      self.opt_flags = slamware_ros_sdk.msg.MoveOptionFlag()
      self.speed_ratio = slamware_ros_sdk.msg.OptionalFlt64()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_IBd().pack(_x.opt_flags.flags, _x.speed_ratio.is_valid, _x.speed_ratio.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.opt_flags is None:
        self.opt_flags = slamware_ros_sdk.msg.MoveOptionFlag()
      if self.speed_ratio is None:
        self.speed_ratio = slamware_ros_sdk.msg.OptionalFlt64()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.opt_flags.flags, _x.speed_ratio.is_valid, _x.speed_ratio.value,) = _get_struct_IBd().unpack(str[start:end])
      self.speed_ratio.is_valid = bool(self.speed_ratio.is_valid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_IBd().pack(_x.opt_flags.flags, _x.speed_ratio.is_valid, _x.speed_ratio.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.opt_flags is None:
        self.opt_flags = slamware_ros_sdk.msg.MoveOptionFlag()
      if self.speed_ratio is None:
        self.speed_ratio = slamware_ros_sdk.msg.OptionalFlt64()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.opt_flags.flags, _x.speed_ratio.is_valid, _x.speed_ratio.value,) = _get_struct_IBd().unpack(str[start:end])
      self.speed_ratio.is_valid = bool(self.speed_ratio.is_valid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_IBd = None
def _get_struct_IBd():
    global _struct_IBd
    if _struct_IBd is None:
        _struct_IBd = struct.Struct("<IBd")
    return _struct_IBd
