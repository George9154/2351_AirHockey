# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hockey_msgs:msg/MotorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorStatus(type):
    """Metaclass of message 'MotorStatus'."""

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
            module = import_type_support('hockey_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hockey_msgs.msg.MotorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorStatus(metaclass=Metaclass_MotorStatus):
    """Message class 'MotorStatus'."""

    __slots__ = [
        '_m1effort',
        '_m2effort',
        '_time_on_path',
    ]

    _fields_and_field_types = {
        'm1effort': 'double',
        'm2effort': 'double',
        'time_on_path': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.m1effort = kwargs.get('m1effort', float())
        self.m2effort = kwargs.get('m2effort', float())
        self.time_on_path = kwargs.get('time_on_path', float())

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
        if self.m1effort != other.m1effort:
            return False
        if self.m2effort != other.m2effort:
            return False
        if self.time_on_path != other.time_on_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def m1effort(self):
        """Message field 'm1effort'."""
        return self._m1effort

    @m1effort.setter
    def m1effort(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm1effort' field must be of type 'float'"
        self._m1effort = value

    @property
    def m2effort(self):
        """Message field 'm2effort'."""
        return self._m2effort

    @m2effort.setter
    def m2effort(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm2effort' field must be of type 'float'"
        self._m2effort = value

    @property
    def time_on_path(self):
        """Message field 'time_on_path'."""
        return self._time_on_path

    @time_on_path.setter
    def time_on_path(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_on_path' field must be of type 'float'"
        self._time_on_path = value
