cmake_minimun_required(VERSION 3.10)
project(ConvlutionEngine)

set(CMAKE_CXX_POSTFIX 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(OpenCV REQUIRED)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/convolution.cpp
    src/image-handler.cpp
    src/visulizer.cpp
)

add_executable(app ${SOURCES})

target_link_libraries(app 
    Qt6::Widgets
    ${OpenCV_LIBS}
)
