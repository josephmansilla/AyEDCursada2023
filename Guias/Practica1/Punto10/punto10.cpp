#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int cantempleados;
    float sueldo = 1;
    int em1=0,em2=0,em3=0,em4=0;
    while(sueldo != 0){
        cout << "Sueldo del empleado: ";
        cin >> sueldo;
        if (sueldo < 1520){
            em1++;
        }
        else if (sueldo >= 1520 && sueldo < 2780){
            em2++;
        }
        else if (sueldo >= 2780 && sueldo < 5999){
            em3++;
        }
        else{
            em4++;
        }
    }
    cout<<"\nGanan menos de 1520: " << em1 << "\nGanan mas de 1520 y menos de 2780: " << em2;
    cout << "\nGanan mas de 2780 y menos de 5999: " << em3 << "\nGanan mas de 5999: " << em4;


}