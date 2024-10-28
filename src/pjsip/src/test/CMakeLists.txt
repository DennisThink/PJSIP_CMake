project(pjsip-test)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib-util/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjmedia/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib-util/include/)
include_directories(../../include/)

if(CMAKE_HOST_LINUX)
else()
#add_compile_definitions(-DPJ_FUNCTIONS_ARE_INLINED=1)
endif()
link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})

add_executable(pjsip-test ./main.c
#./dlg_core_test.c
#./dns_test.c
#./inv_offer_answer_test.c
#./main.c
#./main_rtems.c
#./main_win32.c
#./msg_err_test.c
./msg_logger.c
#./msg_test.c
#./multipart_test.c
#./regc_test.c
./test.c
#test.h
#./transport_loop_test.c
#./transport_tcp_test.c
#./transport_test.c
#./transport_udp_test.c
#./tsx_basic_test.c
#./tsx_bench.c
#./tsx_uac_test.c
#./tsx_uas_test.c
#./txdata_test.c
./uri_test.c
)



if(CMAKE_HOST_LINUX)
link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})
target_link_libraries(pjsip-test  libpjsip.a)
target_link_libraries(pjsip-test  libpjnath.a)
target_link_libraries(pjsip-test  libpjlib-util.a)
target_link_libraries(pjsip-test  libpjlib.a)
target_link_libraries(pjsip-test  uuid)
target_link_libraries(pjsip-test  m)
elseif(CMAKE_HOST_WIN32)
target_link_libraries(pjsip-test  pjsip.lib)
target_link_libraries(pjsip-test  pjlib-util.lib)
target_link_libraries(pjsip-test  pjmedia.lib)
target_link_libraries(pjsip-test  pjlib.lib)
target_link_libraries(pjsip-test  pjnath.lib)
target_link_libraries(pjsip-test  ws2_32.lib)
target_link_libraries(pjsip-test  Mswsock.lib)
endif()