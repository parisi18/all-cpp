# Find the Catch2 testing framework
find_package(Catch2 3 REQUIRED)

# Add source files for tests
set(TEST_SOURCES
    test-evaluator.cpp
)

# Create an executable for the tests
add_executable(run_tests ${TEST_SOURCES})

# Link the test executable with the auction_lib and Catch2 library
target_link_libraries(run_tests auction_lib Catch2::Catch2WithMain)

# Enable testing
enable_testing()

# Add a test
add_test(NAME run_tests COMMAND run_tests)
