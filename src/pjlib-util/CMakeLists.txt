cmake_minimum_required(VERSION 3.0)
project(pjlib-util)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${THIRD_PARTY_LIB_TARGET_DIRECTORY})  
SET(LIBRARY_OUTPUT_PATH ${THIRD_PARTY_LIB_TARGET_DIRECTORY}) 
include_directories(../pjlib/include/)
include_directories(./include/)
SET(PJ_LIB_UTIL_SOURCE ./src/pjlib-util/base64.c
./src/pjlib-util/base64.c
./src/pjlib-util/cli.c
./src/pjlib-util/cli_console.c
./src/pjlib-util/cli_telnet.c
./src/pjlib-util/crc32.c
./src/pjlib-util/dns.c
./src/pjlib-util/dns_dump.c
./src/pjlib-util/dns_server.c
./src/pjlib-util/errno.c
./src/pjlib-util/getopt.c
./src/pjlib-util/hmac_md5.c
./src/pjlib-util/hmac_sha1.c
./src/pjlib-util/http_client.c
./src/pjlib-util/json.c
./src/pjlib-util/md5.c
./src/pjlib-util/pcap.c
./src/pjlib-util/resolver.c
#./src/pjlib-util/resolver_wrap.cpp
./src/pjlib-util/scanner.c
#./src/pjlib-util/scanner_cis_bitwise.c
#./src/pjlib-util/scanner_cis_uint.c
./src/pjlib-util/sha1.c
./src/pjlib-util/srv_resolver.c
./src/pjlib-util/string.c
./src/pjlib-util/stun_simple.c
./src/pjlib-util/stun_simple_client.c
./src/pjlib-util/symbols.c
./src/pjlib-util/xml.c
#./src/pjlib-util/xml_wrap.cpp
)
add_library(pjlib-util ${PJ_LIB_UTIL_SOURCE})