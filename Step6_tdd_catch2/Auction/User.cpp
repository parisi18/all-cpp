#include "User.hpp"

User::User(std::string name) : name(name) {}

std::string User::getName() const
{
    return name;
}