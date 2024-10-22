#include <iostream>
using namespace std;

bool primeChecker(int prime){
    for (int i = 2; i < prime; i++){
        if (prime % i == 0){
            return false;
        }
        else
            return true;
    }
}

int main(){
    int prime;

    cout << "Is your number a prime number?" << endl << "Enter your number: ";
    cin >> prime;

    if (primeChecker(prime) == true){
        cout << "It is prime";
    }
    else
        cout << "Not prime";
    
}


