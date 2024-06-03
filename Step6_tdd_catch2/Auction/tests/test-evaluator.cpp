#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Evaluator.hpp"


TEST_CASE("Should return the highest ascending order bids"){
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
    REQUIRE(2000 == evaluator.get_highest_value());
}

TEST_CASE("Should return the highest descending order bids"){
    //Arrange - Given
    Bid bid2(User("Lud Chagas"), 1000);
    Bid bid1(User("Rafael Parisi"), 2000);
    Auction auction("Playstation 5");
    auction.receive_bid(bid1);
    auction.receive_bid(bid2);

    //Act - When
    Evaluator evaluator;
    evaluator.evaluate(auction);

    //Assert - Then
    REQUIRE(2000 == evaluator.get_highest_value());
}

