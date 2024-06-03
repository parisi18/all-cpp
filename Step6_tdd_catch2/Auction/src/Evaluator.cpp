#include "Evaluator.hpp"

void Evaluator::evaluate(Auction auction)
{
    std::vector<Bid> bids = auction.get_bids();
    Bid last_bid = bids.back();
    m_highest_bid = last_bid.get_amount();

    for(Bid bid : bids){
        if(bid.get_amount() > m_highest_bid){
            m_highest_bid = bid.get_amount();
        }
        
        if(bid.get_amount() < m_lowest_bid){
            m_lowest_bid = bid.get_amount();
        }
    }
}

float Evaluator::get_highest_value() const
{
    return m_highest_bid;
}

float Evaluator::get_lowest_value() const
{
    return m_lowest_bid;
}