#pragma once
#include <iostream>
#include <string>

class Auth{
public:
    Auth(std::string password);
    ~Auth();
    bool authenticate(std::string password) const;

private:
    std::string m_password;
    std::string m_login;
};