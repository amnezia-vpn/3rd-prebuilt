# Install script for directory: D:/a/3rd-build-ga/3rd-build-ga/libssh/0.10.6/include/libssh

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/libssh")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libssh" TYPE FILE FILES
    "D:/a/3rd-build-ga/3rd-build-ga/libssh/0.10.6/include/libssh/callbacks.h"
    "D:/a/3rd-build-ga/3rd-build-ga/libssh/0.10.6/include/libssh/libssh.h"
    "D:/a/3rd-build-ga/3rd-build-ga/libssh/0.10.6/include/libssh/ssh2.h"
    "D:/a/3rd-build-ga/3rd-build-ga/libssh/0.10.6/include/libssh/legacy.h"
    "D:/a/3rd-build-ga/3rd-build-ga/libssh/0.10.6/include/libssh/libsshpp.hpp"
    "D:/a/3rd-build-ga/3rd-build-ga/libssh/0.10.6/include/libssh/sftp.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libssh" TYPE FILE FILES "D:/a/3rd-build-ga/3rd-build-ga/libssh/0.10.6/build/include/libssh/libssh_version.h")
endif()

