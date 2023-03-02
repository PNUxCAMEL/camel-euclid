cmake_minimum_required(VERSION 3.16.3)

project(camel-euclid-vector)

set(CMAKE_CXX_FLAGS "-std=c++14 ${CMAKE_CXX_FLAGS}")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(            # Specify locations of header files
        include
)

add_library(${PROJECT_NAME} SHARED
        src/Vector2D.cpp
        src/Vector3D.cpp
        src/Point2D.cpp
        src/Point3D.cpp
)

set(PROJECT_EXPORT_GROUP ${PROJECT_NAME}Targets)

install(TARGETS ${PROJECT_NAME}
        EXPORT ${PROJECT_EXPORT_GROUP}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        )

# Install public headers
install(DIRECTORY include/
        DESTINATION include
        )

# Install export group (information about targets)
install(EXPORT ${PROJECT_EXPORT_GROUP}
        DESTINATION lib/cmake/${PROJECT_NAME}
        )

# Install CMake specific files
install(EXPORT ${PROJECT_EXPORT_GROUP}
        FILE ${PROJECT_NAME}Config.cmake
        #        ${PROJECT_NAME}ConfigVersion.cmake
        #        ${PROJECT_NAME}Dependencies.cmake
        DESTINATION lib/cmake/${PROJECT_NAME}
        )