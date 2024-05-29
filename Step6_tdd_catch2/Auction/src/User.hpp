#pragma once

#include <string>

class User
{
public:
    User(std::string name);
    std::string get_name() const;
private:
    std::string m_name;
};