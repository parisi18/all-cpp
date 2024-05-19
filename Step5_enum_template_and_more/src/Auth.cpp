#include "Auth.hpp"

Auth::Auth(std::string password) : m_password(password) {}

Auth::~Auth() {}

bool Auth::authenticate(std::string password) const {
    return m_password == password;
}