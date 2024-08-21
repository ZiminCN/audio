# cmake 最低版本需求
cmake_minimum_required(VERSION 3.20)

# 工程名称
project(audio_driver)

# 设置
set(CMAKE_CXX_STANDARD 11)

include_directories(inc/)

# 编译源码生成目标
add_executable(audio_driver src/main.cpp
                        src/basic_audio_driver.cpp)

target_link_libraries(audio_driver asound)