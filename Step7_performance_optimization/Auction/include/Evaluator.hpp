#pragma once

#include "Auction.hpp"
#include <limits.h>
#include <algorithm>
#include <iostream>

class Evaluator
{
public:
    Evaluator();
    void evaluate(Auction auction);
    float get_highest_value() const;
    float get_lowest_value() const;
    std::vector<Bid> get_top_3_bids() const;
    static bool sort_bids(const Bid& bid1, const Bid& bid2);

private:
    float m_highest_bid = INT_MIN;
    float m_lowest_bid = INT_MAX;
    std::vector<Bid> m_top_3_bids;
};
