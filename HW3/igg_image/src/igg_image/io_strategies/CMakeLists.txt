find_package(PNG REQUIRED)

add_library(strategies
            png_strategy.cpp
            dummy_strategy.cpp
            ppm_strategy.cpp
            )

target_link_libraries(strategies
                      ${PNG_LIBRARIES})
