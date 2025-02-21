# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from jetbot/Rcp.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Rcp(genpy.Message):
  _md5sum = "5bd0f9dd4a8a3cd6a641f38748d7c7e3"
  _type = "jetbot/Rcp"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint16 ch1
uint16 ch2
uint16 ch3
uint16 ch4
uint8 sw1
uint8 sw2"""
  __slots__ = ['ch1','ch2','ch3','ch4','sw1','sw2']
  _slot_types = ['uint16','uint16','uint16','uint16','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ch1,ch2,ch3,ch4,sw1,sw2

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Rcp, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.ch1 is None:
        self.ch1 = 0
      if self.ch2 is None:
        self.ch2 = 0
      if self.ch3 is None:
        self.ch3 = 0
      if self.ch4 is None:
        self.ch4 = 0
      if self.sw1 is None:
        self.sw1 = 0
      if self.sw2 is None:
        self.sw2 = 0
    else:
      self.ch1 = 0
      self.ch2 = 0
      self.ch3 = 0
      self.ch4 = 0
      self.sw1 = 0
      self.sw2 = 0

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
      buff.write(_get_struct_4H2B().pack(_x.ch1, _x.ch2, _x.ch3, _x.ch4, _x.sw1, _x.sw2))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 10
      (_x.ch1, _x.ch2, _x.ch3, _x.ch4, _x.sw1, _x.sw2,) = _get_struct_4H2B().unpack(str[start:end])
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
      buff.write(_get_struct_4H2B().pack(_x.ch1, _x.ch2, _x.ch3, _x.ch4, _x.sw1, _x.sw2))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 10
      (_x.ch1, _x.ch2, _x.ch3, _x.ch4, _x.sw1, _x.sw2,) = _get_struct_4H2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4H2B = None
def _get_struct_4H2B():
    global _struct_4H2B
    if _struct_4H2B is None:
        _struct_4H2B = struct.Struct("<4H2B")
    return _struct_4H2B
