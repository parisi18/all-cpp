#include "Manager.hpp"

Manager::Manager(Cpf cpf, std::string name, float salary) : Worker(cpf, name, salary){}

Manager::~Manager(){}

float Manager::compensation() const
{
    return 0.20 * get_salary();
}

