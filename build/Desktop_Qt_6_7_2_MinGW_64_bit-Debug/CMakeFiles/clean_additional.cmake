# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\caculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\caculator_autogen.dir\\ParseCache.txt"
  "caculator_autogen"
  )
endif()
