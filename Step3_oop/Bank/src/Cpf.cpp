#include "Cpf.hpp"

Cpf::Cpf(std::string cpf) : m_cpf(cpf) {
    //Cpf validation
    if(cpf.size() != 14){
        std::cout << "Invalid CPF" << std::endl;
    }
}

Cpf::~Cpf() {}
