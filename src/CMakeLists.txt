
### Find SDL
find_package(SDL2 REQUIRED)
find_package(SDL2_IMAGE REQUIRED)


### getting all my sources
set(MATH_SOURCES 
	"math/Position.cpp"
	"math/Position.h"
	"math/Rect.cpp"
	"math/Rect.h"
	"math/Vector2D.cpp"
	"math/Vector2D.h"
)
set(CORE_SOURCES 
	"core/Constants.h"
	"core/Core.cpp"
	"core/Core.h"
	"core/Globals.cpp"
	"core/Globals.h"
)
set(GRAPHICS_SOURCES 
	"graphics/Texture.cpp"
	"graphics/Texture.h"
)
file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")


message(STATUS "Math sources: ${MATH_SOURCES}")

### create library
add_library(GameEngineer STATIC ${SOURCES} ${CORE_SOURCES} ${MATH_SOURCES} ${GRAPHICS_SOURCES})

### link SDL
target_link_libraries(GameEngineer SDL2::SDL2 SDL2::SDL2main)
target_link_libraries(GameEngineer SDL2_image::SDL2_image)
