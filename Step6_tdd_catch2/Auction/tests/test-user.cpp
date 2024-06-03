#include "catch.hpp"
#include "User.hpp"
#include <string>

TEST_CASE("User"){

    SECTION("User with two names"){
        //Arrange - Given
        User user("Rafael Parisi");

        //Act - When
        std::string first_name = user.get_first_name();

        //Assert - Then
        REQUIRE("Rafael" == first_name);
    }
    

    SECTION("User with one name"){
        //Arrange - Given
        User user("Rafael");

        //Act - When
        std::string first_name = user.get_first_name();

        //Assert - Then
        REQUIRE("Rafael" == first_name);
    }
}   