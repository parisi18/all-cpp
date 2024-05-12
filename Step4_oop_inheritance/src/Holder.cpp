#include "Holder.hpp"

Holder::Holder(Cpf cpf, std::string name) : Person(cpf, name)
{
    std::cout << "Holder created!" << std::endl;
}