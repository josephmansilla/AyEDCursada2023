#include <iostream>
#include <cstring>
using namespace std;

float iva(float &valor);
float telefonia(float costo,float minutos_libres, float excedente_minuto, float cantidad_minutos_usada);

int main(){
    float costo_abono = 0, costo_excedente = 0;
    float minutos_libre = 0, minutos_usados = 0;
    float costo_total = 0, costo_final = 0;

    cout << "Indicar el costo del abono: $";
    cin >> costo_abono;
    cout << "Indicar cantidad de minutos libres: ";
    cin >> minutos_libre;
    cout << "Indicar cargo por minuto excedente: ";
    cin >> costo_excedente;
    cout << "Indicar minutos usados: ";
    cin >> minutos_usados;

    costo_total = telefonia(costo_abono, minutos_libre, costo_excedente, minutos_usados);
    cout << "El costo final es $"<< iva(costo_total) << endl;
    cout << "La cantidad de minutos excedidos es " << minutos_usados - minutos_libre;

}

float telefonia(float costo,float minutos_libres, float excedente_minuto, float cantidad_minutos_usada){
    if (cantidad_minutos_usada > minutos_libres){
        return costo + ( (cantidad_minutos_usada-minutos_libres) * excedente_minuto);
    }
    else{
        return costo;
    }
}

float iva(float &valor){
    valor += (valor * 0.21);
    return valor;
}