#include "Bid.hpp"

Bid::Bid(User user, int amount) : m_user(user), m_amount(amount) {}

float Bid::get_amount() const
{
    return m_amount;
}

std::string Bid::get_user_name() const
{
    return m_user.get_name();
}