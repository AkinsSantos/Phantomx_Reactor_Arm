# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_workbench_msgs:msg/RX.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RX(type):
    """Metaclass of message 'RX'."""

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
                'dynamixel_workbench_msgs.msg.RX')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rx
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rx
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rx
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rx
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rx

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RX(metaclass=Metaclass_RX):
    """Message class 'RX'."""

    __slots__ = [
        '_model_number',
        '_firmware_version',
        '_model_id',
        '_baud_rate',
        '_return_delay_time',
        '_cw_angle_limit',
        '_ccw_angle_limit',
        '_temperature_limit',
        '_min_voltage_limit',
        '_max_voltage_limit',
        '_max_torque',
        '_status_return_level',
        '_alarm_led',
        '_shutdown',
        '_torque_enable',
        '_led',
        '_cw_compliance_margin',
        '_ccw_compliance_margin',
        '_cw_compliance_slope',
        '_ccw_compliance_slope',
        '_goal_position',
        '_moving_speed',
        '_torque_limit',
        '_present_position',
        '_present_speed',
        '_present_load',
        '_present_voltage',
        '_present_temperature',
        '_registered',
        '_moving',
        '_lock',
        '_punch',
    ]

    _fields_and_field_types = {
        'model_number': 'uint16',
        'firmware_version': 'uint8',
        'model_id': 'uint8',
        'baud_rate': 'uint8',
        'return_delay_time': 'uint8',
        'cw_angle_limit': 'uint16',
        'ccw_angle_limit': 'uint16',
        'temperature_limit': 'uint8',
        'min_voltage_limit': 'uint8',
        'max_voltage_limit': 'uint8',
        'max_torque': 'uint16',
        'status_return_level': 'uint8',
        'alarm_led': 'uint8',
        'shutdown': 'uint8',
        'torque_enable': 'uint8',
        'led': 'uint8',
        'cw_compliance_margin': 'uint8',
        'ccw_compliance_margin': 'uint8',
        'cw_compliance_slope': 'uint8',
        'ccw_compliance_slope': 'uint8',
        'goal_position': 'uint16',
        'moving_speed': 'uint16',
        'torque_limit': 'uint16',
        'present_position': 'uint16',
        'present_speed': 'uint16',
        'present_load': 'uint16',
        'present_voltage': 'uint8',
        'present_temperature': 'uint8',
        'registered': 'uint8',
        'moving': 'uint8',
        'lock': 'uint8',
        'punch': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.cw_angle_limit = kwargs.get('cw_angle_limit', int())
        self.ccw_angle_limit = kwargs.get('ccw_angle_limit', int())
        self.temperature_limit = kwargs.get('temperature_limit', int())
        self.min_voltage_limit = kwargs.get('min_voltage_limit', int())
        self.max_voltage_limit = kwargs.get('max_voltage_limit', int())
        self.max_torque = kwargs.get('max_torque', int())
        self.status_return_level = kwargs.get('status_return_level', int())
        self.alarm_led = kwargs.get('alarm_led', int())
        self.shutdown = kwargs.get('shutdown', int())
        self.torque_enable = kwargs.get('torque_enable', int())
        self.led = kwargs.get('led', int())
        self.cw_compliance_margin = kwargs.get('cw_compliance_margin', int())
        self.ccw_compliance_margin = kwargs.get('ccw_compliance_margin', int())
        self.cw_compliance_slope = kwargs.get('cw_compliance_slope', int())
        self.ccw_compliance_slope = kwargs.get('ccw_compliance_slope', int())
        self.goal_position = kwargs.get('goal_position', int())
        self.moving_speed = kwargs.get('moving_speed', int())
        self.torque_limit = kwargs.get('torque_limit', int())
        self.present_position = kwargs.get('present_position', int())
        self.present_speed = kwargs.get('present_speed', int())
        self.present_load = kwargs.get('present_load', int())
        self.present_voltage = kwargs.get('present_voltage', int())
        self.present_temperature = kwargs.get('present_temperature', int())
        self.registered = kwargs.get('registered', int())
        self.moving = kwargs.get('moving', int())
        self.lock = kwargs.get('lock', int())
        self.punch = kwargs.get('punch', int())

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
        if self.cw_angle_limit != other.cw_angle_limit:
            return False
        if self.ccw_angle_limit != other.ccw_angle_limit:
            return False
        if self.temperature_limit != other.temperature_limit:
            return False
        if self.min_voltage_limit != other.min_voltage_limit:
            return False
        if self.max_voltage_limit != other.max_voltage_limit:
            return False
        if self.max_torque != other.max_torque:
            return False
        if self.status_return_level != other.status_return_level:
            return False
        if self.alarm_led != other.alarm_led:
            return False
        if self.shutdown != other.shutdown:
            return False
        if self.torque_enable != other.torque_enable:
            return False
        if self.led != other.led:
            return False
        if self.cw_compliance_margin != other.cw_compliance_margin:
            return False
        if self.ccw_compliance_margin != other.ccw_compliance_margin:
            return False
        if self.cw_compliance_slope != other.cw_compliance_slope:
            return False
        if self.ccw_compliance_slope != other.ccw_compliance_slope:
            return False
        if self.goal_position != other.goal_position:
            return False
        if self.moving_speed != other.moving_speed:
            return False
        if self.torque_limit != other.torque_limit:
            return False
        if self.present_position != other.present_position:
            return False
        if self.present_speed != other.present_speed:
            return False
        if self.present_load != other.present_load:
            return False
        if self.present_voltage != other.present_voltage:
            return False
        if self.present_temperature != other.present_temperature:
            return False
        if self.registered != other.registered:
            return False
        if self.moving != other.moving:
            return False
        if self.lock != other.lock:
            return False
        if self.punch != other.punch:
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
    def cw_angle_limit(self):
        """Message field 'cw_angle_limit'."""
        return self._cw_angle_limit

    @cw_angle_limit.setter
    def cw_angle_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cw_angle_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cw_angle_limit' field must be an unsigned integer in [0, 65535]"
        self._cw_angle_limit = value

    @builtins.property
    def ccw_angle_limit(self):
        """Message field 'ccw_angle_limit'."""
        return self._ccw_angle_limit

    @ccw_angle_limit.setter
    def ccw_angle_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ccw_angle_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ccw_angle_limit' field must be an unsigned integer in [0, 65535]"
        self._ccw_angle_limit = value

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
    def min_voltage_limit(self):
        """Message field 'min_voltage_limit'."""
        return self._min_voltage_limit

    @min_voltage_limit.setter
    def min_voltage_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_voltage_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'min_voltage_limit' field must be an unsigned integer in [0, 255]"
        self._min_voltage_limit = value

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
            assert value >= 0 and value < 256, \
                "The 'max_voltage_limit' field must be an unsigned integer in [0, 255]"
        self._max_voltage_limit = value

    @builtins.property
    def max_torque(self):
        """Message field 'max_torque'."""
        return self._max_torque

    @max_torque.setter
    def max_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_torque' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_torque' field must be an unsigned integer in [0, 65535]"
        self._max_torque = value

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
    def alarm_led(self):
        """Message field 'alarm_led'."""
        return self._alarm_led

    @alarm_led.setter
    def alarm_led(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm_led' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alarm_led' field must be an unsigned integer in [0, 255]"
        self._alarm_led = value

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
    def cw_compliance_margin(self):
        """Message field 'cw_compliance_margin'."""
        return self._cw_compliance_margin

    @cw_compliance_margin.setter
    def cw_compliance_margin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cw_compliance_margin' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cw_compliance_margin' field must be an unsigned integer in [0, 255]"
        self._cw_compliance_margin = value

    @builtins.property
    def ccw_compliance_margin(self):
        """Message field 'ccw_compliance_margin'."""
        return self._ccw_compliance_margin

    @ccw_compliance_margin.setter
    def ccw_compliance_margin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ccw_compliance_margin' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ccw_compliance_margin' field must be an unsigned integer in [0, 255]"
        self._ccw_compliance_margin = value

    @builtins.property
    def cw_compliance_slope(self):
        """Message field 'cw_compliance_slope'."""
        return self._cw_compliance_slope

    @cw_compliance_slope.setter
    def cw_compliance_slope(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cw_compliance_slope' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cw_compliance_slope' field must be an unsigned integer in [0, 255]"
        self._cw_compliance_slope = value

    @builtins.property
    def ccw_compliance_slope(self):
        """Message field 'ccw_compliance_slope'."""
        return self._ccw_compliance_slope

    @ccw_compliance_slope.setter
    def ccw_compliance_slope(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ccw_compliance_slope' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ccw_compliance_slope' field must be an unsigned integer in [0, 255]"
        self._ccw_compliance_slope = value

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
            assert value >= 0 and value < 65536, \
                "The 'goal_position' field must be an unsigned integer in [0, 65535]"
        self._goal_position = value

    @builtins.property
    def moving_speed(self):
        """Message field 'moving_speed'."""
        return self._moving_speed

    @moving_speed.setter
    def moving_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moving_speed' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'moving_speed' field must be an unsigned integer in [0, 65535]"
        self._moving_speed = value

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
    def present_position(self):
        """Message field 'present_position'."""
        return self._present_position

    @present_position.setter
    def present_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_position' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'present_position' field must be an unsigned integer in [0, 65535]"
        self._present_position = value

    @builtins.property
    def present_speed(self):
        """Message field 'present_speed'."""
        return self._present_speed

    @present_speed.setter
    def present_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_speed' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'present_speed' field must be an unsigned integer in [0, 65535]"
        self._present_speed = value

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
            assert value >= 0 and value < 65536, \
                "The 'present_load' field must be an unsigned integer in [0, 65535]"
        self._present_load = value

    @builtins.property
    def present_voltage(self):
        """Message field 'present_voltage'."""
        return self._present_voltage

    @present_voltage.setter
    def present_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'present_voltage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'present_voltage' field must be an unsigned integer in [0, 255]"
        self._present_voltage = value

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
    def registered(self):
        """Message field 'registered'."""
        return self._registered

    @registered.setter
    def registered(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'registered' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'registered' field must be an unsigned integer in [0, 255]"
        self._registered = value

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
    def lock(self):
        """Message field 'lock'."""
        return self._lock

    @lock.setter
    def lock(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lock' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lock' field must be an unsigned integer in [0, 255]"
        self._lock = value

    @builtins.property
    def punch(self):
        """Message field 'punch'."""
        return self._punch

    @punch.setter
    def punch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'punch' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'punch' field must be an unsigned integer in [0, 65535]"
        self._punch = value
