// Author: Rafael Parisi
// Creation date: 2024-05-19
// Alura C++ course exercise - Lesson 5

#include <iostream>
#include "Atm.hpp"

int main(){
    
    std::cout << "Welcome to the Fake ATM!" << std::endl;
    Atm* atm = new Atm();
    atm->init_atm();  
    delete atm;
    
    return 0;
}