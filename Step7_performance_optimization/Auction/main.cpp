#include <iostream>
#include <string>
#include <memory>

#include "User.hpp"
#include "Bid.hpp"
#include "Auction.hpp"
// void* operator new(size_t bytes){
//     std::cout << "Allocating " << bytes << " bytes\n";
//     return malloc(bytes);
// }

void show_name(std::string_view name){
    std::cout << name << std::endl;
}   

void show_user_name(std::shared_ptr<User> user){
    std::cout << user->get_name() << std::endl;
}

int main(){
    std::cout << "---------------------------------" << std::endl;
    
    // *** SSO (Small String Optimization) ***
    // If the string is small enough, it will be stored in the stack
    std::string couple = "John Doe & Jane Doe";

    // The following code will not allocate memory using string_view
    //--std=c++17
    std::string_view first_name(couple.c_str(), couple.find("&") - 1);
    std::string_view second_name(couple.c_str() + couple.find("&") + 2);

    show_name(first_name);
    show_name(second_name);

    // A reference to a char pointer will not allocate memory
    show_name("John Doe");
    
    // *** Smart Pointers ***
    std::unique_ptr<User> user_unique = std::make_unique<User>(User("John Doe"));
    std::shared_ptr<User> user_shared = std::make_shared<User>("John Doe");

    show_user_name(user_shared);

    // L-value reference
    // What is an L-value reference?
    // An L-value reference is a reference that binds to an L-value.
    // An L-value is an object that occupies some identifiable location in memory (i.e., has an address).

    // R-value reference
    // What is an R-value reference?
    // An R-value reference is a reference that binds to an R-value.
    // An R-value is an object that DOES NOT occupy an identifiable location in memory (i.e., does not have an address).

    Bid bid1(User("John Doe"), 100);
    Bid bid2(User("Jane Doe"), 200);
    Auction auction("A brand new car");
    
    auction.receive_bid(bid1); // l-value reference
    auction.receive_bid(Bid(User("John Doe"), 300)); // r-value reference

    
    return 0;
}