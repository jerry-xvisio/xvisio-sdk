// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xv_ros2_msgs:srv/GetOrientationAt.idl
// generated code does not contain a copyright notice
#include "xv_ros2_msgs/srv/detail/get_orientation_at__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
xv_ros2_msgs__srv__GetOrientationAt_Request__init(xv_ros2_msgs__srv__GetOrientationAt_Request * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    xv_ros2_msgs__srv__GetOrientationAt_Request__fini(msg);
    return false;
  }
  return true;
}

void
xv_ros2_msgs__srv__GetOrientationAt_Request__fini(xv_ros2_msgs__srv__GetOrientationAt_Request * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
}

bool
xv_ros2_msgs__srv__GetOrientationAt_Request__are_equal(const xv_ros2_msgs__srv__GetOrientationAt_Request * lhs, const xv_ros2_msgs__srv__GetOrientationAt_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
xv_ros2_msgs__srv__GetOrientationAt_Request__copy(
  const xv_ros2_msgs__srv__GetOrientationAt_Request * input,
  xv_ros2_msgs__srv__GetOrientationAt_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

xv_ros2_msgs__srv__GetOrientationAt_Request *
xv_ros2_msgs__srv__GetOrientationAt_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__srv__GetOrientationAt_Request * msg = (xv_ros2_msgs__srv__GetOrientationAt_Request *)allocator.allocate(sizeof(xv_ros2_msgs__srv__GetOrientationAt_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xv_ros2_msgs__srv__GetOrientationAt_Request));
  bool success = xv_ros2_msgs__srv__GetOrientationAt_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xv_ros2_msgs__srv__GetOrientationAt_Request__destroy(xv_ros2_msgs__srv__GetOrientationAt_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xv_ros2_msgs__srv__GetOrientationAt_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence__init(xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__srv__GetOrientationAt_Request * data = NULL;

  if (size) {
    data = (xv_ros2_msgs__srv__GetOrientationAt_Request *)allocator.zero_allocate(size, sizeof(xv_ros2_msgs__srv__GetOrientationAt_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xv_ros2_msgs__srv__GetOrientationAt_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xv_ros2_msgs__srv__GetOrientationAt_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence__fini(xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xv_ros2_msgs__srv__GetOrientationAt_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence *
xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence * array = (xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence *)allocator.allocate(sizeof(xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence__destroy(xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence__are_equal(const xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence * lhs, const xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xv_ros2_msgs__srv__GetOrientationAt_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence__copy(
  const xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence * input,
  xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xv_ros2_msgs__srv__GetOrientationAt_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xv_ros2_msgs__srv__GetOrientationAt_Request * data =
      (xv_ros2_msgs__srv__GetOrientationAt_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xv_ros2_msgs__srv__GetOrientationAt_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xv_ros2_msgs__srv__GetOrientationAt_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xv_ros2_msgs__srv__GetOrientationAt_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `orientation`
#include "xv_ros2_msgs/msg/detail/orientation_stamped__functions.h"

bool
xv_ros2_msgs__srv__GetOrientationAt_Response__init(xv_ros2_msgs__srv__GetOrientationAt_Response * msg)
{
  if (!msg) {
    return false;
  }
  // orientation
  if (!xv_ros2_msgs__msg__OrientationStamped__init(&msg->orientation)) {
    xv_ros2_msgs__srv__GetOrientationAt_Response__fini(msg);
    return false;
  }
  return true;
}

void
xv_ros2_msgs__srv__GetOrientationAt_Response__fini(xv_ros2_msgs__srv__GetOrientationAt_Response * msg)
{
  if (!msg) {
    return;
  }
  // orientation
  xv_ros2_msgs__msg__OrientationStamped__fini(&msg->orientation);
}

bool
xv_ros2_msgs__srv__GetOrientationAt_Response__are_equal(const xv_ros2_msgs__srv__GetOrientationAt_Response * lhs, const xv_ros2_msgs__srv__GetOrientationAt_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // orientation
  if (!xv_ros2_msgs__msg__OrientationStamped__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  return true;
}

bool
xv_ros2_msgs__srv__GetOrientationAt_Response__copy(
  const xv_ros2_msgs__srv__GetOrientationAt_Response * input,
  xv_ros2_msgs__srv__GetOrientationAt_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // orientation
  if (!xv_ros2_msgs__msg__OrientationStamped__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  return true;
}

xv_ros2_msgs__srv__GetOrientationAt_Response *
xv_ros2_msgs__srv__GetOrientationAt_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__srv__GetOrientationAt_Response * msg = (xv_ros2_msgs__srv__GetOrientationAt_Response *)allocator.allocate(sizeof(xv_ros2_msgs__srv__GetOrientationAt_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xv_ros2_msgs__srv__GetOrientationAt_Response));
  bool success = xv_ros2_msgs__srv__GetOrientationAt_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xv_ros2_msgs__srv__GetOrientationAt_Response__destroy(xv_ros2_msgs__srv__GetOrientationAt_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xv_ros2_msgs__srv__GetOrientationAt_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence__init(xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__srv__GetOrientationAt_Response * data = NULL;

  if (size) {
    data = (xv_ros2_msgs__srv__GetOrientationAt_Response *)allocator.zero_allocate(size, sizeof(xv_ros2_msgs__srv__GetOrientationAt_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xv_ros2_msgs__srv__GetOrientationAt_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xv_ros2_msgs__srv__GetOrientationAt_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence__fini(xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xv_ros2_msgs__srv__GetOrientationAt_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence *
xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence * array = (xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence *)allocator.allocate(sizeof(xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence__destroy(xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence__are_equal(const xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence * lhs, const xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xv_ros2_msgs__srv__GetOrientationAt_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence__copy(
  const xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence * input,
  xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xv_ros2_msgs__srv__GetOrientationAt_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xv_ros2_msgs__srv__GetOrientationAt_Response * data =
      (xv_ros2_msgs__srv__GetOrientationAt_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xv_ros2_msgs__srv__GetOrientationAt_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xv_ros2_msgs__srv__GetOrientationAt_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xv_ros2_msgs__srv__GetOrientationAt_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
