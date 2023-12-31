# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from node_demo/UserType.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class UserType(genpy.Message):
  _md5sum = "78526411b17121c33eed9a69a6cc32f7"
  _type = "node_demo/UserType"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """Header demo_header
bool demo_bool
byte demo_byte
float32[] demo_floats

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
  __slots__ = ['demo_header','demo_bool','demo_byte','demo_floats']
  _slot_types = ['std_msgs/Header','bool','byte','float32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       demo_header,demo_bool,demo_byte,demo_floats

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(UserType, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.demo_header is None:
        self.demo_header = std_msgs.msg.Header()
      if self.demo_bool is None:
        self.demo_bool = False
      if self.demo_byte is None:
        self.demo_byte = 0
      if self.demo_floats is None:
        self.demo_floats = []
    else:
      self.demo_header = std_msgs.msg.Header()
      self.demo_bool = False
      self.demo_byte = 0
      self.demo_floats = []

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
      buff.write(_get_struct_3I().pack(_x.demo_header.seq, _x.demo_header.stamp.secs, _x.demo_header.stamp.nsecs))
      _x = self.demo_header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_Bb().pack(_x.demo_bool, _x.demo_byte))
      length = len(self.demo_floats)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.demo_floats))
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
      if self.demo_header is None:
        self.demo_header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.demo_header.seq, _x.demo_header.stamp.secs, _x.demo_header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.demo_header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.demo_header.frame_id = str[start:end]
      _x = self
      start = end
      end += 2
      (_x.demo_bool, _x.demo_byte,) = _get_struct_Bb().unpack(str[start:end])
      self.demo_bool = bool(self.demo_bool)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.demo_floats = s.unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.demo_header.seq, _x.demo_header.stamp.secs, _x.demo_header.stamp.nsecs))
      _x = self.demo_header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_Bb().pack(_x.demo_bool, _x.demo_byte))
      length = len(self.demo_floats)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.demo_floats.tostring())
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
      if self.demo_header is None:
        self.demo_header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.demo_header.seq, _x.demo_header.stamp.secs, _x.demo_header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.demo_header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.demo_header.frame_id = str[start:end]
      _x = self
      start = end
      end += 2
      (_x.demo_bool, _x.demo_byte,) = _get_struct_Bb().unpack(str[start:end])
      self.demo_bool = bool(self.demo_bool)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.demo_floats = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_Bb = None
def _get_struct_Bb():
    global _struct_Bb
    if _struct_Bb is None:
        _struct_Bb = struct.Struct("<Bb")
    return _struct_Bb
