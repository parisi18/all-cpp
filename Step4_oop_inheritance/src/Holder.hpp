#pragma once

#include <string>
#include <iostream>
#include "Person.hpp"
#include "Cpf.hpp"
#include "Auth.hpp"

class Holder : public Person, Auth
{
public:
    Holder(Cpf cpf, std::string name, std::string password);
    ~Holder();
    bool authenticate(std::string password) const override;
};