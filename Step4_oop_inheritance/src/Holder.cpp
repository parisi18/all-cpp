#include "Holder.hpp"

Holder::Holder(Cpf cpf, std::string name, std::string password) : Person(cpf, name), Auth(password){}

Holder::~Holder(){}