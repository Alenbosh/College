#include <iostream>
using namespace std;

class Account {
protected:
  string accountNumber;
  string holderName;
  double balance;

public:
  Account() {
    cout << "Default constructor (tis shouldn't ever be called)" << endl;
  }
  Account(string a, string h, double b)
      : accountNumber(a), holderName(h), balance(b) {}
  virtual ~Account() { cout << "The object is destroyed" << endl; }
  void deposit(double amount) { balance += amount; };
  virtual void withdraw(double amount) = 0;
  double getBalance() { return balance; }
  void display() {
    cout << "---------------------------------------" << endl;
    cout << "Account holder's name :" << holderName << endl;
    cout << "Account Number :" << accountNumber << endl;
    cout << "Account's Balance :" << balance << endl;
  }
};

class SavingsAccount : public Account {
  double interestRate;
  int year;

public:
  SavingsAccount(string a, string h, double b, double i, int y)
      : Account(a, h, b), interestRate(i), year(y) {}
  void withdraw(double amount) override {
    if (balance > 1000) {
      balance -= amount;
    } else if (balance == 0) {
      cout << "Your Account's Balance is Zero" << endl;
    } else {
      cout << "Insufficient funds for transaction" << endl;
    }
  }
  double addInterest() { return (balance * year * interestRate) / 100; }
};

class CurrentAccount : public Account {
  double overdraftLimit;

public:
  CurrentAccount(string a, string h, double b, double o)
      : Account(a, h, b), overdraftLimit(o) {}
  void withdraw(double amount) override {
    if (balance < 0) {
      if (balance - amount <= -overdraftLimit) {
        cout << "Over Draft Limit" << endl;
      } else {
        balance -= amount;
      }
    } else if (balance <= -overdraftLimit) {
      cout << "Draft Limit Reached" << endl;
    }
  }
};
