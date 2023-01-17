
#include "demo/person_greeter.hpp"

#include <iostream>

void greet(const person &p) {
    std::cout << "Hello, " << p.get_name() << "!" << std::endl;
}
