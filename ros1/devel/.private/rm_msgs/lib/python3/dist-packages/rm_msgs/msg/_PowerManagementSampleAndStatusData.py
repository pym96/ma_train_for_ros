# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rm_msgs/PowerManagementSampleAndStatusData.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy

class PowerManagementSampleAndStatusData(genpy.Message):
  _md5sum = "65aea0c4cfd1f7e0707186c9fe85ead2"
  _type = "rm_msgs/PowerManagementSampleAndStatusData"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 chassis_power
float32 chassis_expect_power
float32 capacity_recent_charge_power
float32 capacity_remain_charge
uint8 capacity_expect_charge_power
uint8 state_machine_running_state
uint8 power_management_protection_info
uint8 power_management_topology

time stamp
"""
  __slots__ = ['chassis_power','chassis_expect_power','capacity_recent_charge_power','capacity_remain_charge','capacity_expect_charge_power','state_machine_running_state','power_management_protection_info','power_management_topology','stamp']
  _slot_types = ['float32','float32','float32','float32','uint8','uint8','uint8','uint8','time']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       chassis_power,chassis_expect_power,capacity_recent_charge_power,capacity_remain_charge,capacity_expect_charge_power,state_machine_running_state,power_management_protection_info,power_management_topology,stamp

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PowerManagementSampleAndStatusData, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.chassis_power is None:
        self.chassis_power = 0.
      if self.chassis_expect_power is None:
        self.chassis_expect_power = 0.
      if self.capacity_recent_charge_power is None:
        self.capacity_recent_charge_power = 0.
      if self.capacity_remain_charge is None:
        self.capacity_remain_charge = 0.
      if self.capacity_expect_charge_power is None:
        self.capacity_expect_charge_power = 0
      if self.state_machine_running_state is None:
        self.state_machine_running_state = 0
      if self.power_management_protection_info is None:
        self.power_management_protection_info = 0
      if self.power_management_topology is None:
        self.power_management_topology = 0
      if self.stamp is None:
        self.stamp = genpy.Time()
    else:
      self.chassis_power = 0.
      self.chassis_expect_power = 0.
      self.capacity_recent_charge_power = 0.
      self.capacity_remain_charge = 0.
      self.capacity_expect_charge_power = 0
      self.state_machine_running_state = 0
      self.power_management_protection_info = 0
      self.power_management_topology = 0
      self.stamp = genpy.Time()

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
      buff.write(_get_struct_4f4B2I().pack(_x.chassis_power, _x.chassis_expect_power, _x.capacity_recent_charge_power, _x.capacity_remain_charge, _x.capacity_expect_charge_power, _x.state_machine_running_state, _x.power_management_protection_info, _x.power_management_topology, _x.stamp.secs, _x.stamp.nsecs))
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
      if self.stamp is None:
        self.stamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.chassis_power, _x.chassis_expect_power, _x.capacity_recent_charge_power, _x.capacity_remain_charge, _x.capacity_expect_charge_power, _x.state_machine_running_state, _x.power_management_protection_info, _x.power_management_topology, _x.stamp.secs, _x.stamp.nsecs,) = _get_struct_4f4B2I().unpack(str[start:end])
      self.stamp.canon()
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
      buff.write(_get_struct_4f4B2I().pack(_x.chassis_power, _x.chassis_expect_power, _x.capacity_recent_charge_power, _x.capacity_remain_charge, _x.capacity_expect_charge_power, _x.state_machine_running_state, _x.power_management_protection_info, _x.power_management_topology, _x.stamp.secs, _x.stamp.nsecs))
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
      if self.stamp is None:
        self.stamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.chassis_power, _x.chassis_expect_power, _x.capacity_recent_charge_power, _x.capacity_remain_charge, _x.capacity_expect_charge_power, _x.state_machine_running_state, _x.power_management_protection_info, _x.power_management_topology, _x.stamp.secs, _x.stamp.nsecs,) = _get_struct_4f4B2I().unpack(str[start:end])
      self.stamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4f4B2I = None
def _get_struct_4f4B2I():
    global _struct_4f4B2I
    if _struct_4f4B2I is None:
        _struct_4f4B2I = struct.Struct("<4f4B2I")
    return _struct_4f4B2I
