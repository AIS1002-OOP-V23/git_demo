
add_library(personlib
        "person.cpp"
        "person_greeter.cpp"
        )
target_include_directories(personlib PUBLIC "${CMAKE_SOURCE_DIR}/include")
