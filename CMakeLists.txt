cmake_minimum_required(VERSION 3.28.0)
project(pkmn_engine VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)           # Set C++17 standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # Ensure C++17 is strictly required
set(CMAKE_CXX_EXTENSIONS OFF)        # Disable compiler-specific extensions


include_directories("./headers")
include_directories("./src")

#libraries:
add_subdirectory("./external/json")
include_directories("./external/json/include")

#build main binary
set(SOURCE_FILES src/main.cpp src/data/data.cpp)
add_executable(pkmn_engine ${SOURCE_FILES})

#link libraries:
target_link_libraries(pkmn_engine PRIVATE nlohmann_json::nlohmann_json)

# Create a custom target for generate.cpp
add_library(GenerateTarget OBJECT tools/generate.cpp)
# Specify the include directory for this custom target
target_include_directories(GenerateTarget PRIVATE ${CMAKE_SOURCE_DIR}/tools)

#build generator binary
add_executable(GenerateExecutable tools/generate.cpp)


