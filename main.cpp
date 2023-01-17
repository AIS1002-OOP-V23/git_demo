#include <iostream>

#include "demo/person.hpp"

void printHello(const person& p) {
    std::cout << "Hello, " << p.get_name() << "!" << std::endl;
}

int main() {
    person p("per");

    printHello(p);

    return 0;
}
