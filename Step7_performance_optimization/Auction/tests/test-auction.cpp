#include "catch.hpp"
#include "Auction.hpp"

TEST_CASE("Auction"){
    SECTION("Auction should not have two bids with the same user"){
        //Arrange - Given
        Auction auction("Playstation 5");

        Bid bid1(User("Rafael Parisi"), 1000);
        Bid bi2(User("Rafael Parisi"), 2000);

        //Act - When
        auction.receive_bid(bid1);
        auction.receive_bid(bi2);

        //Assert - Then
        REQUIRE(1 == auction.get_bids().size());
        REQUIRE(1000 == auction.get_bids()[0].get_amount());
    }
}
