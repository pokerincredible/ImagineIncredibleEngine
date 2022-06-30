project(PokerLib)

add_library(${PROJECT_NAME} STATIC
    include/Application.h
    include/Core.h
    include/EntryPoint.h
    include/Log.h
    include/PokerEngine.h

    src/Application.cpp
    src/Log.cpp
)

#add_definitions(-DPE_PLATFORM_WINDOWS -DPE_BUILD_SHARED)

add_library(poker::pokerLib ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC
        include
        third/spdlog/include
)