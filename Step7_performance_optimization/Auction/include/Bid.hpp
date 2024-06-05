#pragma once

#include "User.hpp"
#include <string>
#include <iostream>

class Bid
{
public:
    Bid(User user, int amount);
    Bid(const Bid&); //copy constructor
    float get_amount() const;    
    std::string get_user_name() const;
private:
    User m_user;
    float m_amount;
};