// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xv_ros2_msgs:msg/OrientationStamped.idl
// generated code does not contain a copyright notice
#include "xv_ros2_msgs/msg/detail/orientation_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
xv_ros2_msgs__msg__OrientationStamped__init(xv_ros2_msgs__msg__OrientationStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    xv_ros2_msgs__msg__OrientationStamped__fini(msg);
    return false;
  }
  // matrix
  // quaternion
  if (!geometry_msgs__msg__Quaternion__init(&msg->quaternion)) {
    xv_ros2_msgs__msg__OrientationStamped__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    xv_ros2_msgs__msg__OrientationStamped__fini(msg);
    return false;
  }
  return true;
}

void
xv_ros2_msgs__msg__OrientationStamped__fini(xv_ros2_msgs__msg__OrientationStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // matrix
  // quaternion
  geometry_msgs__msg__Quaternion__fini(&msg->quaternion);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
}

bool
xv_ros2_msgs__msg__OrientationStamped__are_equal(const xv_ros2_msgs__msg__OrientationStamped * lhs, const xv_ros2_msgs__msg__OrientationStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // matrix
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->matrix[i] != rhs->matrix[i]) {
      return false;
    }
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->quaternion), &(rhs->quaternion)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  return true;
}

bool
xv_ros2_msgs__msg__OrientationStamped__copy(
  const xv_ros2_msgs__msg__OrientationStamped * input,
  xv_ros2_msgs__msg__OrientationStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // matrix
  for (size_t i = 0; i < 9; ++i) {
    output->matrix[i] = input->matrix[i];
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->quaternion), &(output->quaternion)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  return true;
}

xv_ros2_msgs__msg__OrientationStamped *
xv_ros2_msgs__msg__OrientationStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__OrientationStamped * msg = (xv_ros2_msgs__msg__OrientationStamped *)allocator.allocate(sizeof(xv_ros2_msgs__msg__OrientationStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xv_ros2_msgs__msg__OrientationStamped));
  bool success = xv_ros2_msgs__msg__OrientationStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xv_ros2_msgs__msg__OrientationStamped__destroy(xv_ros2_msgs__msg__OrientationStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xv_ros2_msgs__msg__OrientationStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xv_ros2_msgs__msg__OrientationStamped__Sequence__init(xv_ros2_msgs__msg__OrientationStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__OrientationStamped * data = NULL;

  if (size) {
    data = (xv_ros2_msgs__msg__OrientationStamped *)allocator.zero_allocate(size, sizeof(xv_ros2_msgs__msg__OrientationStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xv_ros2_msgs__msg__OrientationStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xv_ros2_msgs__msg__OrientationStamped__fini(&data[i - 1]);
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
xv_ros2_msgs__msg__OrientationStamped__Sequence__fini(xv_ros2_msgs__msg__OrientationStamped__Sequence * array)
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
      xv_ros2_msgs__msg__OrientationStamped__fini(&array->data[i]);
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

xv_ros2_msgs__msg__OrientationStamped__Sequence *
xv_ros2_msgs__msg__OrientationStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__OrientationStamped__Sequence * array = (xv_ros2_msgs__msg__OrientationStamped__Sequence *)allocator.allocate(sizeof(xv_ros2_msgs__msg__OrientationStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xv_ros2_msgs__msg__OrientationStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xv_ros2_msgs__msg__OrientationStamped__Sequence__destroy(xv_ros2_msgs__msg__OrientationStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xv_ros2_msgs__msg__OrientationStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xv_ros2_msgs__msg__OrientationStamped__Sequence__are_equal(const xv_ros2_msgs__msg__OrientationStamped__Sequence * lhs, const xv_ros2_msgs__msg__OrientationStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xv_ros2_msgs__msg__OrientationStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xv_ros2_msgs__msg__OrientationStamped__Sequence__copy(
  const xv_ros2_msgs__msg__OrientationStamped__Sequence * input,
  xv_ros2_msgs__msg__OrientationStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xv_ros2_msgs__msg__OrientationStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xv_ros2_msgs__msg__OrientationStamped * data =
      (xv_ros2_msgs__msg__OrientationStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xv_ros2_msgs__msg__OrientationStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xv_ros2_msgs__msg__OrientationStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xv_ros2_msgs__msg__OrientationStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
