# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_workbench_msgs:msg/DynamixelInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DynamixelInfo(type):
    """Metaclass of message 'DynamixelInfo'."""

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
                'dynamixel_workbench_msgs.msg.DynamixelInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dynamixel_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dynamixel_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dynamixel_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dynamixel_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dynamixel_info

            from dynamixel_workbench_msgs.msg import DynamixelLoadInfo
            if DynamixelLoadInfo.__class__._TYPE_SUPPORT is None:
                DynamixelLoadInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DynamixelInfo(metaclass=Metaclass_DynamixelInfo):
    """Message class 'DynamixelInfo'."""

    __slots__ = [
        '_load_info',
        '_model_name',
        '_model_number',
        '_model_id',
    ]

    _fields_and_field_types = {
        'load_info': 'dynamixel_workbench_msgs/DynamixelLoadInfo',
        'model_name': 'string',
        'model_number': 'uint16',
        'model_id': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['dynamixel_workbench_msgs', 'msg'], 'DynamixelLoadInfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from dynamixel_workbench_msgs.msg import DynamixelLoadInfo
        self.load_info = kwargs.get('load_info', DynamixelLoadInfo())
        self.model_name = kwargs.get('model_name', str())
        self.model_number = kwargs.get('model_number', int())
        self.model_id = kwargs.get('model_id', int())

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
        if self.load_info != other.load_info:
            return False
        if self.model_name != other.model_name:
            return False
        if self.model_number != other.model_number:
            return False
        if self.model_id != other.model_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def load_info(self):
        """Message field 'load_info'."""
        return self._load_info

    @load_info.setter
    def load_info(self, value):
        if __debug__:
            from dynamixel_workbench_msgs.msg import DynamixelLoadInfo
            assert \
                isinstance(value, DynamixelLoadInfo), \
                "The 'load_info' field must be a sub message of type 'DynamixelLoadInfo'"
        self._load_info = value

    @builtins.property
    def model_name(self):
        """Message field 'model_name'."""
        return self._model_name

    @model_name.setter
    def model_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model_name' field must be of type 'str'"
        self._model_name = value

    @builtins.property
    def model_number(self):
        """Message field 'model_number'."""
        return self._model_number

    @model_number.setter
    def model_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'model_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'model_number' field must be an unsigned integer in [0, 65535]"
        self._model_number = value

    @builtins.property
    def model_id(self):
        """Message field 'model_id'."""
        return self._model_id

    @model_id.setter
    def model_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'model_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'model_id' field must be an unsigned integer in [0, 255]"
        self._model_id = value
