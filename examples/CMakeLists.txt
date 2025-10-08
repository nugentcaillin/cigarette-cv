project(examples)

add_executable(helloworld)
#add_dependencies(helloworld opencv)

target_sources(helloworld
    PRIVATE
        helloworld.cpp
)

target_link_libraries(helloworld
    PRIVATE
        ProjectName
        ${OpenCV_LIBS}
)


CONFIGURE_TARGET(helloworld)
