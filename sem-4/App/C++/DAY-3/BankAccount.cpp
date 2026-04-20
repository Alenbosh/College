#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
  string AccountNumber;
  float AccountBalance;

public:
  BankAccount() {
    this->AccountNumber = " Not Assigned";
    this->AccountBalance = 0;
  }
  BankAccount(string AccountNumber, float AccountBalance) {
    this->AccountBalance = AccountBalance;
    this->AccountNumber = AccountNumber;
  }
  BankAccount(const BankAccount &s) {
    this->AccountBalance = s.AccountBalance;
    this->AccountNumber = s.AccountNumber;
  }
  void display() {
    cout << "Customer's AccountNumber :" << AccountNumber << endl;
    cout << "Customer's AccountBalance :" << AccountBalance << endl;
  }

  ~BankAccount() {
    cout << "BankAccount " << AccountNumber << " is Closed" << endl;
  }
};

int main() {
  BankAccount b1;
  b1.display();
  BankAccount b2("7567576986", 9898.009);
  b2.display();
  BankAccount b3 = b2;
  b3.display();
  {
    BankAccount b4("89897907097", 7888.009);
    b4.display();
  }
}
