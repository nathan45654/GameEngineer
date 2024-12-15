

##### GTEST #####



### executable
add_executable(tests 
	"main-test.cpp"
#	"position-test.cpp"
#	"rect-test.cpp"
#	"vector-test.cpp"
)

find_package(GTest REQUIRED)

### gtest libraries
target_link_libraries(tests
	PRIVATE
	GameEngineer
)
### gtest libraries
target_link_libraries(tests
	PRIVATE
	GTest::GTest
)

get_target_property(LINK_LIBS tests LINK_LIBRARIES)

message(STATUS "Linked libraries for target ${tests}:")
foreach(LIB ${LINK_LIBS})
    message(STATUS "  - ${LIB}")
endforeach()
