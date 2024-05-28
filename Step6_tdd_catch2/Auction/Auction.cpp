#include "Auction.hpp"

Auction::Auction(std::string description) : description(description) {}

const std::vector<Bid>& Auction::getBids() const
{
    return bids;
}

void Auction::receiveBid(const Bid& bid)
{
    bids.push_back(bid);
}

