#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
  float initialbalance;
  string accno;

public:
  Bank() {
    initialbalance = 0.0;
    accno = "unknown";
  }
  Bank(string accno, float initialbalance) {
    this->initialbalance = initialbalance;
    this->accno = accno;
  }
  ~Bank() {
    cout << "the account" << accno << "is closed." << "and memory released"
         << endl;
  }
  void deposit(float amount) { initialbalance = initialbalance + amount; }
  void withdraw(float amount) {
    float max = initialbalance - amount;
    if (max < 0) {
      cout << "balance can't be negative" << endl;
    } else {
      initialbalance = max;
    }
  }
  void display() {
    cout << "the accno :" << accno << "has balance :" << initialbalance << endl;
  }
};
int main() {
  Bank b1;
  Bank *b2 = new Bank("678656587587", 67987.0898);
  int c;
  string com;
  int i;
  float w, d;
  cout << "\n enter your choice of number of bank accounts you wanna create"
       << endl;
  cin >> c;
  Bank *batch = new Bank[c];
  int choice;
  while (true) {
    cout << "1.deposit 2.withdraw 3.display 4.exit \n";
    cin >> choice;
    switch (choice) {
    case 1:
      cout << "enter ammount to be deposited" << endl;
      cin >> d;
      cout << "enter bank account number: ";
      cin >> i;
      if (i >= 0 && i < c) {
        batch[i].deposit(d);
      } else {
        cout << "invalid accountid" << endl;
      }
      break;
    case 2:
      cout << "enter bank account number: ";
      cin >> i;
      cout << "enter amount to be withdrawed: " << endl;
      cin >> w;
      if (i >= 0 && i < c) {
        batch[i].withdraw(w);
      } else {
        cout << "invalid accountid" << endl;
      }
      break;
    case 3:
      cout << "enter bank account number: ";
      cin >> i;
      if (i >= 0 && i < c) {
        batch[i].display();
      } else {
        cout << "invalid accountid" << endl;
      }
      break;

    case 4:
      cout << "Exiting Program...\n";
      break;
    }
  }
end:
  delete[] batch;
  delete b2;
}
