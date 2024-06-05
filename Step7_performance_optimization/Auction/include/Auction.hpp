#pragma once

#include <vector>
#include <string>
#include "Bid.hpp"
#include <iostream>

class Auction
{
public:
    Auction(std::string description);
    const std::vector<Bid>& get_bids() const;
    void receive_bid(const Bid& bid);
    void receive_bid(Bid&&); //&& means that the parameter is an r-value reference

private:
    std::vector<Bid> m_bids;
    std::string m_description;
};