#include "Worker.hpp"

Worker::Worker(Cpf cpf, std::string name, float salary) : Person(cpf, name), m_salary(salary){}

Worker::~Worker(){}

float Worker::get_salary() const
{
    return m_salary;
}