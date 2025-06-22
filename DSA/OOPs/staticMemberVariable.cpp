#include <iostream>

class Account {
    int balance;  // Instance Member variable
    static float roi;  // Static Member Variable / Class Variable

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() const {
        return balance;
    }
};

float Account::roi = 3.5f;

int main() {
    Account a;

    a.setBalance(40000);
    std::cout << "Balance after setting to 40000: " << a.getBalance() << std::endl;

    a.setBalance(50000);
    std::cout << "Balance after setting to 50000: " << a.getBalance() << std::endl;

    return 0;
}
