#pragma once
#include <string>
#include <iostream>

class Cpf
{
public:
    explicit Cpf(std::string cpf);
    ~Cpf();
    std::string getCpf() const { return m_cpf; }
private:
    std::string m_cpf;
};