#include <iostream>
using namespace std;

void showMenu(){
    cout << "********** MENU **********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Deposit Money" << endl;
    cout << "**************************" << endl;
}

int main(){
    //check balance, withdraw, deposit and show menu
    int option = 0;
    double balance = 500;

    showMenu();
    cout << "Option: ";
    cin >> option;

    switch(option){
    case 1: cout << endl << "Balance: $" << balance << endl; break;
    case 2: cout << endl << "Deposit amount?";
        double depositAmount;
        cin >> depositAmount;
        balance =+ depositAmount;
    case 3: cout << endl << "Withdraw amount?";
        double withdrawAmount;
        cin >> withdrawAmount;
        if (withdrawAmount <= balance)
            balance =- withdrawAmount;
        else
            cout << "Insufficient balance!" << endl;
        
    }
    return 0;

}