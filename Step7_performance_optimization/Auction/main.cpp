#include <iostream>
#include <string>
#include <memory>
#include <string.h>

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

class MyString{
private:
    char* m_buffer;
    size_t size;
public:
    MyString(const char* string){
        size = strlen(string);
        m_buffer = new char[size];
        memcpy(m_buffer, string, size);
    }

    MyString(const MyString& other){ // Copy constructor
        std::cout << "Copied string" << std::endl;
        size = other.size;
        m_buffer = new char[size];
        memcpy(m_buffer, other.m_buffer, size);
    }

    MyString(MyString&& other){ // Move constructor
        std::cout << "Moved string" << std::endl;
        size = other.size;
        m_buffer = other.m_buffer;
        other.size = 0;
        other.m_buffer = nullptr;
    }

    ~MyString(){
        delete m_buffer;
    }
};

class MyUser{
private:
    MyString m_name;
public:
    MyUser(const MyString& user_name) : m_name(user_name){} // Copy constructor
    MyUser(MyString&& user_name) : m_name((MyString&&) user_name){} // Move constructor
};

int main(){
    std::cout << "---------------------------------" << std::endl;
    
    // *** SSO (Small String Optimization) ***
    std::cout << "SSO (Small String Optimization)" << std::endl;
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
    std::cout << "\nSmart Pointers" << std::endl;
    std::unique_ptr<User> user_unique = std::make_unique<User>(User("John Doe"));
    std::shared_ptr<User> user_shared = std::make_shared<User>("John Doe");

    show_user_name(user_shared);

    // *** Move Semantics ***
    std::cout << "\nMove Semantics" << std::endl;
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


    // *** Copy Elision ***
    std::cout << "\nCopy Elision" << std::endl;
    // Copy elision is a compiler optimization technique that eliminates unnecessary copying of objects.
    // In C++, the compiler is allowed to eliminate the copy/move constructor and destructor calls in certain situations.
    // This optimization is called copy elision.
    // Copy elision is mandatory in C++17, but it is optional in C++11 and C++14.

    MyUser(MyString("John Doe"));

    return 0;
}

