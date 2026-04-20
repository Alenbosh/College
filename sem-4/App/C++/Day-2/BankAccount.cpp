#include <iostream>
#include <string>
using namespace std;

// class BankAccount {
// public:
//   string AccountNumber;
//   float AccountBalance;
//   BankAccount(string AccountNumber, float AccountBalance) {
//     this->AccountBalance = AccountBalance;
//     this->AccountNumber = AccountNumber;
//   }
//   void deposit(float amount) { AccountBalance = AccountBalance + amount; }
//   void withdraw(float amount) { AccountBalance = AccountBalance - amount; }
//   void showBalance() {
//     cout << "The Account balance is: " << AccountBalance
//          << " for Account: " << AccountNumber << endl;
//   }
// };

class BankAccount {
private:
  string AccountNumber;
  float AccountBalance;

public:
  void setAccNumber(string m) { AccountNumber = m; }
  void setAccBalance(float s) { AccountBalance = s; }

  string getAccNum() { return AccountNumber; }
  float getAccBalance() { return AccountBalance; }

  void display() {
    cout << "\n--- Bank Details ---" << endl;
    cout << "Account Number :  " << AccountNumber << endl;
    cout << "Account Balance : " << AccountBalance << endl;
  }
};

int main() {
  BankAccount b1;

  string m;
  float s;

  cout << "Enter Bank Number : ";
  getline(cin, m);
  b1.setAccNumber(m);

  cout << "Enter Account Balance : ";
  cin >> s;
  b1.setAccBalance(s);

  b1.display();
}
