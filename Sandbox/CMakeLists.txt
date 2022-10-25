project(Sandbox)

add_executable(${PROJECT_NAME} src/SandboxApp.cpp)

#add_definitions(-DPE_PLATFORM_WINDOWS)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        poker::pokerLib
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ../Poker/include
)