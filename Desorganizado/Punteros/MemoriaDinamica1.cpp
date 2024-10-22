#include <iostream>
using namespace std;

int main(){
    // punteros no viene solo, siempre está acompañado por otro tipo de dato
    int a;
    a = 20;
    int* ptr = NULL; //aseguro de que no apunta a nada (mejor que no inicializar)
    // si quiero desreferenciar el ptr = NULL , hay error

    cout << "Valor apuntado es " << ptr << endl;
    ptr = new int ();
    cout << "Valor apuntado es " << ptr << endl;
    *ptr = 35;
    cout << "contenido puntado por ptr es " << *ptr;
}