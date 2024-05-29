#pragma once

#include "Auction.hpp"

class Evaluator
{
public:
    void evaluate(Auction auction);
    float get_highest_value() const;
private:
    float m_highest_bid;
};
