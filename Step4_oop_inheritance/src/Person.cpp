#include "Person.hpp"

Person::Person(Cpf cpf, std::string name) : m_cpf(cpf), m_name(name)
{
    std::cout << "Person created!" << std::endl;
}

Person::~Person()
{
    std::cout << "Person destroyed!" << std::endl;
}

void Person::verifyHolderName(std::string holder_name){
    if(holder_name.size() < 5){
        std::cout << "Invalid holder name" << std::endl;
    }
}