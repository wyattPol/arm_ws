# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_arm02_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED arm02_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(arm02_FOUND FALSE)
  elseif(NOT arm02_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(arm02_FOUND FALSE)
  endif()
  return()
endif()
set(_arm02_CONFIG_INCLUDED TRUE)

# output package information
if(NOT arm02_FIND_QUIETLY)
  message(STATUS "Found arm02: 1.0.0 (${arm02_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'arm02' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${arm02_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(arm02_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${arm02_DIR}/${_extra}")
endforeach()
