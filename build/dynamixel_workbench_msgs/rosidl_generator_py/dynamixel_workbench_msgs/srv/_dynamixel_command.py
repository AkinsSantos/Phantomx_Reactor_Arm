# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_workbench_msgs:srv/DynamixelCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DynamixelCommand_Request(type):
    """Metaclass of message 'DynamixelCommand_Request'."""

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
                'dynamixel_workbench_msgs.srv.DynamixelCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dynamixel_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dynamixel_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dynamixel_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dynamixel_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dynamixel_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DynamixelCommand_Request(metaclass=Metaclass_DynamixelCommand_Request):
    """Message class 'DynamixelCommand_Request'."""

    __slots__ = [
        '_command',
        '_id',
        '_addr_name',
        '_value',
    ]

    _fields_and_field_types = {
        'command': 'string',
        'id': 'uint8',
        'addr_name': 'string',
        'value': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())
        self.id = kwargs.get('id', int())
        self.addr_name = kwargs.get('addr_name', str())
        self.value = kwargs.get('value', int())

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
        if self.command != other.command:
            return False
        if self.id != other.id:
            return False
        if self.addr_name != other.addr_name:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value

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
    def addr_name(self):
        """Message field 'addr_name'."""
        return self._addr_name

    @addr_name.setter
    def addr_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'addr_name' field must be of type 'str'"
        self._addr_name = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value' field must be an integer in [-2147483648, 2147483647]"
        self._value = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DynamixelCommand_Response(type):
    """Metaclass of message 'DynamixelCommand_Response'."""

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
                'dynamixel_workbench_msgs.srv.DynamixelCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dynamixel_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dynamixel_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dynamixel_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dynamixel_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dynamixel_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DynamixelCommand_Response(metaclass=Metaclass_DynamixelCommand_Response):
    """Message class 'DynamixelCommand_Response'."""

    __slots__ = [
        '_comm_result',
    ]

    _fields_and_field_types = {
        'comm_result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.comm_result = kwargs.get('comm_result', bool())

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
        if self.comm_result != other.comm_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def comm_result(self):
        """Message field 'comm_result'."""
        return self._comm_result

    @comm_result.setter
    def comm_result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'comm_result' field must be of type 'bool'"
        self._comm_result = value


class Metaclass_DynamixelCommand(type):
    """Metaclass of service 'DynamixelCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dynamixel_workbench_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_workbench_msgs.srv.DynamixelCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__dynamixel_command

            from dynamixel_workbench_msgs.srv import _dynamixel_command
            if _dynamixel_command.Metaclass_DynamixelCommand_Request._TYPE_SUPPORT is None:
                _dynamixel_command.Metaclass_DynamixelCommand_Request.__import_type_support__()
            if _dynamixel_command.Metaclass_DynamixelCommand_Response._TYPE_SUPPORT is None:
                _dynamixel_command.Metaclass_DynamixelCommand_Response.__import_type_support__()


class DynamixelCommand(metaclass=Metaclass_DynamixelCommand):
    from dynamixel_workbench_msgs.srv._dynamixel_command import DynamixelCommand_Request as Request
    from dynamixel_workbench_msgs.srv._dynamixel_command import DynamixelCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
