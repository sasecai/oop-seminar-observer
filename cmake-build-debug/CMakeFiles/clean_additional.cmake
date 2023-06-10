# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/OberverPattern_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/OberverPattern_autogen.dir/ParseCache.txt"
  "OberverPattern_autogen"
  )
endif()
