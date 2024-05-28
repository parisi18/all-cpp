#include "User.hpp"

User::User(std::string name) : m_name(name) {}

std::string User::getName() const
{
    return m_name;
}