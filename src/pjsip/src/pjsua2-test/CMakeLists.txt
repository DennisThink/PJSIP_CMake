cmake_minimum_required(VERSION 3.0)
project(pjsua2-test)

add_compile_options(-DPJMEDIA_HAS_SRTP=0)
include_directories(${PJSIP_BASE_SOURCE_DIR}/pjlib/include/)
include_directories(${PJSIP_BASE_SOURCE_DIR}/pjlib-util/include/)
include_directories(${PJSIP_BASE_SOURCE_DIR}/pjmedia/include/)
include_directories(${PJSIP_BASE_SOURCE_DIR}/pjnath/include/)
include_directories(${PJSIP_BASE_SOURCE_DIR}/pjsip/include/)

link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})

SET(PJSUA2_SOURCE ../pjsua2/account.cpp
../pjsua2/call.cpp
../pjsua2/endpoint.cpp
../pjsua2/json.cpp
../pjsua2/media.cpp
../pjsua2/persistent.cpp
../pjsua2/presence.cpp
../pjsua2/siptypes.cpp
../pjsua2/types.cpp
../pjsua2/util.hpp)

SET(PJSUA_LIB_SOURCE ../pjsua-lib/pjsua_acc.c
../pjsua-lib/pjsua_aud.c
../pjsua-lib/pjsua_call.c
../pjsua-lib/pjsua_core.c
../pjsua-lib/pjsua_dump.c
../pjsua-lib/pjsua_im.c
../pjsua-lib/pjsua_media.c
../pjsua-lib/pjsua_pres.c
../pjsua-lib/pjsua_vid.c
)

SET(PJSIMPLE_SOURCE ../pjsip-simple/errno.c
../pjsip-simple/evsub.c
../pjsip-simple/evsub_msg.c
../pjsip-simple/iscomposing.c
../pjsip-simple/mwi.c
../pjsip-simple/pidf.c
../pjsip-simple/presence.c
../pjsip-simple/presence_body.c
../pjsip-simple/publishc.c
../pjsip-simple/rpid.c
../pjsip-simple/xpidf.c
)
add_executable(pjsua2-test ./main.cpp ${PJSUA2_SOURCE} ${PJSUA_LIB_SOURCE} ${PJSIMPLE_SOURCE})



if(CMAKE_HOST_LINUX)
target_link_libraries(pjsua2-test libpjsip.a)
target_link_libraries(pjsua2-test  libpjnath.a)
target_link_libraries(pjsua2-test  libpjlib-util.a)
target_link_libraries(pjsua2-test  libpjlib.a)
target_link_libraries(pjsua2-test  uuid)
target_link_libraries(pjsua2-test  m)
elseif(CMAKE_HOST_WIN32)
target_link_libraries(pjsua2-test  pjsip_speex.lib)
target_link_libraries(pjsua2-test  pjsip_webrtc.lib)
target_link_libraries(pjsua2-test  pjsip.lib)
target_link_libraries(pjsua2-test  pjlib-util.lib)
target_link_libraries(pjsua2-test  pjmedia.lib)
target_link_libraries(pjsua2-test  pjlib.lib)
target_link_libraries(pjsua2-test  pjnath.lib)
target_link_libraries(pjsua2-test  ws2_32.lib)
target_link_libraries(pjsua2-test  Mswsock.lib)
endif()