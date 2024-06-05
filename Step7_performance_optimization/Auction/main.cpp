#include <iostream>
#include <string>

void* operator new(size_t bytes){
    std::cout << "Allocating " << bytes << " bytes\n";
    return malloc(bytes);
}

void show_name(std::string_view name){
    std::cout << name << std::endl;
}   

int main(){
    std::cout << "---------------------------------" << std::endl;
    
    // SSO (Small String Optimization)
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
    return 0;
}