#include <iostream>
#include <ostream>
#include <string>
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
  virtual ~Account() = default;
  void deposit(double amount) { balance += amount; };
  virtual void withdraw(double amount) = 0;
  double getBalance() { return balance; }
  string getAccountNumber() const { return accountNumber; }
  friend ostream &operator<<(ostream &out, const Account &acc);
};

ostream &operator<<(ostream &out, const Account &acc) {
  out << "--------------------------------------------------\n";
  out << "Account Holder's Name : " << acc.holderName << "\n";
  out << "Account Number : " << acc.accountNumber << "\n";
  out << "Account's Balance : " << acc.balance << "\n";
  out << "--------------------------------------------------\n";
  return out;
}

class SavingsAccount : public Account {
  double interestRate;
  int year;

public:
  SavingsAccount(string a, string h, double b, double i, int y)
      : Account(a, h, b), interestRate(i), year(y) {}
  void withdraw(double amount) override {
    if (balance - amount >= 1000) {
      balance -= amount;
    } else if (balance == 0) {
      cout << "Your Account's Balance is Zero" << endl;
    } else {
      cout << "Insufficient funds for transaction" << endl;
    }
  }
  double addInterest() {
    balance = balance + (balance * year * interestRate) / 100;
    return balance;
  }
};

class CurrentAccount : public Account {
  double overdraftLimit;

public:
  CurrentAccount(string a, string h, double b, double o)
      : Account(a, h, b), overdraftLimit(o) {}
  void withdraw(double amount) override {
    if (balance - amount < -overdraftLimit) {
      cout << "Over Draft Limit" << endl;
    } else {
      balance -= amount;
    }
  }
};

Account *findAccount(Account *accounts[], int p, string accNo) {
  for (int i = 0; i < p; i++) {
    if (accounts[i]->getAccountNumber() == accNo) {
      return accounts[i];
    }
  }
  return nullptr;
}

int main() {
  Account *accounts[10];
  int choice;
  int AccountNo = 0;
  int p = 0;
  while (true) {
    cout << "Enter Your choice:( 1.Create SavingsAccount 2.Create "
            "CurrentAccount "
            "3.Deposit 4.Withdraw 5.Display AllAccounts 6.AddInterest 7.Exit) "
         << endl;
    if (!(cin >> choice)) {
      cout << "Invalid input. Enter a number.\n";
      cin.clear();
      cin.ignore(1000, '\n');
      continue;
    } else {
      switch (choice) {
      case 1: {
        if (p == 10) {
          cout << "No new Account Creation possible" << endl;
          break;
        } else {
          string name;
          double balance = 0;
          int year, interest;
          string accStr = to_string(AccountNo);
          cout << "Enter Account Holder's Name :" << endl;
          cin.ignore();
          getline(cin, name);
          cout << "Enter inital balance for new account :" << endl;
          cin >> balance;
          cout << "Enter years for which amount to be stored:" << endl;
          cin >> year;
          cout << "Enter interest for new account :" << endl;
          cin >> interest;
          accounts[p] =
              new SavingsAccount(accStr, name, balance, interest, year);
          p++;
          AccountNo++;
          break;
        }
      }
      case 2: {
        if (p == 10) {
          cout << "No new Account Creation possible" << endl;
          break;
        } else {
          string namee;
          double balancee = 0;
          string accStrr = to_string(AccountNo);
          cout << "Enter Account Holder's Name :" << endl;
          cin.ignore();
          getline(cin, namee);
          cout << "Enter inital balance for new account :" << endl;
          cin >> balancee;
          accounts[p] = new CurrentAccount(accStrr, namee, balancee, 4500.00);
          p++;
          AccountNo++;
          break;
        }
      }
      case 4: {
        string input;
        double amount;
        cout << "Enter Your Bank Account No.(1 -- 10)" << endl;
        cin >> input;
        cout << "Enter amount to withdraw : " << endl;
        cin >> amount;
        if (amount <= 0) {
          cout << "Invalid amount\n";
          break;
        }
        Account *acc = findAccount(accounts, p, input);
        if (acc != nullptr) {
          acc->withdraw(amount);
        } else {
          cout << "Account not found\n";
        }
        break;
      }
      case 3: {
        string input;
        double amount;
        cout << "Enter Your Bank Account No.(1 -- 10)" << endl;
        cin >> input;
        cout << "Enter amount to Deposit : " << endl;
        cin >> amount;
        if (amount <= 0) {
          cout << "Invalid amount\n";
          break;
        }
        Account *acc = findAccount(accounts, p, input);
        if (acc != nullptr) {
          acc->deposit(amount);
        } else {
          cout << "Account not found\n";
        }
        break;
      }
      case 5: {
        for (int i = 0; i < p; i++) {
          cout << *accounts[i];
        }
        break;
      }
      case 6: {
        int interest, year;
        string input;
        cout << "Enter your account Number :" << endl;
        cin >> input;
        Account *acc = findAccount(accounts, p, input);
        if (acc != nullptr) {
          SavingsAccount *sa = dynamic_cast<SavingsAccount *>(acc);
          if (sa != nullptr) {
            sa->addInterest();
          } else {
            cout << "Not a Savings Account\n";
          }
        } else {
          cout << "Account not found\n";
        }
        break;
      }
      case 7: {
        cout << "You Exited the process" << endl;
        return 0;
      }
      }
    }
  }
  for (int i = 0; i < p; i++) {
    delete accounts[i];
  }
  return 0;
}
