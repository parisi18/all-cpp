#pragma once

#include "Worker.hpp"
#include "Person.hpp"

class Manager final : public Worker
{
public:
    Manager(Cpf cpf, std::string name, float salary);
    ~Manager();
    float compensation() const;
};