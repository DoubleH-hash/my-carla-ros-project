# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ys_ros_msgs/VehicleCMD.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import std_msgs.msg

class VehicleCMD(genpy.Message):
  _md5sum = "9029582b3d2c81df872873daf779f6b8"
  _type = "ys_ros_msgs/VehicleCMD"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header
time timestamp
float64 steerAngle
float64 vehicleSpeed
float64 acceleration
uint16 steerAngle_speed
int8 gear
int8 controlStatus    #force_stop:0, stop：1, forward：2, back：3, idle：4

uint8 enable_acceleration #是否使用CMD的加速度。0不用， 1用



================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','timestamp','steerAngle','vehicleSpeed','acceleration','steerAngle_speed','gear','controlStatus','enable_acceleration']
  _slot_types = ['std_msgs/Header','time','float64','float64','float64','uint16','int8','int8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,timestamp,steerAngle,vehicleSpeed,acceleration,steerAngle_speed,gear,controlStatus,enable_acceleration

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(VehicleCMD, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.timestamp is None:
        self.timestamp = genpy.Time()
      if self.steerAngle is None:
        self.steerAngle = 0.
      if self.vehicleSpeed is None:
        self.vehicleSpeed = 0.
      if self.acceleration is None:
        self.acceleration = 0.
      if self.steerAngle_speed is None:
        self.steerAngle_speed = 0
      if self.gear is None:
        self.gear = 0
      if self.controlStatus is None:
        self.controlStatus = 0
      if self.enable_acceleration is None:
        self.enable_acceleration = 0
    else:
      self.header = std_msgs.msg.Header()
      self.timestamp = genpy.Time()
      self.steerAngle = 0.
      self.vehicleSpeed = 0.
      self.acceleration = 0.
      self.steerAngle_speed = 0
      self.gear = 0
      self.controlStatus = 0
      self.enable_acceleration = 0

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I3dH2bB().pack(_x.timestamp.secs, _x.timestamp.nsecs, _x.steerAngle, _x.vehicleSpeed, _x.acceleration, _x.steerAngle_speed, _x.gear, _x.controlStatus, _x.enable_acceleration))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.timestamp is None:
        self.timestamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 37
      (_x.timestamp.secs, _x.timestamp.nsecs, _x.steerAngle, _x.vehicleSpeed, _x.acceleration, _x.steerAngle_speed, _x.gear, _x.controlStatus, _x.enable_acceleration,) = _get_struct_2I3dH2bB().unpack(str[start:end])
      self.timestamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I3dH2bB().pack(_x.timestamp.secs, _x.timestamp.nsecs, _x.steerAngle, _x.vehicleSpeed, _x.acceleration, _x.steerAngle_speed, _x.gear, _x.controlStatus, _x.enable_acceleration))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.timestamp is None:
        self.timestamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 37
      (_x.timestamp.secs, _x.timestamp.nsecs, _x.steerAngle, _x.vehicleSpeed, _x.acceleration, _x.steerAngle_speed, _x.gear, _x.controlStatus, _x.enable_acceleration,) = _get_struct_2I3dH2bB().unpack(str[start:end])
      self.timestamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I3dH2bB = None
def _get_struct_2I3dH2bB():
    global _struct_2I3dH2bB
    if _struct_2I3dH2bB is None:
        _struct_2I3dH2bB = struct.Struct("<2I3dH2bB")
    return _struct_2I3dH2bB
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I