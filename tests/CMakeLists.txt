if (ENABLE_TESTING)
  set(TEST_MAIN "unit_tests") # name of executable
  set(TEST_SOURCES "main_ut.cc") # 
  set(TEST_INCLUDES "./") 

  add_executable(${TEST_MAIN} ${TEST_SOURCES})
  target_include_directories(${TEST_MAIN} PUBLIC ${TEST_INCLUDES})
  target_link_libraries(${TEST_MAIN} PUBLIC ${LIBRARY_NAME} Catch2::Catch2)
endif()
