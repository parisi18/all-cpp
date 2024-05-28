#include "Bid.hpp"

Bid::Bid(User user, int amount) : m_user(user), m_amount(amount) {}

float Bid::getAmount() const
{
    return m_amount;
}