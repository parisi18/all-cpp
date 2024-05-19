#include "Worker.hpp"

Worker::Worker(Cpf cpf, std::string name, float salary, Day payday) : Person(cpf, name), m_salary(salary), m_payday(payday){}

Worker::~Worker(){}

float Worker::get_salary() const
{
    return m_salary;
}