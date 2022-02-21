# generated from rosidl_generator_py/resource/_idl.py.em
# with input from first_interfaces:msg/Log.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Log(type):
    """Metaclass of message 'Log'."""

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
            module = import_type_support('first_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'first_interfaces.msg.Log')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__log

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Log(metaclass=Metaclass_Log):
    """Message class 'Log'."""

    __slots__ = [
        '_filename',
        '_message_log',
        '_level',
    ]

    _fields_and_field_types = {
        'filename': 'string',
        'message_log': 'string',
        'level': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.filename = kwargs.get('filename', str())
        self.message_log = kwargs.get('message_log', str())
        self.level = kwargs.get('level', str())

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
        if self.filename != other.filename:
            return False
        if self.message_log != other.message_log:
            return False
        if self.level != other.level:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def filename(self):
        """Message field 'filename'."""
        return self._filename

    @filename.setter
    def filename(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'filename' field must be of type 'str'"
        self._filename = value

    @property
    def message_log(self):
        """Message field 'message_log'."""
        return self._message_log

    @message_log.setter
    def message_log(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_log' field must be of type 'str'"
        self._message_log = value

    @property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'level' field must be of type 'str'"
        self._level = value
