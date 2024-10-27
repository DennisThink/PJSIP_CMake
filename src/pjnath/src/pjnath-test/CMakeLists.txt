project(pjnath-test)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib-util/include/)
include_directories(../../include/)

if(CMAKE_HOST_LINUX)
else()
add_compile_definitions(-DPJ_FUNCTIONS_ARE_INLINED=1)
endif()
link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})

add_executable(pjnath-test ./main.c
./concur_test.c
./ice_test.c
#main.c
#main_win32.c
./server.c
#server.h
./sess_auth.c
./stun.c
./stun_sock_test.c
./test.c
#test.h
./turn_sock_test.c
)



if(CMAKE_HOST_LINUX)
link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})
target_link_libraries(pjnath-test libpjnath.a)
target_link_libraries(pjnath-test libpjlib-util.a)
target_link_libraries(pjnath-test libpjlib.a)
target_link_libraries(pjnath-test uuid)
target_link_libraries(pjnath-test m)
elseif(CMAKE_HOST_WIN32)
target_link_libraries(pjnath-test pjlib-util.lib)
target_link_libraries(pjnath-test pjlib.lib)
target_link_libraries(pjnath-test pjnath.lib)
target_link_libraries(pjnath-test ws2_32.lib)
target_link_libraries(pjnath-test Mswsock.lib)
endif()