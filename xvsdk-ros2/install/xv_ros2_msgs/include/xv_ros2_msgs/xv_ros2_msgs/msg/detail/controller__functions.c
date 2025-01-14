// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xv_ros2_msgs:msg/Controller.idl
// generated code does not contain a copyright notice
#include "xv_ros2_msgs/msg/detail/controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
xv_ros2_msgs__msg__Controller__init(xv_ros2_msgs__msg__Controller * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    xv_ros2_msgs__msg__Controller__fini(msg);
    return false;
  }
  // keytrigger
  // keyside
  // rockerx
  // rockery
  // key
  return true;
}

void
xv_ros2_msgs__msg__Controller__fini(xv_ros2_msgs__msg__Controller * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // keytrigger
  // keyside
  // rockerx
  // rockery
  // key
}

bool
xv_ros2_msgs__msg__Controller__are_equal(const xv_ros2_msgs__msg__Controller * lhs, const xv_ros2_msgs__msg__Controller * rhs)
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
  // keytrigger
  if (lhs->keytrigger != rhs->keytrigger) {
    return false;
  }
  // keyside
  if (lhs->keyside != rhs->keyside) {
    return false;
  }
  // rockerx
  if (lhs->rockerx != rhs->rockerx) {
    return false;
  }
  // rockery
  if (lhs->rockery != rhs->rockery) {
    return false;
  }
  // key
  if (lhs->key != rhs->key) {
    return false;
  }
  return true;
}

bool
xv_ros2_msgs__msg__Controller__copy(
  const xv_ros2_msgs__msg__Controller * input,
  xv_ros2_msgs__msg__Controller * output)
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
  // keytrigger
  output->keytrigger = input->keytrigger;
  // keyside
  output->keyside = input->keyside;
  // rockerx
  output->rockerx = input->rockerx;
  // rockery
  output->rockery = input->rockery;
  // key
  output->key = input->key;
  return true;
}

xv_ros2_msgs__msg__Controller *
xv_ros2_msgs__msg__Controller__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__Controller * msg = (xv_ros2_msgs__msg__Controller *)allocator.allocate(sizeof(xv_ros2_msgs__msg__Controller), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xv_ros2_msgs__msg__Controller));
  bool success = xv_ros2_msgs__msg__Controller__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xv_ros2_msgs__msg__Controller__destroy(xv_ros2_msgs__msg__Controller * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xv_ros2_msgs__msg__Controller__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xv_ros2_msgs__msg__Controller__Sequence__init(xv_ros2_msgs__msg__Controller__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__Controller * data = NULL;

  if (size) {
    data = (xv_ros2_msgs__msg__Controller *)allocator.zero_allocate(size, sizeof(xv_ros2_msgs__msg__Controller), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xv_ros2_msgs__msg__Controller__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xv_ros2_msgs__msg__Controller__fini(&data[i - 1]);
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
xv_ros2_msgs__msg__Controller__Sequence__fini(xv_ros2_msgs__msg__Controller__Sequence * array)
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
      xv_ros2_msgs__msg__Controller__fini(&array->data[i]);
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

xv_ros2_msgs__msg__Controller__Sequence *
xv_ros2_msgs__msg__Controller__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xv_ros2_msgs__msg__Controller__Sequence * array = (xv_ros2_msgs__msg__Controller__Sequence *)allocator.allocate(sizeof(xv_ros2_msgs__msg__Controller__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xv_ros2_msgs__msg__Controller__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xv_ros2_msgs__msg__Controller__Sequence__destroy(xv_ros2_msgs__msg__Controller__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xv_ros2_msgs__msg__Controller__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xv_ros2_msgs__msg__Controller__Sequence__are_equal(const xv_ros2_msgs__msg__Controller__Sequence * lhs, const xv_ros2_msgs__msg__Controller__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xv_ros2_msgs__msg__Controller__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xv_ros2_msgs__msg__Controller__Sequence__copy(
  const xv_ros2_msgs__msg__Controller__Sequence * input,
  xv_ros2_msgs__msg__Controller__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xv_ros2_msgs__msg__Controller);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xv_ros2_msgs__msg__Controller * data =
      (xv_ros2_msgs__msg__Controller *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xv_ros2_msgs__msg__Controller__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xv_ros2_msgs__msg__Controller__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xv_ros2_msgs__msg__Controller__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
