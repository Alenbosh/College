#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
  string accountInfo;
  double balance;

public:
  Account(string a, double b) : accountInfo(a), balance(b) {}
  virtual double withdraw(double amount) = 0;
  virtual ~Account() { cout << "The Meomry is freed" << endl; }
};

class SavingsAccount : public Account {
public:
  SavingsAccount(string a, double b) : Account(a, b) {}
  double withdraw(double amount) override {
    if (balance - amount < 0) {
      return balance;
    } else {
      balance -= amount;
      return balance;
    }
  }
};

class CurrentAccount : public Account {
private:
  double overdraftLimit;

public:
  CurrentAccount(string a, double b, double o)
      : Account(a, b), overdraftLimit(o) {}
  double withdraw(double amount) override {
    if (balance < 0) {
      cout << "Checking overdraft limit" << endl;
      if (balance - amount <= -overdraftLimit) {
        cout << "overdraftLimit has been reached" << endl;
        return balance;
      } else {
        balance -= overdraftLimit;
        cout << "Your balance is Above overdraft Limit" << endl;
        return balance;
      }
    } else {
      balance -= amount;
      return balance;
    }
  }
};

int main() {
  Account *a1 = new CurrentAccount("3245728374", 67899.00, 500000);
  Account *c1 = new SavingsAccount("345346634", 787989.78);
}
