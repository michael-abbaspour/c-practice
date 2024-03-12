# Set Array library header file for Array Simple.
set(ARRAY_SIMPLE_H "${PROJECT_SOURCE_DIR}/include/data_structures/array/array_simple.h")
# Set Array library header file for Array Rotation.
set(ARRAY_ROTATION_H "${PROJECT_SOURCE_DIR}/include/data_structures/array/array_rotation.h")
# Set Stack library header file for Stack.
set(STACK_H "${PROJECT_SOURCE_DIR}/include/data_structures/stack/stack.h")
# Set Queue library header for Circular Queue.
set(CIRCULAR_QUEUE_H "${PROJECT_SOURCE_DIR}/include/data_structures/queue/circular_queue.h")
# Set Linked List library header for Singly Linked List.
set(SINGLY_LINKED_LIST_H "${PROJECT_SOURCE_DIR}/include/data_structures/linked_list/singly_linked_list.h")

# Add the Array library.
add_library(array_lib STATIC array_simple.c ${ARRAY_SIMPLE_H} array_rotation.c ${ARRAY_ROTATION_H})
# Add the Stack library.
add_library(stack_lib STATIC stack.c ${STACK_H})
# Add the Queue library.
add_library(queue_lib STATIC circular_queue.c ${CIRCULAR_QUEUE_H})
# Add the Linked List library.
add_library(linked_list_lib STATIC singly_linked_list.c ${SINGLY_LINKED_LIST_H})

# Include Array library directories to be targeted.
target_include_directories(array_lib PUBLIC ../../include/data_structures)
# Include the Stack library directories to be targeted.
target_include_directories(stack_lib PUBLIC ../../include/data_structures)
# Include the Queue library directories to be targeted.
target_include_directories(queue_lib PUBLIC ../../include/data_structures)
# Include the Linked List directories to be targeted.
target_include_directories(linked_list_lib PUBLIC ../../include/data_structures)