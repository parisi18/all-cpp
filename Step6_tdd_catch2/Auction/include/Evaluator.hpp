#pragma once

#include "Auction.hpp"
#include <limits.h>

class Evaluator
{
public:
    void evaluate(Auction auction);
    float get_highest_value() const;
    float get_lowest_value() const;
private:
    float m_highest_bid = INT_MIN;
    float m_lowest_bid = INT_MAX;
};
