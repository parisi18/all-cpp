#pragma once
#include <iostream>
#include <string>

class Auth{
public:
    Auth(std::string password);
    ~Auth();
    virtual bool authenticate(std::string password) const = 0;

private:
    std::string m_password;
    std::string m_login;
};