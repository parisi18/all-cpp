#include "Holder.hpp"

Holder::Holder(Cpf cpf, std::string name) : Person(cpf, name){}

Holder::~Holder(){}

std::string Holder::get_name() const
{
    return m_name;
}