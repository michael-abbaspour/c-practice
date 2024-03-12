# Set Searching library header file for Binary Search.
set(BINARY_SEARCH_H "${PROJECT_SOURCE_DIR}/include/searching/binary_search.h")

# Add the Searching library.
add_library(searching_lib STATIC binary_search.c ${BINARY_SEARCH_H})

# Include the Searching library directories to be targeted.
target_include_directories(searching_lib PUBLIC ../../include/searching)