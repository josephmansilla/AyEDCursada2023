#include <iostream>
#include <cstring>
using namespace std;

int main (){
    int i = 0, fechatemp = 0, fechamayor = 0, fechamenor = 0;
    char mayor[50] = "", menor[50] = "", nombretemp[50] = "";
    char fin[4] = "FIN";
    while(1!=2){
        cout << "Ingrese el nombre: ";
        cin >> nombretemp;
        if(strcmp(nombretemp, fin)==0){
            break;
        }
        cout << "Ingrese la fecha de nacimiento: ";
        cin >> fechatemp;
        if(fechatemp < fechamayor || i == 0){
            fechamayor = fechatemp;
            strcpy(mayor,nombretemp);
    
        }
        if (fechatemp > fechamenor || i==0){
            fechamenor = fechatemp;
            strcpy(menor,nombretemp);
        }
        i++;
    }
    cout << "El nombre del mayor es: " << mayor << endl;
    cout << "El nombre del menor es: " << menor << endl;
}