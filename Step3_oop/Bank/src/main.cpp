#include <iostream>
#include "Account.hpp"
#include "Holder.hpp"
#include "Cpf.hpp"
int main(){

    Holder holder(Cpf("123.456.789-00"), "John Doe");
    Account account = Account("1234", holder);

    account.deposit(1000);

    Account account2 = Account("5678", holder);

    std::cout << "Account quantity: " << Account::get_total_accounts() << std::endl;

    return 0;
}