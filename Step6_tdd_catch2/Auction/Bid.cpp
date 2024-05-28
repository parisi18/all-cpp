#include "Bid.hpp"

Bid::Bid(User user, int amount) : user(user), amount(amount) {}

float Bid::getAmount() const
{
    return amount;
}