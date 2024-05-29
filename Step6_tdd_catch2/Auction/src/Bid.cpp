#include "Bid.hpp"

Bid::Bid(User user, int amount) : m_user(user), m_amount(amount) {}

float Bid::get_amount() const
{
    return m_amount;
}