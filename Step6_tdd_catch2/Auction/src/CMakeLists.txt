# Add source files
set(SOURCES
    Auction.cpp
    Bid.cpp
    Evaluator.cpp
    User.cpp
)

# Create an executable from the source files
add_library(auction_lib ${SOURCES})
