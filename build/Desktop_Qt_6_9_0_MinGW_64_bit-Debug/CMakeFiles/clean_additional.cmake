# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\powerlifting_competition_table_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\powerlifting_competition_table_autogen.dir\\ParseCache.txt"
  "powerlifting_competition_table_autogen"
  )
endif()
