# Set Pointers library header for Pointers.
set(POINTERS_H ${PROJECT_SOURCE_DIR}/include/pointers/pointers.h)

# Add the Pointers library.
add_library(pointers_lib STATIC pointers.c ${POINTERS_H})

# Include Pointers library directories to be targeted.
target_include_directories(pointers_lib PUBLIC ../../include/pointers)