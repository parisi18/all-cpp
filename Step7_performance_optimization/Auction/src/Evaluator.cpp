#include "Evaluator.hpp"

Evaluator::Evaluator(){
    m_highest_bid = INT_MIN;
    m_lowest_bid = INT_MAX;

    //std::cout << "Constructor Evaluator" << std::endl;
}

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

    std::sort(bids.begin(), bids.end(), sort_bids);
    size_t size = bids.size() > 3 ? 3 : bids.size();
    m_top_3_bids = std::vector<Bid>(bids.begin(), bids.begin() + size);
}

float Evaluator::get_highest_value() const
{
    return m_highest_bid;
}

float Evaluator::get_lowest_value() const
{
    return m_lowest_bid;
}

std::vector<Bid> Evaluator::get_top_3_bids() const
{
    return m_top_3_bids;
}

bool Evaluator::sort_bids(const Bid& bid1, const Bid& bid2)
{
    return bid1.get_amount() > bid2.get_amount();
}