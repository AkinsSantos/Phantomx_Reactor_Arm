# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_workbench_msgs:msg/XM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_XM(type):
    """Metaclass of message 'XM'."""

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
                'dynamixel_workbench_msgs.msg.XM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__xm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__xm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__xm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__xm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__xm

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class XM(metaclass=Metaclass_XM):
    """Message class 'XM'."""

    __slots__ = [
        '_model_number',
        '_firmware_version',
        '_model_id',
        '_baud_rate',
        '_return_delay_time',
        '_drive_mode',
        '_operating_mode',
        '_secondary_id',
        '_protocol_version',
        '_homing_offset',
        '_moving_threshold',
        '_temperature_limit',
        '_max_voltage_limit',
        '_min_voltage_limit',
        '_pwm_limit',
        '_current_limit',
        '_acceleration_limit',
        '_velocity_limit',
        '_max_position_limit',
        '_min_position_limit',
        '_shutdown',
        '_torque_enable',
        '_led',
        '_status_return_level',
        '_registered_instruction',
        '_hardware_error_status',
        '_velocity_i_gain',
        '_velocity_p_gain',
        '_position_d_gain',
        '_position_i_gain',
        '_position_p_gain',
        '_feedforward_2nd_gain',
        '_feedforward_1st_gain',
        '_bus_watchdog',
        '_goal_pwm',
        '_goal_current',
        '_goal_velocity',
        '_profile_acceleration',
        '_profile_velocity',
        '_goal_position',
        '_realtime_tick',
        '_moving',
        '_moving_status',
        '_present_pwm',
        '_present_load',
        '_present_current',
        '_present_velocity',
        '_present_position',
        '_velocity_trajectory',
        '_position_trajectory',
        '_present_input_voltage',
        '_present_temperature',
    ]

    _fields_and_field_types = {
        'model_number': 'uint16',
        'firmware_version': 'uint8',
        'model_id': 'uint8',
        'baud_rate': 'uint8',
        'return_delay_time': 'uint8',
        'drive_mode': 'uint8',
        'operating_mode': 'uint8',
        'secondary_id': 'uint8',
        'protocol_version': 'uint8',
        'homing_offset': 'int32',
        'moving_threshold': 'uint32',
        'temperature_limit': 'uint8',
        'max_voltage_limit': 'uint16',
        'min_voltage_limit': 'uint16',
        'pwm_limit': 'uint16',
        'current_limit': 'uint16',
        'acceleration_limit': 'uint32',
        'velocity_limit': 'uint32',
        'max_position_limit': 'uint32',
        'min_position_limit': 'uint32',
        'shutdown': 'uint8',
        'torque_enable': 'uint8',
        'led': 'uint8',
        'status_return_level': 'uint8',
        'registered_instruction': 'uint8',
        'hardware_error_status': 'uint8',
        'velocity_i_gain': 'uint16',
        'velocity_p_gain': 'uint16',
        'position_d_gain': 'uint16',
        'position_i_gain': 'uint16',
        'position_p_gain': 'uint16',
        'feedforward_2nd_gain': 'uint16',
        'feedforward_1st_gain': 'uint16',
        'bus_watchdog': 'uint8',
        'goal_pwm': 'int16',
        'goal_current': 'int16',
        'goal_velocity': 'int32',
        'profile_acceleration': 'uint32',
        'profile_velocity': 'uint32',
        'goal_position': 'uint32',
        'realtime_tick': 'uint16',
        'moving': 'uint8',
        'moving_status': 'uint8',
        'present_pwm': 'int16',
        'present_load': 'int16',
        'present_current': 'int16',
        'present_velocity': 'int32',
        'present_position': 'int32',
        'velocity_trajectory': 'uint32',
        'position_trajectory': 'uint32',
        'present_input_voltage': 'uint16',
        'present_temperature': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.drive_mode = kwargs.get('drive_mode', int())
        self.operating_mode = kwargs.get('operating_mode', int())
        self.secondary_id = kwargs.get('secondary_id', int())
        self.protocol_version = kwargs.get('protocol_version', int())
        self.homing_offset = kwargs.get('homing_offset', int())
        self.moving_threshold = kwargs.get('moving_threshold', int())
        self.temperature_limit = kwargs.get('temperature_limit', int())
        self.max_voltage_limit = kwargs.get('max_voltage_limit', int())
        self.min_voltage_limit = kwargs.get('min_voltage_limit', int())
        self.pwm_limit = kwargs.get('pwm_limit', int())
        self.current_limit = kwargs.get('current_limit', int())
        self.acceleration_limit = kwargs.get('acceleration_limit', int())
        self.velocity_limit = kwargs.get('velocity_limit', int())
        self.max_position_limit = kwargs.get('max_position_limit', int())
        self.min_position_limit = kwargs.get('min_position_limit', int())
        self.shutdown = kwargs.get('shutdown', int())
        self.torque_enable = kwargs.get('torque_enable', int())
        self.led = kwargs.get('led', int())
        self.status_return_level = kwargs.get('status_return_level', int())
        self.registered_instruction = kwargs.get('registered_instruction', int())
        self.hardware_error_status = kwargs.get('hardware_error_status', int())
        self.velocity_i_gain = kwargs.get('velocity_i_gain', int())
        self.velocity_p_gain = kwargs.get('velocity_p_gain', int())
        self.position_d_gain = kwargs.get('position_d_gain', int())
        self.position_i_gain = kwargs.get('position_i_gain', int())
        self.position_p_gain = kwargs.get('position_p_gain', int())
        self.feedforward_2nd_gain = kwargs.get('feedforward_2nd_gain', int())
        self.feedforward_1st_gain = kwargs.get('feedforward_1st_gain', int())
        self.bus_watchdog = kwargs.get('bus_watchdog', int())
        self.goal_pwm = kwargs.get('goal_pwm', int())
        self.goal_current = kwargs.get('goal_current', int())
        self.goal_velocity = kwargs.get('goal_velocity', int())
        self.profile_acceleration = kwargs.get('profile_acceleration', int())
        self.profile_velocity = kwargs.get('profile_velocity', int())
        self.goal_position = kwargs.get('goal_position', int())
        self.realtime_tick = kwargs.get('realtime_tick', int())
        self.moving = kwargs.get('moving', int())
        self.moving_status = kwargs.get('moving_status', int())
        self.present_pwm = kwargs.get('present_pwm', int())
        self.present_load = kwargs.get('present_load', int())
        self.present_current = kwargs.get('present_current', int())
        self.present_velocity = kwargs.get('present_velocity', int())
        self.present_position = kwargs.get('present_position', int())
        self.velocity_trajectory = kwargs.get('velocity_trajectory', int())
        self.position_trajectory = kwargs.get('position_trajectory', int())
        self.present_input_voltage = kwargs.get('present_input_voltage', int())
        self.present_temperature = kwargs.get('present_temperature', int())

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
        if self.drive_mode != other.drive_mode:
            return False
        if self.operating_mode != other.operating_mode:
            return False
        if self.secondary_id != other.secondary_id:
            return False
        if self.protocol_version != other.protocol_version:
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
        if self.pwm_limit != other.pwm_limit:
            return False
        if self.current_limit != other.current_limit:
            return False
        if self.acceleration_limit != other.acceleration_limit:
            return False
        if self.velocity_limit != other.velocity_limit:
            return False
        if self.max_position_limit != other.max_position_limit:
            return False
        if self.min_position_limit != other.min_position_limit:
            return False
        if self.shutdown != other.shutdown:
            return False
        if self.torque_enable != other.torque_enable:
            return False
        if self.led != other.led:
            return False
        if self.status_return_level != other.status_return_level:
            return False
        if self.registered_instruction != other.registered_instruction:
            return False
        if self.hardware_error_status != other.hardware_error_status:
            return False
        if self.velocity_i_gain != other.velocity_i_gain:
            return False
        if self.velocity_p_gain != other.velocity_p_gain:
            return False
        if self.position_d_gain != other.position_d_gain:
            return False
        if self.position_i_gain != other.position_i_gain:
            return False
        if self.position_p_gain != other.position_p_gain:
            return False
        if self.feedforward_2nd_gain != other.feedforward_2nd_gain:
            return False
        if self.feedforward_1st_gain != other.feedforward_1st_gain:
            return False
        if self.bus_watchdog != other.bus_watchdog:
            return False
        if self.goal_pwm != other.goal_pwm:
            return False
        if self.goal_current != other.goal_current:
            return False
        if self.goal_velocity != other.goal_velocity:
            return False
        if self.profile_acceleration != other.profile_acceleration:
            return False
        if self.profile_velocity != other.profile_velocity:
            return False
        if self.goal_position != other.goal_position:
            return False
        if self.realtime_tick != other.realtime_tick:
            return False
        if self.moving != other.moving:
            return False
        if self.moving_status != other.moving_status:
            return False
        if self.present_pwm != other.present_pwm:
            return False
        if self.present_load != other.present_load:
            return False
        if self.present_current != other.present_current:
            return False
        if self.present_velocity != other.present_velocity:
            return False
        if self.present_position != other.present_position:
            return False
        if self.velocity_trajectory != other.velocity_trajectory:
            return False
        if self.position_trajectory != other.position_trajectory:
            return False
        if self.present_input_voltage != other.present_input_voltage:
            return False
        if self.present_temperature != other.present_temperature:
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
    def drive_mode(self):
        """Message field 'drive_mode'."""
        return self._drive_mode

    @drive_mode.setter
    def drive_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drive_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drive_mode' field must be an unsigned integer in [0, 255]"
        self._drive_mode = value

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
    def secondary_id(self):
        """Message field 'secondary_id'."""
        return self._secondary_id

    @secondary_id.setter
    def secondary_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'secondary_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'secondary_id' field must be an unsigned integer in [0, 255]"
        self._secondary_id = value

    @builtins.property
    def protocol_version(self):
        """Message field 'protocol_version'."""
        return self._protocol_version

    @protocol_version.setter
    def protocol_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'protocol_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'protocol_version' field must be an unsigned integer in [0, 255]"
        self._protocol_version = value

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
    def pwm_limit(self):
        """Message field 'pwm_limit'."""
        return self._pwm_limit

    @pwm_limit.setter
    def pwm_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pwm_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pwm_limit' field must be an unsigned integer in [0, 65535]"
        self._pwm_limit = value

    @builtins.property
    def current_limit(self):
        """Message field 'current_limit'."""
        return self._current_limit

    @current_limit.setter
    def current_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'current_limit' field must be an unsigned integer in [0, 65535]"
        self._current_limit = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'max_position_limit' field must be an unsigned integer in [0, 4294967295]"
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
            assert value >= 0 and value < 4294967296, \
                "The 'min_position_limit' field must be an unsigned integer in [0, 4294967295]"
        self._min_position_limit = value

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
    def led(self):
        """Message field 'led'."""
        return self._led

    @led.setter
    def led(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'led' field must be an unsigned integer in [0, 255]"
        self._led = value

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
    def position_d_gain(self):
        """Message field 'position_d_gain'."""
        return self._position_d_gain

    @position_d_gain.setter
    def position_d_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_d_gain' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'position_d_gain' field must be an unsigned integer in [0, 65535]"
        self._position_d_gain = value

    @builtins.property
    def position_i_gain(self):
        """Message field 'position_i_gain'."""
        return self._position_i_gain

    @position_i_gain.setter
    def position_i_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_i_gain' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'position_i_gain' field must be an unsigned integer in [0, 65535]"
        self._position_i_gain = value

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
    def feedforward_2nd_gain(self):
        """Message field 'feedforward_2nd_gain'."""
        return self._feedforward_2nd_gain

    @feedforward_2nd_gain.setter
    def feedforward_2nd_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'feedforward_2nd_gain' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'feedforward_2nd_gain' field must be an unsigned integer in [0, 65535]"
        self._feedforward_2nd_gain = value

    @builtins.property
    def feedforward_1st_gain(self):
        """Message field 'feedforward_1st_gain'."""
        return self._feedforward_1st_gain

    @feedforward_1st_gain.setter
    def feedforward_1st_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'feedforward_1st_gain' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'feedforward_1st_gain' field must be an unsigned integer in [0, 65535]"
        self._feedforward_1st_gain = value

    @builtins.property
    def bus_watchdog(self):
        """Message field 'bus_watchdog'."""
        return self._bus_watchdog

    @bus_watchdog.setter
    def bus_watchdog(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bus_watchdog' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bus_watchdog' field must be an unsigned integer in [0, 255]"
        self._bus_watchdog = value

    @builtins.property
    def goal_pwm(self):
        """Message field 'goal_pwm'."""
        return self._goal_pwm

    @goal_pwm.setter
    def goal_pwm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goal_pwm' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'goal_pwm' field must be an integer in [-32768, 32767]"
        self._goal_pwm = value

    @builtins.property
    def goal_current(self):
        """Message field 'goal_current'."""
        return self._goal_current

    @goal_current.setter
    def goal_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goal_current' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'goal_current' field must be an integer in [-32768, 32767]"
        self._goal_current = value

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'goal_velocity' field must be an integer in [-2147483648, 2147483647]"
        self._goal_velocity = value

    @builtins.property
    def profile_acceleration(self):
        """Message field 'profile_acceleration'."""
        return self._profile_acceleration

    @profile_acceleration.setter
    def profile_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'profile_acceleration' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'profile_acceleration' field must be an unsigned integer in [0, 4294967295]"
        self._profile_acceleration = value

    @builtins.property
    def profile_velocity(self):
        """Message field 'profile_velocity'."""
        return self._profile_velocity

    @profile_velocity.setter
    def profile_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'profile_velocity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'profile_velocity' field must be an unsigned integer in [0, 4294967295]"
        self._profile_velocity = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'goal_position' field must be an unsigned integer in [0, 4294967295]"
        self._goal_position = value

    @builtins.property
    def realtime_tick(self):
        """Message field 'realtime_tick'."""
        return self._realtime_tick

    @realtime_tick.setter
    def realtime_tick(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'realtime_tick' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'realtime_tick' field must be an unsigned integer in [0, 65535]"
        self._realtime_tick = value

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
    def moving_status(self):
        """Message field 'moving_status'."""
        return self._moving_status

    @moving_status.setter
    def moving_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moving_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'moving_status' field must be an unsigned integer in [0, 255]"
        self._moving_status = value

    @builtins.property
    def present_pwm(self):
        """Message field 'present_pwm'."""
        return self._present_pwm

    @present_pwm.setter
    def present_pwm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_pwm' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'present_pwm' field must be an integer in [-32768, 32767]"
        self._present_pwm = value

    @builtins.property
    def present_load(self):
        """Message field 'present_load'."""
        return self._present_load

    @present_load.setter
    def present_load(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_load' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'present_load' field must be an integer in [-32768, 32767]"
        self._present_load = value

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
    def velocity_trajectory(self):
        """Message field 'velocity_trajectory'."""
        return self._velocity_trajectory

    @velocity_trajectory.setter
    def velocity_trajectory(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocity_trajectory' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'velocity_trajectory' field must be an unsigned integer in [0, 4294967295]"
        self._velocity_trajectory = value

    @builtins.property
    def position_trajectory(self):
        """Message field 'position_trajectory'."""
        return self._position_trajectory

    @position_trajectory.setter
    def position_trajectory(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_trajectory' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'position_trajectory' field must be an unsigned integer in [0, 4294967295]"
        self._position_trajectory = value

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
