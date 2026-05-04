#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
  string accountNo;
  double balance;

public:
  virtual void display() {
    cout << "The balance for Account No. " << accountNo << " is: " << balance
         << endl;
  }
  virtual ~Account() {}

public:
  Account(string a, double b) : accountNo(a), balance(b) {}
  void deposit(double amount) {
    balance = balance + amount;
    display();
  }
  virtual double withdraw(double amount) = 0;
  virtual double calculateInterest(int year) { return 0; }
};

class SavingsAccount : public Account {
  double interest;

public:
  SavingsAccount(string a, double b, double i) : Account(a, b), interest(i) {}
  double calculateInterest(int year) override {
    return (balance * interest * year) / 100;
  }
  double withdraw(double amount) override {
    if (balance - amount >= 0) {
      balance = balance - amount;
      display();
      return balance;
    } else {
      return balance;
    }
  }
};
class CurrentAccount : public Account {
  double overdraftLimit;

public:
  CurrentAccount(string a, double b, double limit)
      : Account(a, b), overdraftLimit(limit) {}
  void checkOverdraft() {
    if (balance <= 0) {
      cout << "Checking Overdraft Limit" << endl;
      if (balance <= -overdraftLimit) {
        cout << "The Overdraft exceeded" << endl;
      }
    } else {
      cout << "Your balance is Above OverdraftLimit" << endl;
    }
  }
  double withdraw(double amount) override {
    if (balance - amount >= -overdraftLimit) {
      balance -= amount;
      display();
      return balance;
    } else {
      cout << "The balance is too low" << endl;
      return balance;
    }
  }
};

int main() {
  Account *s1 = new SavingsAccount("869869869", 98000.00, 12);
  cout << s1->calculateInterest(2) << endl;
  Account *c1 = new CurrentAccount("546546345", 498.809, 100);
  c1->withdraw(500);
  c1->display();
  delete s1;
  delete c1;
}
