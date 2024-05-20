#pragma once
#include <string>
#include <iostream>

template<typename Document>
class Person{
public:
    Person(Document document, std::string name) 
    : m_document(document), m_name(name)
    {
        verifyHolderName();
    }
    
    virtual std::string get_name() const 
    { 
        return m_name; 
    }
private:
    void verifyHolderName(){
        if(m_name.size() < 5){
            std::cout << "Invalid holder name" << std::endl;
        }
    }

protected:
    Document m_document;
    std::string m_name;
};