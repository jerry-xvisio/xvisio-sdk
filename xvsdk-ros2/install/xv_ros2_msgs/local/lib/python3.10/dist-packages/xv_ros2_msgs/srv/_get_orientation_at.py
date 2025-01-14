# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xv_ros2_msgs:srv/GetOrientationAt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetOrientationAt_Request(type):
    """Metaclass of message 'GetOrientationAt_Request'."""

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
            module = import_type_support('xv_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xv_ros2_msgs.srv.GetOrientationAt_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_orientation_at__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_orientation_at__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_orientation_at__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_orientation_at__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_orientation_at__request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetOrientationAt_Request(metaclass=Metaclass_GetOrientationAt_Request):
    """Message class 'GetOrientationAt_Request'."""

    __slots__ = [
        '_timestamp',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())

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
        if self.timestamp != other.timestamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetOrientationAt_Response(type):
    """Metaclass of message 'GetOrientationAt_Response'."""

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
            module = import_type_support('xv_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xv_ros2_msgs.srv.GetOrientationAt_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_orientation_at__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_orientation_at__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_orientation_at__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_orientation_at__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_orientation_at__response

            from xv_ros2_msgs.msg import OrientationStamped
            if OrientationStamped.__class__._TYPE_SUPPORT is None:
                OrientationStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetOrientationAt_Response(metaclass=Metaclass_GetOrientationAt_Response):
    """Message class 'GetOrientationAt_Response'."""

    __slots__ = [
        '_orientation',
    ]

    _fields_and_field_types = {
        'orientation': 'xv_ros2_msgs/OrientationStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['xv_ros2_msgs', 'msg'], 'OrientationStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from xv_ros2_msgs.msg import OrientationStamped
        self.orientation = kwargs.get('orientation', OrientationStamped())

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
        if self.orientation != other.orientation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from xv_ros2_msgs.msg import OrientationStamped
            assert \
                isinstance(value, OrientationStamped), \
                "The 'orientation' field must be a sub message of type 'OrientationStamped'"
        self._orientation = value


class Metaclass_GetOrientationAt(type):
    """Metaclass of service 'GetOrientationAt'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xv_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xv_ros2_msgs.srv.GetOrientationAt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_orientation_at

            from xv_ros2_msgs.srv import _get_orientation_at
            if _get_orientation_at.Metaclass_GetOrientationAt_Request._TYPE_SUPPORT is None:
                _get_orientation_at.Metaclass_GetOrientationAt_Request.__import_type_support__()
            if _get_orientation_at.Metaclass_GetOrientationAt_Response._TYPE_SUPPORT is None:
                _get_orientation_at.Metaclass_GetOrientationAt_Response.__import_type_support__()


class GetOrientationAt(metaclass=Metaclass_GetOrientationAt):
    from xv_ros2_msgs.srv._get_orientation_at import GetOrientationAt_Request as Request
    from xv_ros2_msgs.srv._get_orientation_at import GetOrientationAt_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
