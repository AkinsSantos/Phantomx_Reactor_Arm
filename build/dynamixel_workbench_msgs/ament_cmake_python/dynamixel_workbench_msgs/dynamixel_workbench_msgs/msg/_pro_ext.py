# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_workbench_msgs:msg/PROExt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PROExt(type):
    """Metaclass of message 'PROExt'."""

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
                'dynamixel_workbench_msgs.msg.PROExt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pro_ext
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pro_ext
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pro_ext
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pro_ext
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pro_ext

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PROExt(metaclass=Metaclass_PROExt):
    """Message class 'PROExt'."""

    __slots__ = [
        '_model_number',
        '_firmware_version',
        '_model_id',
        '_baud_rate',
        '_return_delay_time',
        '_operating_mode',
        '_homing_offset',
        '_moving_threshold',
        '_temperature_limit',
        '_max_voltage_limit',
        '_min_voltage_limit',
        '_acceleration_limit',
        '_torque_limit',
        '_velocity_limit',
        '_max_position_limit',
        '_min_position_limit',
        '_external_port_mode_1',
        '_external_port_mode_2',
        '_external_port_mode_3',
        '_external_port_mode_4',
        '_shutdown',
        '_torque_enable',
        '_led_red',
        '_led_green',
        '_led_blue',
        '_velocity_i_gain',
        '_velocity_p_gain',
        '_position_p_gain',
        '_goal_position',
        '_goal_velocity',
        '_goal_torque',
        '_goal_acceleration',
        '_moving',
        '_present_position',
        '_present_velocity',
        '_present_current',
        '_present_input_voltage',
        '_present_temperature',
        '_registered_instruction',
        '_status_return_level',
        '_hardware_error_status',
    ]

    _fields_and_field_types = {
        'model_number': 'uint16',
        'firmware_version': 'uint8',
        'model_id': 'uint8',
        'baud_rate': 'uint8',
        'return_delay_time': 'uint8',
        'operating_mode': 'uint8',
        'homing_offset': 'int32',
        'moving_threshold': 'uint32',
        'temperature_limit': 'uint8',
        'max_voltage_limit': 'uint16',
        'min_voltage_limit': 'uint16',
        'acceleration_limit': 'uint32',
        'torque_limit': 'uint16',
        'velocity_limit': 'uint32',
        'max_position_limit': 'int32',
        'min_position_limit': 'int32',
        'external_port_mode_1': 'uint8',
        'external_port_mode_2': 'uint8',
        'external_port_mode_3': 'uint8',
        'external_port_mode_4': 'uint8',
        'shutdown': 'uint8',
        'torque_enable': 'uint8',
        'led_red': 'uint8',
        'led_green': 'uint8',
        'led_blue': 'uint8',
        'velocity_i_gain': 'uint16',
        'velocity_p_gain': 'uint16',
        'position_p_gain': 'uint16',
        'goal_position': 'int32',
        'goal_velocity': 'uint32',
        'goal_torque': 'uint16',
        'goal_acceleration': 'int32',
        'moving': 'uint8',
        'present_position': 'int32',
        'present_velocity': 'uint32',
        'present_current': 'uint16',
        'present_input_voltage': 'uint16',
        'present_temperature': 'uint8',
        'registered_instruction': 'uint8',
        'status_return_level': 'uint8',
        'hardware_error_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.model_number = kwargs.get('model_number', int())
        self.firmware_version = kwargs.get('firmware_version', int())
        self.model_id = kwargs.get('model_id', int())
        self.baud_rate = kwargs.get('baud_rate', int())
        self.return_delay_time = kwargs.get('return_delay_time', int())
        self.operating_mode = kwargs.get('operating_mode', int())
        self.homing_offset = kwargs.get('homing_offset', int())
        self.moving_threshold = kwargs.get('moving_threshold', int())
        self.temperature_limit = kwargs.get('temperature_limit', int())
        self.max_voltage_limit = kwargs.get('max_voltage_limit', int())
        self.min_voltage_limit = kwargs.get('min_voltage_limit', int())
        self.acceleration_limit = kwargs.get('acceleration_limit', int())
        self.torque_limit = kwargs.get('torque_limit', int())
        self.velocity_limit = kwargs.get('velocity_limit', int())
        self.max_position_limit = kwargs.get('max_position_limit', int())
        self.min_position_limit = kwargs.get('min_position_limit', int())
        self.external_port_mode_1 = kwargs.get('external_port_mode_1', int())
        self.external_port_mode_2 = kwargs.get('external_port_mode_2', int())
        self.external_port_mode_3 = kwargs.get('external_port_mode_3', int())
        self.external_port_mode_4 = kwargs.get('external_port_mode_4', int())
        self.shutdown = kwargs.get('shutdown', int())
        self.torque_enable = kwargs.get('torque_enable', int())
        self.led_red = kwargs.get('led_red', int())
        self.led_green = kwargs.get('led_green', int())
        self.led_blue = kwargs.get('led_blue', int())
        self.velocity_i_gain = kwargs.get('velocity_i_gain', int())
        self.velocity_p_gain = kwargs.get('velocity_p_gain', int())
        self.position_p_gain = kwargs.get('position_p_gain', int())
        self.goal_position = kwargs.get('goal_position', int())
        self.goal_velocity = kwargs.get('goal_velocity', int())
        self.goal_torque = kwargs.get('goal_torque', int())
        self.goal_acceleration = kwargs.get('goal_acceleration', int())
        self.moving = kwargs.get('moving', int())
        self.present_position = kwargs.get('present_position', int())
        self.present_velocity = kwargs.get('present_velocity', int())
        self.present_current = kwargs.get('present_current', int())
        self.present_input_voltage = kwargs.get('present_input_voltage', int())
        self.present_temperature = kwargs.get('present_temperature', int())
        self.registered_instruction = kwargs.get('registered_instruction', int())
        self.status_return_level = kwargs.get('status_return_level', int())
        self.hardware_error_status = kwargs.get('hardware_error_status', int())

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
        if self.model_number != other.model_number:
            return False
        if self.firmware_version != other.firmware_version:
            return False
        if self.model_id != other.model_id:
            return False
        if self.baud_rate != other.baud_rate:
            return False
        if self.return_delay_time != other.return_delay_time:
            return False
        if self.operating_mode != other.operating_mode:
            return False
        if self.homing_offset != other.homing_offset:
            return False
        if self.moving_threshold != other.moving_threshold:
            return False
        if self.temperature_limit != other.temperature_limit:
            return False
        if self.max_voltage_limit != other.max_voltage_limit:
            return False
        if self.min_voltage_limit != other.min_voltage_limit:
            return False
        if self.acceleration_limit != other.acceleration_limit:
            return False
        if self.torque_limit != other.torque_limit:
            return False
        if self.velocity_limit != other.velocity_limit:
            return False
        if self.max_position_limit != other.max_position_limit:
            return False
        if self.min_position_limit != other.min_position_limit:
            return False
        if self.external_port_mode_1 != other.external_port_mode_1:
            return False
        if self.external_port_mode_2 != other.external_port_mode_2:
            return False
        if self.external_port_mode_3 != other.external_port_mode_3:
            return False
        if self.external_port_mode_4 != other.external_port_mode_4:
            return False
        if self.shutdown != other.shutdown:
            return False
        if self.torque_enable != other.torque_enable:
            return False
        if self.led_red != other.led_red:
            return False
        if self.led_green != other.led_green:
            return False
        if self.led_blue != other.led_blue:
            return False
        if self.velocity_i_gain != other.velocity_i_gain:
            return False
        if self.velocity_p_gain != other.velocity_p_gain:
            return False
        if self.position_p_gain != other.position_p_gain:
            return False
        if self.goal_position != other.goal_position:
            return False
        if self.goal_velocity != other.goal_velocity:
            return False
        if self.goal_torque != other.goal_torque:
            return False
        if self.goal_acceleration != other.goal_acceleration:
            return False
        if self.moving != other.moving:
            return False
        if self.present_position != other.present_position:
            return False
        if self.present_velocity != other.present_velocity:
            return False
        if self.present_current != other.present_current:
            return False
        if self.present_input_voltage != other.present_input_voltage:
            return False
        if self.present_temperature != other.present_temperature:
            return False
        if self.registered_instruction != other.registered_instruction:
            return False
        if self.status_return_level != other.status_return_level:
            return False
        if self.hardware_error_status != other.hardware_error_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def firmware_version(self):
        """Message field 'firmware_version'."""
        return self._firmware_version

    @firmware_version.setter
    def firmware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'firmware_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'firmware_version' field must be an unsigned integer in [0, 255]"
        self._firmware_version = value

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

    @builtins.property
    def baud_rate(self):
        """Message field 'baud_rate'."""
        return self._baud_rate

    @baud_rate.setter
    def baud_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'baud_rate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'baud_rate' field must be an unsigned integer in [0, 255]"
        self._baud_rate = value

    @builtins.property
    def return_delay_time(self):
        """Message field 'return_delay_time'."""
        return self._return_delay_time

    @return_delay_time.setter
    def return_delay_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'return_delay_time' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'return_delay_time' field must be an unsigned integer in [0, 255]"
        self._return_delay_time = value

    @builtins.property
    def operating_mode(self):
        """Message field 'operating_mode'."""
        return self._operating_mode

    @operating_mode.setter
    def operating_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operating_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'operating_mode' field must be an unsigned integer in [0, 255]"
        self._operating_mode = value

    @builtins.property
    def homing_offset(self):
        """Message field 'homing_offset'."""
        return self._homing_offset

    @homing_offset.setter
    def homing_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'homing_offset' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'homing_offset' field must be an integer in [-2147483648, 2147483647]"
        self._homing_offset = value

    @builtins.property
    def moving_threshold(self):
        """Message field 'moving_threshold'."""
        return self._moving_threshold

    @moving_threshold.setter
    def moving_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moving_threshold' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'moving_threshold' field must be an unsigned integer in [0, 4294967295]"
        self._moving_threshold = value

    @builtins.property
    def temperature_limit(self):
        """Message field 'temperature_limit'."""
        return self._temperature_limit

    @temperature_limit.setter
    def temperature_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'temperature_limit' field must be an unsigned integer in [0, 255]"
        self._temperature_limit = value

    @builtins.property
    def max_voltage_limit(self):
        """Message field 'max_voltage_limit'."""
        return self._max_voltage_limit

    @max_voltage_limit.setter
    def max_voltage_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_voltage_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_voltage_limit' field must be an unsigned integer in [0, 65535]"
        self._max_voltage_limit = value

    @builtins.property
    def min_voltage_limit(self):
        """Message field 'min_voltage_limit'."""
        return self._min_voltage_limit

    @min_voltage_limit.setter
    def min_voltage_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_voltage_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'min_voltage_limit' field must be an unsigned integer in [0, 65535]"
        self._min_voltage_limit = value

    @builtins.property
    def acceleration_limit(self):
        """Message field 'acceleration_limit'."""
        return self._acceleration_limit

    @acceleration_limit.setter
    def acceleration_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acceleration_limit' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'acceleration_limit' field must be an unsigned integer in [0, 4294967295]"
        self._acceleration_limit = value

    @builtins.property
    def torque_limit(self):
        """Message field 'torque_limit'."""
        return self._torque_limit

    @torque_limit.setter
    def torque_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'torque_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'torque_limit' field must be an unsigned integer in [0, 65535]"
        self._torque_limit = value

    @builtins.property
    def velocity_limit(self):
        """Message field 'velocity_limit'."""
        return self._velocity_limit

    @velocity_limit.setter
    def velocity_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocity_limit' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'velocity_limit' field must be an unsigned integer in [0, 4294967295]"
        self._velocity_limit = value

    @builtins.property
    def max_position_limit(self):
        """Message field 'max_position_limit'."""
        return self._max_position_limit

    @max_position_limit.setter
    def max_position_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_position_limit' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_position_limit' field must be an integer in [-2147483648, 2147483647]"
        self._max_position_limit = value

    @builtins.property
    def min_position_limit(self):
        """Message field 'min_position_limit'."""
        return self._min_position_limit

    @min_position_limit.setter
    def min_position_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_position_limit' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'min_position_limit' field must be an integer in [-2147483648, 2147483647]"
        self._min_position_limit = value

    @builtins.property
    def external_port_mode_1(self):
        """Message field 'external_port_mode_1'."""
        return self._external_port_mode_1

    @external_port_mode_1.setter
    def external_port_mode_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'external_port_mode_1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'external_port_mode_1' field must be an unsigned integer in [0, 255]"
        self._external_port_mode_1 = value

    @builtins.property
    def external_port_mode_2(self):
        """Message field 'external_port_mode_2'."""
        return self._external_port_mode_2

    @external_port_mode_2.setter
    def external_port_mode_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'external_port_mode_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'external_port_mode_2' field must be an unsigned integer in [0, 255]"
        self._external_port_mode_2 = value

    @builtins.property
    def external_port_mode_3(self):
        """Message field 'external_port_mode_3'."""
        return self._external_port_mode_3

    @external_port_mode_3.setter
    def external_port_mode_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'external_port_mode_3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'external_port_mode_3' field must be an unsigned integer in [0, 255]"
        self._external_port_mode_3 = value

    @builtins.property
    def external_port_mode_4(self):
        """Message field 'external_port_mode_4'."""
        return self._external_port_mode_4

    @external_port_mode_4.setter
    def external_port_mode_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'external_port_mode_4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'external_port_mode_4' field must be an unsigned integer in [0, 255]"
        self._external_port_mode_4 = value

    @builtins.property
    def shutdown(self):
        """Message field 'shutdown'."""
        return self._shutdown

    @shutdown.setter
    def shutdown(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shutdown' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'shutdown' field must be an unsigned integer in [0, 255]"
        self._shutdown = value

    @builtins.property
    def torque_enable(self):
        """Message field 'torque_enable'."""
        return self._torque_enable

    @torque_enable.setter
    def torque_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'torque_enable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'torque_enable' field must be an unsigned integer in [0, 255]"
        self._torque_enable = value

    @builtins.property
    def led_red(self):
        """Message field 'led_red'."""
        return self._led_red

    @led_red.setter
    def led_red(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_red' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'led_red' field must be an unsigned integer in [0, 255]"
        self._led_red = value

    @builtins.property
    def led_green(self):
        """Message field 'led_green'."""
        return self._led_green

    @led_green.setter
    def led_green(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_green' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'led_green' field must be an unsigned integer in [0, 255]"
        self._led_green = value

    @builtins.property
    def led_blue(self):
        """Message field 'led_blue'."""
        return self._led_blue

    @led_blue.setter
    def led_blue(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_blue' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'led_blue' field must be an unsigned integer in [0, 255]"
        self._led_blue = value

    @builtins.property
    def velocity_i_gain(self):
        """Message field 'velocity_i_gain'."""
        return self._velocity_i_gain

    @velocity_i_gain.setter
    def velocity_i_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocity_i_gain' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'velocity_i_gain' field must be an unsigned integer in [0, 65535]"
        self._velocity_i_gain = value

    @builtins.property
    def velocity_p_gain(self):
        """Message field 'velocity_p_gain'."""
        return self._velocity_p_gain

    @velocity_p_gain.setter
    def velocity_p_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocity_p_gain' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'velocity_p_gain' field must be an unsigned integer in [0, 65535]"
        self._velocity_p_gain = value

    @builtins.property
    def position_p_gain(self):
        """Message field 'position_p_gain'."""
        return self._position_p_gain

    @position_p_gain.setter
    def position_p_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_p_gain' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'position_p_gain' field must be an unsigned integer in [0, 65535]"
        self._position_p_gain = value

    @builtins.property
    def goal_position(self):
        """Message field 'goal_position'."""
        return self._goal_position

    @goal_position.setter
    def goal_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goal_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'goal_position' field must be an integer in [-2147483648, 2147483647]"
        self._goal_position = value

    @builtins.property
    def goal_velocity(self):
        """Message field 'goal_velocity'."""
        return self._goal_velocity

    @goal_velocity.setter
    def goal_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goal_velocity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'goal_velocity' field must be an unsigned integer in [0, 4294967295]"
        self._goal_velocity = value

    @builtins.property
    def goal_torque(self):
        """Message field 'goal_torque'."""
        return self._goal_torque

    @goal_torque.setter
    def goal_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goal_torque' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'goal_torque' field must be an unsigned integer in [0, 65535]"
        self._goal_torque = value

    @builtins.property
    def goal_acceleration(self):
        """Message field 'goal_acceleration'."""
        return self._goal_acceleration

    @goal_acceleration.setter
    def goal_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goal_acceleration' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'goal_acceleration' field must be an integer in [-2147483648, 2147483647]"
        self._goal_acceleration = value

    @builtins.property
    def moving(self):
        """Message field 'moving'."""
        return self._moving

    @moving.setter
    def moving(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moving' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'moving' field must be an unsigned integer in [0, 255]"
        self._moving = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'present_velocity' field must be an unsigned integer in [0, 4294967295]"
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
            assert value >= 0 and value < 65536, \
                "The 'present_current' field must be an unsigned integer in [0, 65535]"
        self._present_current = value

    @builtins.property
    def present_input_voltage(self):
        """Message field 'present_input_voltage'."""
        return self._present_input_voltage

    @present_input_voltage.setter
    def present_input_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_input_voltage' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'present_input_voltage' field must be an unsigned integer in [0, 65535]"
        self._present_input_voltage = value

    @builtins.property
    def present_temperature(self):
        """Message field 'present_temperature'."""
        return self._present_temperature

    @present_temperature.setter
    def present_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_temperature' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'present_temperature' field must be an unsigned integer in [0, 255]"
        self._present_temperature = value

    @builtins.property
    def registered_instruction(self):
        """Message field 'registered_instruction'."""
        return self._registered_instruction

    @registered_instruction.setter
    def registered_instruction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'registered_instruction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'registered_instruction' field must be an unsigned integer in [0, 255]"
        self._registered_instruction = value

    @builtins.property
    def status_return_level(self):
        """Message field 'status_return_level'."""
        return self._status_return_level

    @status_return_level.setter
    def status_return_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_return_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_return_level' field must be an unsigned integer in [0, 255]"
        self._status_return_level = value

    @builtins.property
    def hardware_error_status(self):
        """Message field 'hardware_error_status'."""
        return self._hardware_error_status

    @hardware_error_status.setter
    def hardware_error_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hardware_error_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hardware_error_status' field must be an unsigned integer in [0, 255]"
        self._hardware_error_status = value
