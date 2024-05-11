#include "Holder.hpp"

Holder::Holder(Cpf cpf, std::string name) :  m_cpf(cpf), m_name(name) {}

Holder::~Holder() {}

void Holder::verifyHolderName(std::string holder_name){
    if(holder_name.size() < 5){
        std::cout << "Invalid holder name" << std::endl;
    }
}

std::string Holder::get_name() const{
    return m_name;
}
