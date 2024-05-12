#pragma once

#include <string>
#include <iostream>
#include "Person.hpp"
#include "Cpf.hpp"

class Holder : public Person
{
public:
    Holder(Cpf cpf, std::string name);
    ~Holder();
    std::string get_name() const;
};