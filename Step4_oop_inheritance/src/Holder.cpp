#include "Holder.hpp"

Holder::Holder(Cpf cpf, std::string name) : Person(cpf, name)
{
    std::cout << "Holder created!" << std::endl;
}

Holder::~Holder()
{
    std::cout << "Holder destroyed!" << std::endl;
}

std::string Holder::get_name() const
{
    return m_name;
}