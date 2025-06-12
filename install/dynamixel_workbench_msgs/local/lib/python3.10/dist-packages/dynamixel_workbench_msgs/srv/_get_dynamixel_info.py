# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_workbench_msgs:srv/GetDynamixelInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetDynamixelInfo_Request(type):
    """Metaclass of message 'GetDynamixelInfo_Request'."""

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
                'dynamixel_workbench_msgs.srv.GetDynamixelInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_dynamixel_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_dynamixel_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_dynamixel_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_dynamixel_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_dynamixel_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetDynamixelInfo_Request(metaclass=Metaclass_GetDynamixelInfo_Request):
    """Message class 'GetDynamixelInfo_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetDynamixelInfo_Response(type):
    """Metaclass of message 'GetDynamixelInfo_Response'."""

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
                'dynamixel_workbench_msgs.srv.GetDynamixelInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_dynamixel_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_dynamixel_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_dynamixel_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_dynamixel_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_dynamixel_info__response

            from dynamixel_workbench_msgs.msg import DynamixelInfo
            if DynamixelInfo.__class__._TYPE_SUPPORT is None:
                DynamixelInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetDynamixelInfo_Response(metaclass=Metaclass_GetDynamixelInfo_Response):
    """Message class 'GetDynamixelInfo_Response'."""

    __slots__ = [
        '_dynamixel_info',
    ]

    _fields_and_field_types = {
        'dynamixel_info': 'dynamixel_workbench_msgs/DynamixelInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['dynamixel_workbench_msgs', 'msg'], 'DynamixelInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from dynamixel_workbench_msgs.msg import DynamixelInfo
        self.dynamixel_info = kwargs.get('dynamixel_info', DynamixelInfo())

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
        if self.dynamixel_info != other.dynamixel_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dynamixel_info(self):
        """Message field 'dynamixel_info'."""
        return self._dynamixel_info

    @dynamixel_info.setter
    def dynamixel_info(self, value):
        if __debug__:
            from dynamixel_workbench_msgs.msg import DynamixelInfo
            assert \
                isinstance(value, DynamixelInfo), \
                "The 'dynamixel_info' field must be a sub message of type 'DynamixelInfo'"
        self._dynamixel_info = value


class Metaclass_GetDynamixelInfo(type):
    """Metaclass of service 'GetDynamixelInfo'."""

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
                'dynamixel_workbench_msgs.srv.GetDynamixelInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_dynamixel_info

            from dynamixel_workbench_msgs.srv import _get_dynamixel_info
            if _get_dynamixel_info.Metaclass_GetDynamixelInfo_Request._TYPE_SUPPORT is None:
                _get_dynamixel_info.Metaclass_GetDynamixelInfo_Request.__import_type_support__()
            if _get_dynamixel_info.Metaclass_GetDynamixelInfo_Response._TYPE_SUPPORT is None:
                _get_dynamixel_info.Metaclass_GetDynamixelInfo_Response.__import_type_support__()


class GetDynamixelInfo(metaclass=Metaclass_GetDynamixelInfo):
    from dynamixel_workbench_msgs.srv._get_dynamixel_info import GetDynamixelInfo_Request as Request
    from dynamixel_workbench_msgs.srv._get_dynamixel_info import GetDynamixelInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
