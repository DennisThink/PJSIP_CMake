project(pjmedia-test)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib-util/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjnath/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjmedia/include/)
include_directories(../../include/)

if(CMAKE_HOST_LINUX)
else()
add_compile_definitions(-DPJ_FUNCTIONS_ARE_INLINED=1)
endif()
link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})

add_executable(pjmedia-test ./main.c
#./audio_tool.c
#./codec_vectors.c
./jbuf_test.c
#main.c
#./mips_test.c
./rtp_test.c
./sdp_neg_test.c
#./sdptest.c
#./session_test.c
./test.c
#test.h
#vectors/
./vid_codec_test.c
./vid_dev_test.c
./vid_port_test.c
#./wince_main.c
#./wsola_test.c
)



if(CMAKE_HOST_LINUX)
link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})
target_link_libraries(pjmedia-test libpjlib-util.a)
target_link_libraries(pjmedia-test libpjlib.a)
target_link_libraries(pjmedia-test uuid)
target_link_libraries(pjmedia-test m)
elseif(CMAKE_HOST_WIN32)
target_link_libraries(pjmedia-test pjmedia.lib)
target_link_libraries(pjmedia-test pjlib-util.lib)
target_link_libraries(pjmedia-test pjlib.lib)
target_link_libraries(pjmedia-test ws2_32.lib)
target_link_libraries(pjmedia-test Mswsock.lib)
endif()