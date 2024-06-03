#pragma once

#include "User.hpp"
#include <string>

class Bid
{
public:
    Bid(User user, int amount);
    float get_amount() const;    
    std::string get_user_name() const;
private:
    User m_user;
    float m_amount;
};