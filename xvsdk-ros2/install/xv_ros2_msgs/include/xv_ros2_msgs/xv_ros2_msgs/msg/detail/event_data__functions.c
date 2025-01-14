// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xv_ros2_msgs:msg/EventData.idl
// generated code does not contain a copyright notice
#include "xv_ros2_msgs/msg/detail/event_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
xv_ros2_msgs__msg__EventData__init(xv_ros2_msgs__msg__EventData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    xv_ros2_msgs__msg__EventData__fini(msg);
    return false;
  }
  // type
  // state
  return true;
}

void
xv_ros2_msgs__msg__EventData__fini(xv_ros2_msgs__msg__EventData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // type
  // state
}

bool
xv_ros2_msgs__msg__EventData__are_equal(const xv_ros2_msgs__msg__EventData * lhs, const xv_ros2_msgs__msg__EventData * rhs)
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
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
xv_ros2_msgs__msg__EventData__copy(
  const xv_ros2_msgs__msg__EventData * input,
  xv_ros2_msgs__msg__EventData * output)
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
  // type
  output->type = input->type;
  // state
  output->state = input->state;
  return true;
}

xv_ros2_msgs__msg__EventData *
xv_ros2_msgs__msg__EventData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__EventData * msg = (xv_ros2_msgs__msg__EventData *)allocator.allocate(sizeof(xv_ros2_msgs__msg__EventData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xv_ros2_msgs__msg__EventData));
  bool success = xv_ros2_msgs__msg__EventData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xv_ros2_msgs__msg__EventData__destroy(xv_ros2_msgs__msg__EventData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xv_ros2_msgs__msg__EventData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xv_ros2_msgs__msg__EventData__Sequence__init(xv_ros2_msgs__msg__EventData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__EventData * data = NULL;

  if (size) {
    data = (xv_ros2_msgs__msg__EventData *)allocator.zero_allocate(size, sizeof(xv_ros2_msgs__msg__EventData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xv_ros2_msgs__msg__EventData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xv_ros2_msgs__msg__EventData__fini(&data[i - 1]);
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
xv_ros2_msgs__msg__EventData__Sequence__fini(xv_ros2_msgs__msg__EventData__Sequence * array)
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
      xv_ros2_msgs__msg__EventData__fini(&array->data[i]);
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

xv_ros2_msgs__msg__EventData__Sequence *
xv_ros2_msgs__msg__EventData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__EventData__Sequence * array = (xv_ros2_msgs__msg__EventData__Sequence *)allocator.allocate(sizeof(xv_ros2_msgs__msg__EventData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xv_ros2_msgs__msg__EventData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xv_ros2_msgs__msg__EventData__Sequence__destroy(xv_ros2_msgs__msg__EventData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xv_ros2_msgs__msg__EventData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xv_ros2_msgs__msg__EventData__Sequence__are_equal(const xv_ros2_msgs__msg__EventData__Sequence * lhs, const xv_ros2_msgs__msg__EventData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xv_ros2_msgs__msg__EventData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xv_ros2_msgs__msg__EventData__Sequence__copy(
  const xv_ros2_msgs__msg__EventData__Sequence * input,
  xv_ros2_msgs__msg__EventData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xv_ros2_msgs__msg__EventData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xv_ros2_msgs__msg__EventData * data =
      (xv_ros2_msgs__msg__EventData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xv_ros2_msgs__msg__EventData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xv_ros2_msgs__msg__EventData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xv_ros2_msgs__msg__EventData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
