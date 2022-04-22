set(vector_src
        Vector2D.cpp
        Vector3D.cpp
)

ADD_LIBRARY(vector SHARED ${vector_src})

ADD_LIBRARY(vector-static STATIC ${vector_src})

if(NOT EXISTS "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/cmake/vector")
    file(MAKE_DIRECTORY "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/cmake/vector")
endif()

export(TARGETS vector vector-static
        APPEND FILE "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/cmake/vector/vector-targets.cmake")

ADD_EXECUTABLE(Vector2D Vector2D.cpp)
TARGET_LINK_LIBRARIES(Vector2D vector)

ADD_EXECUTABLE(Vector3D Vector3D.cpp)
TARGET_LINK_LIBRARIES(Vector3D vector)

install(TARGETS vector vector-static
        EXPORT vector-targets
        INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
        ${INSTALL_TARGETS_DEFAULT_ARGS}
)

install(EXPORT vector-targets DESTINATION "${CMAKE_INSTALL_DATADIR}/vector")

install(TARGETS
        Vector2D
        Vector3D
        ${INSTALL_TARGETS_DEFAULT_ARGS}
)




#set(vector_src
#        Vector2D.cpp
#        Vector3D.cpp
#        )
#
#add_library(camel-euclid-vector SHARED ${vector_src})
#SET_TARGET_PROPERTIES(camel-euclid-vector PROPERTIES OUTPUT_NAME "camel-euclid-vector")
#
#install(TARGETS camel-euclid-vector
#        EXPORT camel-euclid-targets
#        INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
#        ${INSTALL_TARGETS_DEFAULT_ARGS}
#        )
#install(EXPORT camel-euclid-targets
#        FILE camel-euclid-config.cmake
#        DESTINATION "${CMAKE_INSTALL_DATADIR}/usr/local/share/camel-euclid")
