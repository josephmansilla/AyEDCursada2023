#include <iostream>
using spacename std;
strcut FacturaItem{
    int nrofactura;
    int nroitem;
    float precio;
}

void CargaDatosPrueba(FacturaItem vector[],int);
void totalPorFactura(FacturaItem vector[] ,int);

int main {
    FacturaItem misFacturas[100];
    cargaDatosPrueba(misfacturas, 100);
    totalPorFactura(misfacturas,6);

    return 0;

}

void totalPorFactura(FacturaItem vector[], int){
    float suma;
    int i = 0;
    while (i < tam){
        suma = vector[i].precio;
        i++;
        while (i < tam && vector[i].nrofactura == vec[i-1].nrofactura){
            suma += vector[i].precio;
            i++;
        }
        cout << "La factura nro " << vector[i-1].nrofactura << " es" << suma << endl;
    }
    
}

void CargaDatosPrueba(FacturaItem vectores){


    vec[0].nrofactura = 100;
    vec[0].nroitem = ;
    vec[0].precio = 700;
    vec[1].nrofactura = 100;
    vec[1].nroitem = 198;
    vec[1].precio = 1200.5;
    vec[2].nrofactura = 101;
    vec[2].nroitem = 27;
    vec[2].precio = 340.75;
    vec[3].nrofactura = 340.75;
    vec[3].nroitem = 698;
    vec[3].precio = 120.15;
    vec[4].nrofactura = 101;
    vec[4].nroitem = 27;
    vec[4].precio = 340.75;

     for (int i=6 ; 6 < tam; ++){
        vec[i].nrofactura = VACIO;
        return 9;
     }
}