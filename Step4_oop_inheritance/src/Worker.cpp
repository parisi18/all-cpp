#include "Worker.hpp"

Worker::Worker(Cpf cpf, std::string name, float salary) : Person(cpf, name), m_salary(salary)
{
    std::cout << "Worker created!" << std::endl;
}