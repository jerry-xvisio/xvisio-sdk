// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xv_ros2_msgs:msg/ColorDepth.idl
// generated code does not contain a copyright notice
#include "xv_ros2_msgs/msg/detail/color_depth__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `rgb`
// Member `depth`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
xv_ros2_msgs__msg__ColorDepth__init(xv_ros2_msgs__msg__ColorDepth * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    xv_ros2_msgs__msg__ColorDepth__fini(msg);
    return false;
  }
  // height
  // width
  // rgb
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->rgb, 0)) {
    xv_ros2_msgs__msg__ColorDepth__fini(msg);
    return false;
  }
  // depth
  if (!rosidl_runtime_c__float__Sequence__init(&msg->depth, 0)) {
    xv_ros2_msgs__msg__ColorDepth__fini(msg);
    return false;
  }
  return true;
}

void
xv_ros2_msgs__msg__ColorDepth__fini(xv_ros2_msgs__msg__ColorDepth * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // rgb
  rosidl_runtime_c__uint8__Sequence__fini(&msg->rgb);
  // depth
  rosidl_runtime_c__float__Sequence__fini(&msg->depth);
}

bool
xv_ros2_msgs__msg__ColorDepth__are_equal(const xv_ros2_msgs__msg__ColorDepth * lhs, const xv_ros2_msgs__msg__ColorDepth * rhs)
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
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // rgb
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->rgb), &(rhs->rgb)))
  {
    return false;
  }
  // depth
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->depth), &(rhs->depth)))
  {
    return false;
  }
  return true;
}

bool
xv_ros2_msgs__msg__ColorDepth__copy(
  const xv_ros2_msgs__msg__ColorDepth * input,
  xv_ros2_msgs__msg__ColorDepth * output)
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
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // rgb
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->rgb), &(output->rgb)))
  {
    return false;
  }
  // depth
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->depth), &(output->depth)))
  {
    return false;
  }
  return true;
}

xv_ros2_msgs__msg__ColorDepth *
xv_ros2_msgs__msg__ColorDepth__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__ColorDepth * msg = (xv_ros2_msgs__msg__ColorDepth *)allocator.allocate(sizeof(xv_ros2_msgs__msg__ColorDepth), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xv_ros2_msgs__msg__ColorDepth));
  bool success = xv_ros2_msgs__msg__ColorDepth__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xv_ros2_msgs__msg__ColorDepth__destroy(xv_ros2_msgs__msg__ColorDepth * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xv_ros2_msgs__msg__ColorDepth__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xv_ros2_msgs__msg__ColorDepth__Sequence__init(xv_ros2_msgs__msg__ColorDepth__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__ColorDepth * data = NULL;

  if (size) {
    data = (xv_ros2_msgs__msg__ColorDepth *)allocator.zero_allocate(size, sizeof(xv_ros2_msgs__msg__ColorDepth), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xv_ros2_msgs__msg__ColorDepth__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xv_ros2_msgs__msg__ColorDepth__fini(&data[i - 1]);
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
xv_ros2_msgs__msg__ColorDepth__Sequence__fini(xv_ros2_msgs__msg__ColorDepth__Sequence * array)
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
      xv_ros2_msgs__msg__ColorDepth__fini(&array->data[i]);
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

xv_ros2_msgs__msg__ColorDepth__Sequence *
xv_ros2_msgs__msg__ColorDepth__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__ColorDepth__Sequence * array = (xv_ros2_msgs__msg__ColorDepth__Sequence *)allocator.allocate(sizeof(xv_ros2_msgs__msg__ColorDepth__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xv_ros2_msgs__msg__ColorDepth__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xv_ros2_msgs__msg__ColorDepth__Sequence__destroy(xv_ros2_msgs__msg__ColorDepth__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xv_ros2_msgs__msg__ColorDepth__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xv_ros2_msgs__msg__ColorDepth__Sequence__are_equal(const xv_ros2_msgs__msg__ColorDepth__Sequence * lhs, const xv_ros2_msgs__msg__ColorDepth__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xv_ros2_msgs__msg__ColorDepth__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xv_ros2_msgs__msg__ColorDepth__Sequence__copy(
  const xv_ros2_msgs__msg__ColorDepth__Sequence * input,
  xv_ros2_msgs__msg__ColorDepth__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xv_ros2_msgs__msg__ColorDepth);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xv_ros2_msgs__msg__ColorDepth * data =
      (xv_ros2_msgs__msg__ColorDepth *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xv_ros2_msgs__msg__ColorDepth__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xv_ros2_msgs__msg__ColorDepth__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xv_ros2_msgs__msg__ColorDepth__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
