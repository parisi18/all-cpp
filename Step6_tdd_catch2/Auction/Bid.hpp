#ifndef Bid_hpp
#define Bid_hpp
#include "User.hpp"

class Bid
{
public:
    Bid(User user, int amount);
    float getAmount() const;    
private:
    User m_user;
    float m_amount;
};

#endif