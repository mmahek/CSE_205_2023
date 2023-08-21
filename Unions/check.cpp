#include <iostream>
#include <string>
using namespace std;

struct AccountData {
    string holderName;
    int accountNumber;
    float balance;
};

union Transaction {
    float depositAmount;
    float withdrawAmount;
};

void depositMoney(AccountData &account, float amount) {
    account.balance += amount;
    cout << "Amount deposited successfully." << endl;
}

void withdrawMoney(AccountData &account, float amount) {
    if (amount <= account.balance) {
        account.balance -= amount;
        cout << "Amount withdrawn successfully." << endl;
    } else {
        cout << "Insufficient balance. Withdrawal failed." << endl;
    }
}

int main() {
    AccountData account;
    Transaction transaction;
    
    // Input account details
    getline(cin, account.holderName);
    cin >> account.accountNumber;
    cin >> account.balance;
    cin >> transaction.depositAmount;
    cin >> transaction.withdrawAmount;
    
    // Perform transactions
    depositMoney(account, transaction.depositAmount);
    withdrawMoney(account, transaction.withdrawAmount);
    
    // Display account details
    cout << "Account holder's name: " << account.holderName << endl;
    cout << "Account number: " << account.accountNumber << endl;
    cout << "Balance: " << account.balance << endl;
    
    return 0;
}
