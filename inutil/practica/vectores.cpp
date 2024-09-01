#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int hectorPrint(const char* hector[], int size);
int primePrint(int prime[],int size);

int main(){
    const char* hector[6] = {"h","e","c","t","o","r"};
    int prime[] = {2,3,5,7,13};
    
    hectorPrint(hector, 6);
    cout << "*************" << endl;
    primePrint(prime,5);

    return 0;
}

int hectorPrint(const char* hector[], int size){
    for (int i = 0; i< size; i++){
        cout << hector[i] << endl;
    }

    return 0;
}

int primePrint(int prime[], int size){
    for (int j = 0; j < size; j++){
        cout << prime[j] << endl;
    }

    return 0;
}