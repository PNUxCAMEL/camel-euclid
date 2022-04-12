set(vector_src
        Point2D.cpp
        Point3D.cpp
)

add_library(camel_vector SHARED ${vector_src})
SET_TARGET_PROPERTIES(camel_vector PROPERTIES OUTPUT_NAME "camel_vector")

install(TARGETS camel_vector camel_vector
        EXPORT camel_vector-targets
        INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
        ${INSTALL_TARGETS_DEFAULT_ARGS}
)


#project(vector_src)
#
#set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)
#
#set(vector_src
#        Point2D.cpp
#        Point3D.cpp
#)
#
#set(vector_hdrs
#        ../include/Point2D.h
#        ../include/Point3D.h
#)
#
#add_library(camel_vector SHARED ${vector_src})
#
#install(TARGETS camel_vector
#        EXPORT camel-euclid-targets
#        LIBRARY        DESTINATION lib
#        INCLUDES       DESTINATION include
#        PUBLIC_HEADER  DESTINATION include/camel-euclid
#)
#
#install(EXPORT camel-euclid-targets
#        FILE camel-euclid-config.cmake
#        DESTINATION share/camel-euclid/
#        EXPORT_LINK_INTERFACE_LIBRARIES
#)
#
