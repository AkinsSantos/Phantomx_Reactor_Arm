# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_workbench_msgs:msg/DynamixelState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DynamixelState(type):
    """Metaclass of message 'DynamixelState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dynamixel_workbench_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_workbench_msgs.msg.DynamixelState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dynamixel_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dynamixel_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dynamixel_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dynamixel_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dynamixel_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DynamixelState(metaclass=Metaclass_DynamixelState):
    """Message class 'DynamixelState'."""

    __slots__ = [
        '_name',
        '_id',
        '_present_position',
        '_present_velocity',
        '_present_current',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'id': 'uint8',
        'present_position': 'int32',
        'present_velocity': 'int32',
        'present_current': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.id = kwargs.get('id', int())
        self.present_position = kwargs.get('present_position', int())
        self.present_velocity = kwargs.get('present_velocity', int())
        self.present_current = kwargs.get('present_current', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.name != other.name:
            return False
        if self.id != other.id:
            return False
        if self.present_position != other.present_position:
            return False
        if self.present_velocity != other.present_velocity:
            return False
        if self.present_current != other.present_current:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def present_position(self):
        """Message field 'present_position'."""
        return self._present_position

    @present_position.setter
    def present_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'present_position' field must be an integer in [-2147483648, 2147483647]"
        self._present_position = value

    @builtins.property
    def present_velocity(self):
        """Message field 'present_velocity'."""
        return self._present_velocity

    @present_velocity.setter
    def present_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_velocity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'present_velocity' field must be an integer in [-2147483648, 2147483647]"
        self._present_velocity = value

    @builtins.property
    def present_current(self):
        """Message field 'present_current'."""
        return self._present_current

    @present_current.setter
    def present_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_current' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'present_current' field must be an integer in [-32768, 32767]"
        self._present_current = value
