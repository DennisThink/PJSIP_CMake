cmake_minimum_required(VERSION 3.0)
project(pjsip)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib-util/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjmedia/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib-util/include/)
include_directories(./include/)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${THIRD_PARTY_LIB_TARGET_DIRECTORY})  
SET(LIBRARY_OUTPUT_PATH ${THIRD_PARTY_LIB_TARGET_DIRECTORY}) 
SET(PJ_SIP_SOURCE 
#./src/pjsip/sip_util.c
./src/pjsip/sip_auth_aka.c
./src/pjsip/sip_auth_client.c
./src/pjsip/sip_auth_msg.c
./src/pjsip/sip_auth_parser.c
./src/pjsip/sip_auth_parser_wrap.cpp
./src/pjsip/sip_auth_server.c
./src/pjsip/sip_config.c
./src/pjsip/sip_dialog.c
./src/pjsip/sip_dialog_wrap.cpp
./src/pjsip/sip_endpoint.c
./src/pjsip/sip_endpoint_wrap.cpp
./src/pjsip/sip_errno.c
./src/pjsip/sip_msg.c
./src/pjsip/sip_multipart.c
./src/pjsip/sip_parser.c
./src/pjsip/sip_parser_wrap.cpp
./src/pjsip/sip_resolve.c
./src/pjsip/sip_tel_uri.c
./src/pjsip/sip_tel_uri_wrap.cpp
./src/pjsip/sip_transaction.c
#./src/pjsip/sip_transport.c
./src/pjsip/sip_transport_loop.c
./src/pjsip/sip_transport_tcp.c
#./src/pjsip/sip_transport_tls.c
./src/pjsip/sip_transport_udp.c
#./src/pjsip/sip_transport_wrap.cpp
./src/pjsip/sip_ua_layer.c
./src/pjsip/sip_uri.c
./src/pjsip/sip_util.c
./src/pjsip/sip_util_proxy.c
#./src/pjsip/sip_util_proxy_wrap.cpp
./src/pjsip/sip_util_statefull.c
#./src/pjsip/sip_util_wrap.cpp
)
add_library(pjsip ${PJ_SIP_SOURCE})