#include "Cashier.hpp"

Cashier::Cashier(Cpf cpf, std::string name, float salary, Day payday, std::string password) 
    : Worker(cpf, name, salary, payday), Auth(password){}

Cashier::~Cashier(){}

float Cashier::compensation() const
{
    return 0.10 * get_salary();
}