project(pjlib-test)
include_directories(../../include/)
add_compile_definitions(-DPJ_FUNCTIONS_ARE_INLINED=1)
link_directories(${THIRD_PARTY_LIB_TARGET_DIRECTORY})
add_executable(pjlib-test ./main.c 
./test.c 
./activesock.c 
./util.c 
./atomic.c 
./errno.c 
./exception.c 
./fifobuf.c 
./file.c  
./list.c
./hash_test.c
./ioq_stress_test.c
./mutex.c
./os.c
./string.c
./pool.c 
./rand.c
./sleep.c
./ioq_udp.c
./ioq_unreg.c
./timestamp.c
./thread.c
./ioq_tcp.c
./rbtree.c
./select.c 
./sock.c 
./timer.c
)
target_link_libraries(pjlib-test pjlib.lib)
target_link_libraries(pjlib-test ws2_32.lib)
target_link_libraries(pjlib-test Mswsock.lib)