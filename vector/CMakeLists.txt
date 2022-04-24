cmake_minimum_required(VERSION 3.1.0)

project(vector)

set(vector_src
        src/Vector2D.cpp
        src/Vector3D.cpp
        )

set(vector_hdr
        include/Vector.h
        include/Vector2D.h
        include/Vector3D.h
        )

add_library(camel-euclid-vector SHARED ${vector_src})

install(FILES ${vector_hdr} DESTINATION include/camel-euclid/)


install(TARGETS camel-euclid-vector
        EXPORT camel-euclid-vector-export
        LIBRARY DESTINATION lib
        INCLUDES DESTINATION include
        )

install(EXPORT camel-euclid-vector-export
        FILE camel-euclid-vector-config.cmake
        DESTINATION share/camel-euclid-vector/
        EXPORT_LINK_INTERFACE_LIBRARIES
        )

