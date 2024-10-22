#include <iostream>
using namespace std;

struct tiempo{
public:
    int tiempo = 0;
};

double velocidad(double);
void tiemporeal(int);

int main (){
    tiempo a,b,c;
    cin >> a.tiempo;
    cout << "\n";
    cin >> b.tiempo;
    cout << endl;
    cin >> c.tiempo;
    //y si fuera en minutos y segundos
    /*


    tiemporeal(c.tiempo);
    tiemporeal(a.tiempo);
    tiemporeal(b.tiempo);

    
    */

    if (a.tiempo < b.tiempo && a.tiempo < c.tiempo){
        cout << "Laura";
    }
    else if (b.tiempo < a.tiempo && b.tiempo < c.tiempo){
        cout << "Jesus";
    }
    else if(c.tiempo < a.tiempo && c.tiempo < b.tiempo){
        cout << "Maria";
    }
    else{
        cout << "Empate";
    }

}

double velocidad(double tiempo){
    return 1500 / tiempo;
}
void tiemporeal(int tiempo){
    tiempo = ((tiempo / 100)*60) + (tiempo - ((tiempo / 10)*10));

}