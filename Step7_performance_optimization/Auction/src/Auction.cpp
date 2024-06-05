#include "Auction.hpp"

Auction::Auction(std::string description) : m_description(description) {}

const std::vector<Bid>& Auction::get_bids() const
{
    return m_bids;
}

void Auction::receive_bid(const Bid& bid)
{   
    if(m_bids.empty() || m_bids.back().get_user_name() != bid.get_user_name())
        m_bids.push_back(bid);
}   