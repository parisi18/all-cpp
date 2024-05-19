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
        MANAGER_LOGIN = 7,
        EXIT = 8
    };
}

namespace Login{
    enum Response{
        SUCCESS = 0,
        INVALID_ACCOUNT = 1,
        INVALID_PASSWORD = 2,
        UNKNOWN_ERROR = 3
    };
}

enum Day{
    SUNDAY = 0,
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6
};