#ifndef Auction_hpp
#define Auction_hpp
#include <vector>
#include <string>
#include "Bid.hpp"

class Auction
{
public:
    Auction(std::string description);
    const std::vector<Bid>& getBids() const;
    void receiveBid(const Bid& bid);

private:
    std::vector<Bid> bids;
    std::string description;
};

#endif