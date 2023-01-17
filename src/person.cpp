
#include "demo/person.hpp"

person::person(const std::string& name): name_(name) {}

std::string person::get_name() const {
    return name_;
}