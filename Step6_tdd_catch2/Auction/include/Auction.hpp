#pragma once

#include <vector>
#include <string>
#include "Bid.hpp"

class Auction
{
public:
    Auction(std::string description);
    const std::vector<Bid>& get_bids() const;
    void receive_bid(const Bid& bid);

private:
    std::vector<Bid> m_bids;
    std::string m_description;
};