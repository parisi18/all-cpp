#include <iostream>
#include "Bid.hpp"
#include "Auction.hpp"
#include "Evaluator.hpp"

int main(){

    Bid bid2(User("Lud Chagas"), 2000);
    Bid bid1(User("Rafael Parisi"), 1000);
    Auction auction("Playstation 5");
    auction.receive_bid(bid1);
    auction.receive_bid(bid2);

    Evaluator evaluator;
    evaluator.evaluate(auction);

    std::cout << "Highest bid: " << evaluator.get_highest_value() << "\n"; // Expected output: "Highest bid: 2000

    return 0;
}