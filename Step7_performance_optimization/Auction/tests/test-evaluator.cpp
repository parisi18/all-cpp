#include "catch.hpp"
#include "Evaluator.hpp"
#include <string>

Auction descending_order(){
    Bid bid2(User("Lud Chagas"), 2000);
    Bid bid1(User("Rafael Parisi"), 1000);
    Auction auction("Playstation 5");
    auction.receive_bid(bid1);
    auction.receive_bid(bid2);

    return auction;
}

Auction ascending_order(){
    Bid bid2(User("Lud Chagas"), 1000);
    Bid bid1(User("Rafael Parisi"), 2000);
    Auction auction("Playstation 5");
    auction.receive_bid(bid1);
    auction.receive_bid(bid2);

    return auction;
}

TEST_CASE("Evaluator"){
    //Arrange - Given
    Evaluator evaluator;

    SECTION("Ordered auctions"){
        Auction auction = GENERATE(ascending_order(), descending_order());

        SECTION("Should return the highest bid"){
            //Act - When
            evaluator.evaluate(auction);

            //Assert - Then
            REQUIRE(2000 == evaluator.get_highest_value());
        }

    SECTION("Should return the lowest bid"){
            //Act - When
            evaluator.evaluate(auction);

            //Assert - Then
            REQUIRE(1000 == evaluator.get_lowest_value());
        }
    }

    
    SECTION("Should return the top three highest bids"){
        //Arrange - Given
        Bid bid2(User("Lud Chagas"), 1000);
        Bid bid1(User("Rafael Parisi"), 2000);
        Bid bid3(User("John Doe"), 1500);
        Bid bid4(User("Jane Doe"), 2500);

        Auction auction("Playstation 5");
        auction.receive_bid(bid1);
        auction.receive_bid(bid2);
        auction.receive_bid(bid3);
        auction.receive_bid(bid4);

        //Act - When
        Evaluator evaluator;
        evaluator.evaluate(auction);


        //Assert - Then
        auto top_3_bids = evaluator.get_top_3_bids();
        REQUIRE(3 == evaluator.get_top_3_bids().size());
        REQUIRE(2500 == top_3_bids[0].get_amount());
        REQUIRE(2000 == top_3_bids[1].get_amount());
        REQUIRE(1500 == top_3_bids[2].get_amount());
    }
}
