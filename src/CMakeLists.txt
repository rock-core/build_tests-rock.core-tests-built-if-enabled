rock_library(rock-enable-tests
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(rock-enable-tests_bin Main.cpp
    DEPS rock-enable-tests)

