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

Bid::Bid(const Bid& bid) : m_user(bid.m_user), m_amount(bid.m_amount) {
    std::cout << "Copying bid: " << m_amount << std::endl;
}