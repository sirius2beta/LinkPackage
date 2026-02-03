# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\LinkPackage_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LinkPackage_autogen.dir\\ParseCache.txt"
  "LinkPackage_autogen"
  )
endif()
