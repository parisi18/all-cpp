#include "Person.hpp"

Person::Person(Cpf cpf, std::string name) : m_cpf(cpf), m_name(name){}

Person::~Person(){}

void Person::verifyHolderName(std::string holder_name) {
    if(holder_name.size() < 5){
        std::cout << "Invalid holder name" << std::endl;
    }
}

std::string Person::get_name() const {
    return m_name;
}