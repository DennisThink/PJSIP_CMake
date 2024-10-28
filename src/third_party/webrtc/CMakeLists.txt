project(pjsip_webrtc)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${THIRD_PARTY_LIB_TARGET_DIRECTORY})  
SET(LIBRARY_OUTPUT_PATH ${THIRD_PARTY_LIB_TARGET_DIRECTORY}) 
include_directories(${PJSIP_BASE_SOURCE_DIR}/third_party/webrtc/src/)

SET(COMMON_AUDIO_FILES ./src/webrtc/common_audio/fft4g.c
./src/webrtc/common_audio/fft4g.h
./src/webrtc/common_audio/ring_buffer.c
./src/webrtc/common_audio/ring_buffer.h
)

SET(SYSTEM_WRAPPERS__FILES ./src/webrtc/system_wrappers/source/cpu_features.cc)
SET(MODULES_FILES 
./src/webrtc/modules/audio_processing/aec/aec_common.h
./src/webrtc/modules/audio_processing/aec/aec_core.c
./src/webrtc/modules/audio_processing/aec/aec_core.h
#./src/webrtc/modules/audio_processing/aec/aec_core_mips.c
#./src/webrtc/modules/audio_processing/aec/aec_core_neon.c
./src/webrtc/modules/audio_processing/aec/aec_core_sse2.c
./src/webrtc/modules/audio_processing/aec/aec_rdft.c
./src/webrtc/modules/audio_processing/aec/aec_rdft.h
#./src/webrtc/modules/audio_processing/aec/aec_rdft_mips.c
#./src/webrtc/modules/audio_processing/aec/aec_rdft_neon.c
./src/webrtc/modules/audio_processing/aec/aec_rdft_sse2.c
./src/webrtc/modules/audio_processing/aec/aec_resampler.c
./src/webrtc/modules/audio_processing/aec/aec_resampler.h
./src/webrtc/modules/audio_processing/aec/echo_cancellation.c
./src/webrtc/modules/audio_processing/aec/echo_cancellation_internal.h
#./src/webrtc/modules/audio_processing/aec/echo_cancellation_unittest.cc
#./src/webrtc/modules/audio_processing/aec/system_delay_unittest.cc
)

SET(NS_FILES ./src/webrtc/modules/audio_processing/ns/defines.h
./src/webrtc/modules/audio_processing/ns/include/
./src/webrtc/modules/audio_processing/ns/noise_suppression.c
./src/webrtc/modules/audio_processing/ns/noise_suppression_x.c
./src/webrtc/modules/audio_processing/ns/ns_core.c
./src/webrtc/modules/audio_processing/ns/ns_core.h
./src/webrtc/modules/audio_processing/ns/nsx_core.c
./src/webrtc/modules/audio_processing/ns/nsx_core.h
./src/webrtc/modules/audio_processing/ns/nsx_core_c.c
#./src/webrtc/modules/audio_processing/ns/nsx_core_mips.c
#./src/webrtc/modules/audio_processing/ns/nsx_core_neon.c
./src/webrtc/modules/audio_processing/ns/nsx_defines.h
./src/webrtc/modules/audio_processing/ns/windows_private.h
)

SET(SIGNAL_PROCESSING 
./src/webrtc/common_audio/signal_processing/randomization_functions.c
./src/webrtc/common_audio/signal_processing/auto_corr_to_refl_coef.c
./src/webrtc/common_audio/signal_processing/auto_correlation.c
./src/webrtc/common_audio/signal_processing/complex_bit_reverse.c
#./src/webrtc/common_audio/signal_processing/complex_bit_reverse_arm.S
#./src/webrtc/common_audio/signal_processing/complex_bit_reverse_mips.c
./src/webrtc/common_audio/signal_processing/complex_fft.c
#./src/webrtc/common_audio/signal_processing/complex_fft_mips.c
./src/webrtc/common_audio/signal_processing/complex_fft_tables.h
./src/webrtc/common_audio/signal_processing/copy_set_operations.c
./src/webrtc/common_audio/signal_processing/cross_correlation.c
#./src/webrtc/common_audio/signal_processing/cross_correlation_mips.c
#./src/webrtc/common_audio/signal_processing/cross_correlation_neon.c
./src/webrtc/common_audio/signal_processing/division_operations.c
./src/webrtc/common_audio/signal_processing/dot_product_with_scale.c
./src/webrtc/common_audio/signal_processing/downsample_fast.c
#./src/webrtc/common_audio/signal_processing/downsample_fast_mips.c
#./src/webrtc/common_audio/signal_processing/downsample_fast_neon.c
./src/webrtc/common_audio/signal_processing/energy.c
./src/webrtc/common_audio/signal_processing/filter_ar.c
./src/webrtc/common_audio/signal_processing/filter_ar_fast_q12.c
#./src/webrtc/common_audio/signal_processing/filter_ar_fast_q12_armv7.S
#./src/webrtc/common_audio/signal_processing/filter_ar_fast_q12_mips.c
./src/webrtc/common_audio/signal_processing/filter_ma_fast_q12.c
./src/webrtc/common_audio/signal_processing/get_hanning_window.c
./src/webrtc/common_audio/signal_processing/get_scaling_square.c
./src/webrtc/common_audio/signal_processing/ilbc_specific_functions.c
./src/webrtc/common_audio/signal_processing/levinson_durbin.c
./src/webrtc/common_audio/signal_processing/lpc_to_refl_coef.c
./src/webrtc/common_audio/signal_processing/min_max_operations.c
#./src/webrtc/common_audio/signal_processing/min_max_operations_mips.c
#./src/webrtc/common_audio/signal_processing/min_max_operations_neon.c
./src/webrtc/common_audio/signal_processing/randomization_functions.c
./src/webrtc/common_audio/signal_processing/real_fft.c
#./src/webrtc/common_audio/signal_processing/real_fft_unittest.cc
./src/webrtc/common_audio/signal_processing/refl_coef_to_lpc.c
./src/webrtc/common_audio/signal_processing/resample.c
./src/webrtc/common_audio/signal_processing/resample_48khz.c
./src/webrtc/common_audio/signal_processing/resample_by_2.c
./src/webrtc/common_audio/signal_processing/resample_by_2_internal.c
./src/webrtc/common_audio/signal_processing/resample_by_2_internal.h
#./src/webrtc/common_audio/signal_processing/resample_by_2_mips.c
./src/webrtc/common_audio/signal_processing/resample_fractional.c
#./src/webrtc/common_audio/signal_processing/signal_processing_unittest.cc
./src/webrtc/common_audio/signal_processing/spl_init.c
./src/webrtc/common_audio/signal_processing/spl_sqrt.c
./src/webrtc/common_audio/signal_processing/spl_sqrt_floor.c
#./src/webrtc/common_audio/signal_processing/spl_sqrt_floor_arm.S
#./src/webrtc/common_audio/signal_processing/spl_sqrt_floor_mips.c
./src/webrtc/common_audio/signal_processing/splitting_filter.c
./src/webrtc/common_audio/signal_processing/sqrt_of_one_minus_x_squared.c
./src/webrtc/common_audio/signal_processing/vector_scaling_operations.c
#./src/webrtc/common_audio/signal_processing/vector_scaling_operations_mips.c
)

SET(UTILITY_FILES 
./src/webrtc/modules/audio_processing/utility/delay_estimator_wrapper.c
./src/webrtc/modules/audio_processing/utility/delay_estimator.c)

add_library(pjsip_webrtc 
${MODULES_FILES} 
${COMMON_AUDIO_FILES} 
${SYSTEM_WRAPPERS__FILES} 
${NS_FILES}
${SIGNAL_PROCESSING}
${UTILITY_FILES})

