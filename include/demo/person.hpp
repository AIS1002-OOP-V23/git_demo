
#ifndef GIT_DEMO_PERSON_HPP
#define GIT_DEMO_PERSON_HPP

#include <string>

class person {

public:
    explicit person(const std::string& name);

    std::string get_name() const;

private:
    std::string name_;

};


#endif//GIT_DEMO_PERSON_HPP
