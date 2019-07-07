cmake_minimum_required(VERSION 3.13)
project(untitled1)

set(CMAKE_CXX_STANDARD 98)

add_executable(untitled1 main.cpp IMonitorDisplay.hpp DateModule.hpp IMonitorModule.hpp CpuModule.hpp HostModule.hpp RamModule.hpp NetModule.hpp OsModule.hpp DiskModule.hpp ProcessModule.hpp NcursesMode.hpp SdlMode.hpp SdlMode.cpp DateModule.cpp CpuModule.cpp HostModule.cpp NetModule.cpp RamModule.cpp OsModule.cpp NcursesMode.cpp)