cmake_minimum_required(VERSION 3.0)
project(pjlib)
if(CMAKE_HOST_LINUX)
add_compile_options(-DPJ_HAS_NETINET_TCP_H=1)
add_definitions(-DPJ_HAS_LIMITS_H=1)
add_compile_options(-DPJ_HAS_LIMITS_H=1)
include_directories(/usr/include/uuid/)
endif()
include_directories(./include/)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${THIRD_PARTY_LIB_TARGET_DIRECTORY})  
SET(LIBRARY_OUTPUT_PATH ${THIRD_PARTY_LIB_TARGET_DIRECTORY}) 
if(CMAKE_HOST_LINUX)
SET(PJ_LIB_PLATFORM_SOURCE 
./src/pj/os_core_unix.c
./src/pj/os_time_unix.c
./src/pj/os_error_unix.c
./src/pj/ioqueue_epoll.c
./src/pj/file_access_unistd.c
./src/pj/file_io_ansi.c
./src/pj/os_time_unix.c
./src/pj/os_timestamp_posix.c
./src/pj/ip_helper_generic.c
./src/pj/os_timestamp_common.c
./src/pj/guid_uuid.c
)
elseif(CMAKE_HOST_WIN32)
SET(PJ_LIB_PLATFORM_SOURCE  ./src/pj/unicode_win32.c
./src/pj/file_access_win32.c 
./src/pj/file_io_win32.c 
./src/pj/os_core_win32.c
./src/pj/os_time_win32.c
./src/pj/os_timestamp_win32.c
./src/pj/os_error_win32.c
./src/pj/guid_win32.c
./src/pj/ip_helper_win32.c
./src/pj/sock_bsd.c
./src/pj/ioqueue_winnt.c)
endif()
SET(PJ_LIB_SOURCE ./src/pj/activesock.c 
                  ./src/pj/hash.c
                  ./include/pj/list.c
                  ./src/pj/string.c
                  ./src/pj/except.c
                  ./src/pj/pool_caching.c
                  ./src/pj/fifobuf.c
                  ./src/pj/log.c 
                  ./src/pj/pool.c
                  ./src/pj/pool_caching.c
                  ./src/pj/pool_buf.c
                  ./src/pj/config.c
                  ./src/pj/symbols.c
                  ./src/pj/lock.c
                  ./src/pj/errno.c
                  ./src/pj/rand.c
                  ./src/pj/array.c
                  ./src/pj/types.c
                  ./src/pj/rbtree.c
                  ./src/pj/sock_common.c
                  ./src/pj/os_timestamp_common.c
                  ./src/pj/os_time_common.c
                  ./src/pj/sock_common.c
                  ./src/pj/sock_bsd.c
                  ./src/pj/addr_resolv_sock.c
                  ./src/pj/timer.c
                  ./src/pj/sock_qos_common.c
                  ./src/pj/pool_policy_malloc.c
                  ./src/pj/sock_select.c
                  ./src/pj/os_info.c
               
                  ./src/pj/log_writer_stdout.c
                  #File for different platform
                  ${PJ_LIB_PLATFORM_SOURCE}
)

add_library(pjlib ${PJ_LIB_SOURCE})