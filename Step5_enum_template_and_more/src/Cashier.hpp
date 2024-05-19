#pragma once

#include "Worker.hpp"
#include "Auth.hpp"
#include "utils.hpp"

class Cashier final : public Worker, Auth
{
public:
    Cashier(Cpf cpf, std::string name, float salary, Day payday, std::string password);
    ~Cashier();
    float compensation() const;
};