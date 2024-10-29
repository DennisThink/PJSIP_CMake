project(pjlib-util-test)
include_directories(${PJSIP_BASE_SOURCE_DIR}/pjlib/include/)
include_directories(../../include/)

if(CMAKE_HOST_LINUX)
else()
add_compile_definitions(-DPJ_FUNCTIONS_ARE_INLINED=1)
endif()
link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})

add_executable(pjlib-util-test ./main.c
./encryption.c
./http_client.c
./json_test.c
#./main_rtems.c
#./main_win32.c
./resolver_test.c
./stun.c
./test.c
./xml.c)



if(CMAKE_HOST_LINUX)
link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})
target_link_libraries(pjlib-util-test libpjlib-util.a)
target_link_libraries(pjlib-util-test libpjlib.a)
target_link_libraries(pjlib-util-test uuid)
target_link_libraries(pjlib-util-test m)
elseif(CMAKE_HOST_WIN32)
target_link_libraries(pjlib-util-test pjlib-util.lib)
target_link_libraries(pjlib-util-test pjlib.lib)
target_link_libraries(pjlib-util-test ws2_32.lib)
target_link_libraries(pjlib-util-test Mswsock.lib)
endif()