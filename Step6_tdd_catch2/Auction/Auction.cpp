#include "Auction.hpp"

Auction::Auction(std::string description) : m_description(description) {}

const std::vector<Bid>& Auction::getBids() const
{
    return m_bids;
}

void Auction::receiveBid(const Bid& bid)
{
    m_bids.push_back(bid);
}