cmake_minimum_required(VERSION 3.16)
project(my_game LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(my_game  src/main.cpp 
                        src/City_class/city.cpp
                        src/City_class/city.hpp
                        src/City_class/iniFunc.cpp
                        src/City_class/iniFunc.hpp
                        src/TimeController_class/timeControl.hpp
                        src/TimeController_class/timeControl.cpp
                        src/Tile_class/tile.cpp
                        src/Tile_class/tile.hpp
                        src/Tile_class/Grid_class/grid.cpp
                        src/Tile_class/Grid_class/grid.hpp
                        src/GameObj_class/gameObj.hpp
                        src/GameObj_class/gameObj.cpp
                        src/GameObj_class/Building_class/Comertial_building_class/comertial.cpp
                        src/GameObj_class/Building_class/Comertial_building_class/comertial.hpp
                        src/GameObj_class/Building_class/Industrial_building_class/industrial.cpp
                        src/GameObj_class/Building_class/Industrial_building_class/industrial.hpp
                        src/GameObj_class/Building_class/Recidental_building_class/residental.cpp
                        src/GameObj_class/Building_class/Recidental_building_class/residental.hpp
                        src/GameObj_class/Building_class/bulding.cpp
                        src/GameObj_class/Building_class/bulding.hpp
                        src/GameObj_class/Car_class/car.hpp
                        src/GameObj_class/Car_class/car.cpp
                        src/GameObj_class/Road_class/road.cpp
                        src/GameObj_class/Road_class/road.hpp
                        src/GameUI_class/ui.hpp
                        src/GameUI_class/ui.cpp
                        src/InputManager_class/input.cpp
                        src/InputManager_class/input.hpp
                        src/ResourseManager_class/resourse.cpp
                        src/ResourseManager_class/resourse.hpp
                        src/TraficSimulation_class/trafSim.cpp
                        src/TraficSimulation_class/trafSim.hpp
                        )
target_link_libraries(my_game PRIVATE sfml-graphics)
target_compile_features(my_game PRIVATE cxx_std_17)

if(WIN32)
    add_custom_command(
        TARGET my_game
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:CMakeSFMLProject>
        VERBATIM)
endif()

install(TARGETS my_game)
