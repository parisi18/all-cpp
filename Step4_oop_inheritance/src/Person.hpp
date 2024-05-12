#pragma once

#include "Cpf.hpp"
#include <string>

class Person{
public:
    Person(Cpf cpf, std::string name);
    ~Person();
private:
    void verifyHolderName(std::string name);

private:
    Cpf m_cpf;
    std::string m_name;
};