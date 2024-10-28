cmake_minimum_required(VERSION 3.0)
project(pjsua2-test)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjlib-util/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjmedia/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjnath/include/)
include_directories(${PROJECT_BASE_SOURCE_DIR}/pjsip/include/)

link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})

add_executable(pjsua2-test ./main.cpp
../pjsua2/account.cpp
../pjsua2/call.cpp
../pjsua2/endpoint.cpp
../pjsua2/json.cpp
../pjsua2/media.cpp
../pjsua2/persistent.cpp
../pjsua2/presence.cpp
../pjsua2/siptypes.cpp
../pjsua2/types.cpp
../pjsua2/util.hpp

)



if(CMAKE_HOST_LINUX)
target_link_libraries(pjsua2-test libpjsip.a)
target_link_libraries(pjsua2-test  libpjnath.a)
target_link_libraries(pjsua2-test  libpjlib-util.a)
target_link_libraries(pjsua2-test  libpjlib.a)
target_link_libraries(pjsua2-test  uuid)
target_link_libraries(pjsua2-test  m)
elseif(CMAKE_HOST_WIN32)
target_link_libraries(pjsua2-test  pjsip.lib)
target_link_libraries(pjsua2-test  pjlib-util.lib)
target_link_libraries(pjsua2-test  pjmedia.lib)
target_link_libraries(pjsua2-test  pjlib.lib)
target_link_libraries(pjsua2-test  pjnath.lib)
target_link_libraries(pjsua2-test  ws2_32.lib)
target_link_libraries(pjsua2-test  Mswsock.lib)
endif()