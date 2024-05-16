#include "Worker.hpp"

Worker::Worker(Cpf cpf, std::string name, float salary) : Person(cpf, name), m_salary(salary){}

Worker::~Worker(){}

std::string Worker::get_name() const
{
    return m_name;
}