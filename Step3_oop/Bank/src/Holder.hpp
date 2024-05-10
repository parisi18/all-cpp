#pragma once

#include <string>
#include <iostream>
#include "Cpf.hpp"

class Holder
{
public:
    Holder(Cpf cpf, std::string name);
    ~Holder();
private:
    void verifyHolderName(std::string name);

private:
    std::string number;
    std::string m_name;
    Cpf m_cpf;
};