#include <iostream>
using namespace std;

struct tp{
    int c1;
    int c2;
};

int main(){
    // punteros no viene solo, siempre está acompañado por otro tipo de dato
    tp * ptr = new tp();
    cout << "valor al que apunta ptr es " << ptr << endl;
    ptr->c1 = 30;
    (*ptr).c2 = 20;
    cout << "valor de campo 1 es " << (*ptr).c1 << endl;
    cout << "valor de campo 2 es " << ptr->c2;
}d