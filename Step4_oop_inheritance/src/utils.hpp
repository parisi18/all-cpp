#pragma once

namespace AccountType{
    enum Type{
        SAVINGS = 1,
        CHECKING = 2
    };
}

namespace AtmOption{
    enum Option{
        CREATE_ACCOUNT = 0,
        LOGIN = 1,
        DEPOSIT = 2,
        WITHDRAW = 3,
        TRANSFER = 4,
        SHOW_BALANCE = 5,
        LOGOUT = 6,
        EXIT = 7
    };
}