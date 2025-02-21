# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from jetbot/Hcp.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Hcp(genpy.Message):
  _md5sum = "b43018bb32e264090ccdd50096e77265"
  _type = "jetbot/Hcp"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int16 mouse_speed_x
int16 mouse_speed_y
int16 mouse_speed_z
uint8 mouse_button_left
uint8 mouse_button_right
uint16 key
uint16 res"""
  __slots__ = ['mouse_speed_x','mouse_speed_y','mouse_speed_z','mouse_button_left','mouse_button_right','key','res']
  _slot_types = ['int16','int16','int16','uint8','uint8','uint16','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       mouse_speed_x,mouse_speed_y,mouse_speed_z,mouse_button_left,mouse_button_right,key,res

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Hcp, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.mouse_speed_x is None:
        self.mouse_speed_x = 0
      if self.mouse_speed_y is None:
        self.mouse_speed_y = 0
      if self.mouse_speed_z is None:
        self.mouse_speed_z = 0
      if self.mouse_button_left is None:
        self.mouse_button_left = 0
      if self.mouse_button_right is None:
        self.mouse_button_right = 0
      if self.key is None:
        self.key = 0
      if self.res is None:
        self.res = 0
    else:
      self.mouse_speed_x = 0
      self.mouse_speed_y = 0
      self.mouse_speed_z = 0
      self.mouse_button_left = 0
      self.mouse_button_right = 0
      self.key = 0
      self.res = 0

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
      buff.write(_get_struct_3h2B2H().pack(_x.mouse_speed_x, _x.mouse_speed_y, _x.mouse_speed_z, _x.mouse_button_left, _x.mouse_button_right, _x.key, _x.res))
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
      end += 12
      (_x.mouse_speed_x, _x.mouse_speed_y, _x.mouse_speed_z, _x.mouse_button_left, _x.mouse_button_right, _x.key, _x.res,) = _get_struct_3h2B2H().unpack(str[start:end])
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
      buff.write(_get_struct_3h2B2H().pack(_x.mouse_speed_x, _x.mouse_speed_y, _x.mouse_speed_z, _x.mouse_button_left, _x.mouse_button_right, _x.key, _x.res))
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
      end += 12
      (_x.mouse_speed_x, _x.mouse_speed_y, _x.mouse_speed_z, _x.mouse_button_left, _x.mouse_button_right, _x.key, _x.res,) = _get_struct_3h2B2H().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3h2B2H = None
def _get_struct_3h2B2H():
    global _struct_3h2B2H
    if _struct_3h2B2H is None:
        _struct_3h2B2H = struct.Struct("<3h2B2H")
    return _struct_3h2B2H
