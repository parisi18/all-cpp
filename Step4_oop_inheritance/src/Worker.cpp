#include "Worker.hpp"

Worker::Worker(Cpf cpf, std::string name, float salary) : Person(cpf, name), m_salary(salary)
{
    std::cout << "Worker created!" << std::endl;
}

Worker::~Worker()
{
    std::cout << "Worker destroyed!" << std::endl;
}

std::string Worker::get_name() const
{
    return m_name;
}