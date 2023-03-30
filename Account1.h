#pragma once
#include <string>
#include <iostream>
#include "Account1.h"
using namespace std;

class Account1
{
    private:
        std::string name;
        int balance{ 0 };

    public:
        Account1(std::string accountName, int initialBalance) : name{ accountName } {
            if (initialBalance > 0) {
                balance = initialBalance;
            }
        }

        void deposit(int depositAmount) {
            if (depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }
        int getBalance() const {
            return balance;
        }

        void setName(std::string accountName) {
            name = accountName;
        }

        std::string getName() const {
            return name;
        }

        void withdraw1(int retiro) {
            if (retiro <= balance) {
                balance = balance - retiro;
                cout << "Se retiró " << retiro << " de su cuenta." << endl;
            }
            else {
                cout << "No tiene fondos suficientes para realizar el retiro." << endl;
            }
        }

};

