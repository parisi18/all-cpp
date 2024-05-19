#include "Manager.hpp"

Manager::Manager(Cpf cpf, std::string name, float salary, Day payday, std::string password) 
    : Worker(cpf, name, salary, payday), Auth(password){}

Manager::~Manager(){}

float Manager::compensation() const
{
    return 0.20 * get_salary();
}

