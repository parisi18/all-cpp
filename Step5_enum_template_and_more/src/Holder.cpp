#include "Holder.hpp"

Holder::Holder(Cpf cpf, std::string name, std::string password) : Person(cpf, name), Auth(password){}

bool Holder::authenticate(std::string password) const {
    return Auth::authenticate(password);
}