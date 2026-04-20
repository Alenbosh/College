#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
  string AccountNumber;
  float AccountBalance;
  BankAccount(string AccountNumber, float AccountBalance) {
    this->AccountBalance = AccountBalance;
    this->AccountNumber = AccountNumber;
  }
  void deposit(float amount) { AccountBalance = AccountBalance + amount; }
  void withdraw(float amount) { AccountBalance = AccountBalance - amount; }
  void showBalance() {
    cout << "The Account balance is: " << AccountBalance
         << " for Account: " << AccountNumber << endl;
  }
};

int main() {
  BankAccount b1("2354235435", 7890.99);
  b1.showBalance();
}
