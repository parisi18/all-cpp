#pragma once

#include <string>
#include <iostream>
#include "Person.hpp"
#include "Cpf.hpp"
#include "Auth.hpp"

class Holder : public Person<Cpf>, Auth
{
public:
    Holder(Cpf cpf, std::string name, std::string password);
    bool authenticate(std::string password) const override;
};