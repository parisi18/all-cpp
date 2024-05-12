#pragma once

#include "Cpf.hpp"
#include "Person.hpp"
#include <string>

class Worker : public Person
{
public:
    Worker(Cpf cpf, std::string name, float salary);
    ~Worker();
private:
    float m_salary;
};