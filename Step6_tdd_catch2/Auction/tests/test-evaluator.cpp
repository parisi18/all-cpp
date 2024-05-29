#include <iostream>
#include "Bid.hpp"
#include "Auction.hpp"
#include "Evaluator.hpp"

int main(){

    //Arrange - Given
    Bid bid2(User("Lud Chagas"), 2000);
    Bid bid1(User("Rafael Parisi"), 1000);
    Auction auction("Playstation 5");
    auction.receive_bid(bid1);
    auction.receive_bid(bid2);

    //Act - When
    Evaluator evaluator;
    evaluator.evaluate(auction);

    //Assert - Then
    float expected_value = 2000;

    if(evaluator.get_highest_value() == expected_value){
        std::cout << "Test passed\n";
    } else {
        std::cout << "Test failed\n";
    }

    return 0;
}