#pragma once

#include "User.hpp"

class Bid
{
public:
    Bid(User user, int amount);
    float get_amount() const;    
private:
    User m_user;
    float m_amount;
};