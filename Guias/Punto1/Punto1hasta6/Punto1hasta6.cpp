#include <iostream>
using namespace std;

int main(){
    // PUNTO 1
    int A = 0; int B = 0; cin >> A; cin >> B; cout << A + B;

    PUNTO 2
    int date = 0;
    cout << "Insert a date: ";
    cin >> date;
    int year = date / 10000;
    int month = (date / 100) - (year * 100);
    int day = date - ((date / 100) * 100);
    cout << "Year: " << year << endl << "Month: " << month << endl << "Day: " << day;
    


    PUNTO 3
    int i = 2;
    int total = 0;
    for (i = 2; i <= 10000; i++){
        if(i%2==0){
            total += i;
        }
    }
    cout << total << endl;
   

    PUNTO 4 y 5 
    float lado1 = 0, lado2 = 0, lado3 = 0;
    cin >> lado1;
    cin >> lado2;
    cin >> lado3;

    if (lado1 + lado2 >= lado3){
        cout << "Forma un triangulo";
        if (lado1==lado2==lado3){
            cout << " equilatero";
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            cout << " isoceles";
        }
        else{
            cout << " escaleno";
        }
    }
    else{
        cout << "No forma un triangulo";
    }
    
    PUNTO 6 
    int edad = 0;
    cin >> edad;
    if (edad <= 12){
        cout << "Menor";
    }
    else if (edad >= 13 && edad <=18){
        cout << "Cadete";
    }
    else if (edad >= 19 && edad <=25){
        cout << "Juvenil";
    }
    else{
        cout << "Mayor";
    }

}