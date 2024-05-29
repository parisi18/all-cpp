#include "User.hpp"

User::User(std::string name) : m_name(name) {}

std::string User::get_name() const
{
    return m_name;
}