# Copyright (C) 2012-2018  (see AUTHORS file for a list of contributors)
#
# This file is part of GNSS-SDR.
#
# GNSS-SDR is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# GNSS-SDR is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GNSS-SDR. If not, see <https://www.gnu.org/licenses/>.
#


set(GNSS_RECEIVER_SOURCES
    control_thread.cc
    control_message_factory.cc
    file_configuration.cc
    gnss_block_factory.cc
    gnss_flowgraph.cc
    in_memory_configuration.cc
    tcp_cmd_interface.cc
)

set(GNSS_RECEIVER_HEADERS
    control_thread.h
    control_message_factory.h
    file_configuration.h
    gnss_block_factory.h
    gnss_flowgraph.h
    in_memory_configuration.h
    tcp_cmd_interface.h
    concurrent_map.h
    concurrent_queue.h
    control_message.h
)

if(PC_GNURADIO_RUNTIME_VERSION VERSION_GREATER 3.7.3)
    add_definitions(-DMODERN_GNURADIO=1)
endif()

if(ENABLE_CUDA)
    add_definitions(-DCUDA_GPU_ACCEL=1)
    set(OPT_RECEIVER_INCLUDE_DIRS
        ${OPT_RECEIVER_INCLUDE_DIRS} ${CUDA_INCLUDE_DIRS}
    )
endif()

if(ENABLE_FPGA)
    add_definitions(-DENABLE_FPGA=1)
endif()

if(ENABLE_RAW_UDP)
    add_definitions(-DRAW_UDP=1)
endif()

if(Boost_VERSION LESS 105000)
    add_definitions(-DOLD_BOOST=1)
endif()

if(OPENSSL_FOUND)
    add_definitions(-DUSE_OPENSSL_FALLBACK=1)
endif()

if(ENABLE_GN3S)
    add_definitions(-DGN3S_DRIVER=1)
endif()

if(ENABLE_ARRAY)
    add_definitions(-DRAW_ARRAY_DRIVER=1)
endif()

if(ENABLE_FLEXIBAND)
    add_definitions(-DFLEXIBAND_DRIVER=1)
endif()

if(ENABLE_OSMOSDR)
    if(GROSMOSDR_FOUND)
        add_definitions(-DOSMOSDR_DRIVER=1)
    endif()
endif()

if(ENABLE_UHD AND GNURADIO_UHD_LIBRARIES_gnuradio-uhd)
    add_definitions(-DUHD_DRIVER=1)
endif()

#Enable OpenCL if found in the system
if(OPENCL_FOUND)
    message(STATUS "Adding processing blocks implemented using OpenCL")
    add_definitions(-DOPENCL_BLOCKS=1)
else()
    add_definitions(-DOPENCL_BLOCKS=0)
endif()

#enable SDR Hardware based on fmcomms2
if(ENABLE_PLUTOSDR)
    add_definitions(-DPLUTOSDR_DRIVER=1)
    set(OPT_RECEIVER_INCLUDE_DIRS
        ${OPT_RECEIVER_INCLUDE_DIRS} ${IIO_INCLUDE_DIRS}
    )
endif()

if(ENABLE_FMCOMMS2)
    add_definitions(-DFMCOMMS2_DRIVER=1)
    set(OPT_RECEIVER_INCLUDE_DIRS
        ${OPT_RECEIVER_INCLUDE_DIRS} ${IIO_INCLUDE_DIRS}
    )
endif()

if(ENABLE_AD9361)
    add_definitions(-DAD9361_DRIVER=1)
    set(OPT_RECEIVER_INCLUDE_DIRS
        ${OPT_RECEIVER_INCLUDE_DIRS} ${IIO_INCLUDE_DIRS}
    )
endif()

if(${PC_GNURADIO_RUNTIME_VERSION} VERSION_GREATER "3.7.13.4")
    add_definitions(-DGR_GREATER_38=1)
endif()


include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/src/core/system_parameters
    ${CMAKE_SOURCE_DIR}/src/core/interfaces
    ${CMAKE_SOURCE_DIR}/src/core/libs
    ${CMAKE_SOURCE_DIR}/src/core/libs/supl
    ${CMAKE_SOURCE_DIR}/src/core/libs/supl/asn-rrlp
    ${CMAKE_SOURCE_DIR}/src/core/libs/supl/asn-supl
    ${CMAKE_SOURCE_DIR}/src/core/monitor
    ${CMAKE_SOURCE_DIR}/src/algorithms/libs
    ${CMAKE_SOURCE_DIR}/src/algorithms/signal_source/libs
    ${CMAKE_SOURCE_DIR}/src/algorithms/signal_source/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/signal_source/gnuradio_blocks
    ${CMAKE_SOURCE_DIR}/src/algorithms/channel/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/channel/libs
    ${CMAKE_SOURCE_DIR}/src/algorithms/conditioner/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/data_type_adapter/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/data_type_adapter/gnuradio_blocks
    ${CMAKE_SOURCE_DIR}/src/algorithms/resampler/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/input_filter/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/input_filter/gnuradio_blocks
    ${CMAKE_SOURCE_DIR}/src/algorithms/acquisition/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/acquisition/gnuradio_blocks
    ${CMAKE_SOURCE_DIR}/src/algorithms/acquisition/libs
    ${CMAKE_SOURCE_DIR}/src/algorithms/tracking/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/tracking/gnuradio_blocks
    ${CMAKE_SOURCE_DIR}/src/algorithms/tracking/libs
    ${CMAKE_SOURCE_DIR}/src/algorithms/telemetry_decoder/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/telemetry_decoder/gnuradio_blocks
    ${CMAKE_SOURCE_DIR}/src/algorithms/telemetry_decoder/libs
    ${CMAKE_SOURCE_DIR}/src/algorithms/telemetry_decoder/libs/libswiftcnav
    ${CMAKE_SOURCE_DIR}/src/algorithms/observables/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/observables/gnuradio_blocks
    ${CMAKE_SOURCE_DIR}/src/algorithms/PVT/adapters
    ${CMAKE_SOURCE_DIR}/src/algorithms/PVT/gnuradio_blocks
    ${CMAKE_SOURCE_DIR}/src/algorithms/PVT/libs
    ${CMAKE_SOURCE_DIR}/src/algorithms/libs/rtklib
    ${ARMADILLO_INCLUDE_DIRS}
    ${GLOG_INCLUDE_DIRS}
    ${GFlags_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
    ${GNURADIO_RUNTIME_INCLUDE_DIRS}
    ${PUGIXML_INCLUDE_DIR}
    ${OPT_RECEIVER_INCLUDE_DIRS}
    ${VOLK_GNSSSDR_INCLUDE_DIRS}
)

list(SORT GNSS_RECEIVER_HEADERS)
list(SORT GNSS_RECEIVER_SOURCES)

set(GNSS_RECEIVER_INTERFACE_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/../interfaces/acquisition_interface.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../interfaces/channel_interface.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../interfaces/configuration_interface.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../interfaces/gnss_block_interface.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../interfaces/observables_interface.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../interfaces/pvt_interface.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../interfaces/telemetry_decoder_interface.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../interfaces/tracking_interface.h
)

list(SORT GNSS_RECEIVER_INTERFACE_HEADERS)

add_library(gnss_rx
    ${GNSS_RECEIVER_SOURCES}
    ${GNSS_RECEIVER_HEADERS}
    ${GNSS_RECEIVER_INTERFACE_HEADERS}
)

source_group(Headers FILES ${GNSS_RECEIVER_HEADERS}
    ${GNSS_RECEIVER_INTERFACE_HEADERS})

target_link_libraries(gnss_rx
    ${Boost_LIBRARIES}
    ${ARMADILLO_LIBRARIES}
    ${GNURADIO_RUNTIME_LIBRARIES}
    ${GNURADIO_BLOCKS_LIBRARIES}
    ${GNURADIO_FFT_LIBRARIES}
    ${GNURADIO_FILTER_LIBRARIES}
    gnss_system_parameters
    gnss_sp_libs
    signal_source_adapters
    datatype_adapters
    input_filter_adapters
    conditioner_adapters
    resampler_adapters
    acq_adapters
    tracking_adapters
    channel_adapters
    telemetry_decoder_libswiftcnav
    telemetry_decoder_lib
    telemetry_decoder_adapters
    obs_adapters
    pvt_adapters
    pvt_lib
    rx_core_lib
    core_monitor_lib
)
