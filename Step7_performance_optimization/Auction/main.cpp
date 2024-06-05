#include <iostream>
#include <string>
#include <memory>
#include "User.hpp"

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
    return 0;
}

int main2(){
    std::cout << "---------------------------------" << std::endl;
    
    // // SSO (Small String Optimization)
    // // If the string is small enough, it will be stored in the stack
    // std::string couple = "John Doe & Jane Doe";

    // // The following code will not allocate memory using string_view
    // //--std=c++17
    // std::string_view first_name(couple.c_str(), couple.find("&") - 1);
    // std::string_view second_name(couple.c_str() + couple.find("&") + 2);

    // show_name(first_name);
    // show_name(second_name);

    // // A reference to a char pointer will not allocate memory
    // show_name("John Doe");
    
    //std::unique_ptr<User> user_unique = std::make_unique<User>(User("John Doe"));
    std::shared_ptr<User> user_shared = std::make_shared<User>("John Doe");

    show_user_name(user_shared);
    
    return 0;
}