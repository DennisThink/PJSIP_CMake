cmake_minimum_required(VERSION 3.0)
project(pjnath)
include_directories(./include/)
include_directories(${PJSIP_BASE_SOURCE_DIR}/pjlib/include/)
include_directories(${PJSIP_BASE_SOURCE_DIR}/pjlib-util/include/)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${THIRD_PARTY_LIB_TARGET_DIRECTORY})  
SET(LIBRARY_OUTPUT_PATH ${THIRD_PARTY_LIB_TARGET_DIRECTORY}) 
SET(PJ_NATH_LIB_SOURCE ./src/pjnath/errno.c
./src/pjnath/errno.c
./src/pjnath/ice_session.c
./src/pjnath/ice_strans.c
./src/pjnath/nat_detect.c
./src/pjnath/stun_auth.c
./src/pjnath/stun_msg.c
./src/pjnath/stun_msg_dump.c
./src/pjnath/stun_session.c
./src/pjnath/stun_sock.c
./src/pjnath/stun_transaction.c
./src/pjnath/turn_session.c
./src/pjnath/turn_sock.c
./src/pjnath/upnp.c)
add_library(pjnath ${PJ_NATH_LIB_SOURCE})