cmake_minimum_required(VERSION 3.14)
project(qclassic_fr_drv_ng)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INSTALL_RPATH "$ORIGIN")
set(CMAKE_BUILD_WITH_INSTALL_RPATH ON)

if(MSVC)
  add_definitions(-DUNICODE -D_UNICODE -D_CRT_SECURE_NO_WARNINGS)
endif()
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# QT
message("CMAKE_PREFIX_PATH: ${CMAKE_PREFIX_PATH}")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
find_package(Qt5 COMPONENTS Core)

if(MSVC)
  # Force to always compile with W4
  if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
    string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
  else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
  endif()
elseif(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
  # Update if necessary
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -Wextra")
endif()

add_subdirectory(external)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(${PROJECT_NAME} SHARED QClassicFrDrvNg qclassic_interface.h
                                   qclassic_interface.cpp)

if(EXISTS ../classic_fr_drv_ng/classic_interface.h)
  target_include_directories(${PROJECT_NAME} PRIVATE ../classic_fr_drv_ng)
endif()

bump_version("QCLASSIC" TRUE FALSE)
lto_enable_for_release(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} PRIVATE classic_fr_drv_ng Qt5::Core)
