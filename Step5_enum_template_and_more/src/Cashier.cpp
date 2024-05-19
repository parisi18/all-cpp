#include "Cashier.hpp"

Cashier::Cashier(Cpf cpf, std::string name, float salary) : Worker(cpf, name, salary){}

Cashier::~Cashier(){}

float Cashier::compensation() const
{
    return 0.10 * get_salary();
}