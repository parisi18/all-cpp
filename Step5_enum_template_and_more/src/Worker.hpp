#pragma once

#include "Cpf.hpp"
#include "Person.hpp"
#include <string>
#include "utils.hpp"

class Worker : public Person
{
public:
    Worker(Cpf cpf, std::string name, float salary, Day payday);
    ~Worker();
    float get_salary() const;
    virtual float compensation() const = 0;
private:
    float m_salary;
    Day m_payday; // 0 = Sunday, 1 = Monday, ..., 6 = Saturday
};