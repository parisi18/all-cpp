#ifndef User_hpp
#define User_hpp
#include <string>

class User
{
public:
    User(std::string name);
    std::string getName() const;
private:
    std::string m_name;
};

#endif