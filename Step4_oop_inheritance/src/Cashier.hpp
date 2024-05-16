#pragma once

#include "Worker.hpp"

class Cashier final : public Worker
{
public:
    Cashier(Cpf cpf, std::string name, float salary);
    ~Cashier();
    float compensation() const;
};