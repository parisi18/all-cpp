#pragma once

#include "Worker.hpp"
#include "Person.hpp"
#include "Auth.hpp"
#include "utils.hpp"

class Manager final : public Worker, Auth
{
public:
    Manager(Cpf cpf, std::string name, float salary, Day payday, std::string password);
    ~Manager();
    float compensation() const;
};