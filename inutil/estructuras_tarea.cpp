/*ejercicio apareo
CONSIGNA

DADO UN vector de estructura con el maestro de 
  articulos(ordenado x producto):
  	- idproducto int
  	- nombre char(50)
  	- cantidadVendida int
se tiene otro vector con las novedades de articulos y ventas:
(desordenado)
	- idproducto int
  	- nombre char(50)
  	- cantidadVendida int
este segundo vector contiene las ventas del dia.
Se pide obtener una tercera estructura del mismo tipo
ordenada por producto que incluya el maestro actualizado con
las ventas del dia.
Ejemplo:
Maestro:
    - 7  lapiz azul  0 unidades
	- 8  lapiz verde 20 unidades
	- 20 goma de borrar 100 unidades
	
Ventas:
   - 7  lapiz azul 5 unidades
   -10  cuaderno   100 unidades
   - 8 lapiz verde 23 unidades
   - 5 lapiz negro 40 unidades
  
nuevo maestro:	
    - 5 lapiz negro 40 unidades
	- 7  lapiz azul  5 unidades
	- 8  lapiz verde 43 unidades
	 -10  cuaderno   100 unidades
	- 20 goma de borrar 100 unidades	
*/
#include <iostream>
#include <cstring>
using namespace std;

/*---------------------Estructuras-------------------------------*/
struct producto{
	int id;
	char nombre[50];
	int cantidadVendida;
};

/*--------------------Funciones Declaradas----------------------------------*/

void burbuja(producto v[],int N);
void apareo(producto v1[],producto v2[],int N,int M,producto v3[],int& k);
void rellenar(producto v1[],int N);

/*---------------------Main---------------------------------------------------*/

int main()
{
	int N,K=0;
	cout<<"Cuantos productos tuvieron modificaciones hoy? ";
	cin>>N;
	producto maestro[]={{8,"cartera",5},{4,"remera",10},{10,"campera",0}};
	producto ventas[N];
	producto stock[N+3];
	burbuja(maestro,3);
	rellenar(ventas,N);
	burbuja(ventas,N);
	apareo(maestro,ventas,3,N,stock,K);
	for(int i=0;i<K;i++)
	{
		cout<<"-------------Producto: "<<i+1<<"-------------"<<endl;
		cout<<"El id es: "<<stock[i].id<<endl;
		cout<<"El nombre es: "<<stock[i].nombre<<endl;
		cout<<"La cantidad vendida es: "<<stock[i].cantidadVendida<<endl;		
	};
	return 0;
}

/*---------------------Funciones definidas------------------------------------*/

void rellenar(producto v1[],int N)
{
	int i=0;
	for(i=0;i<N;i++)
	{
		cout<<"Id del producto: "<<endl;
		cin>>v1[i].id;
		cout<<"Nombre del producto: "<<endl;
		cin>>v1[i].nombre;
		cout<<"Cantidad vendida del producto: "<<endl;
		cin>>v1[i].cantidadVendida;
	}
}

void burbuja(producto v[],int N)
{
	int i,j;
	producto aux;
	for(i=1;i<N;i++) 
	{
		for(j=1;j<=N-i;j++) 
		{
			if(v[j-1].id>v[j].id)
			{
				aux=v[j-1];
				v[j-1] = v[j];
				v[j] = aux;
			}
		}
	}
}

//los vectores deben estar ordenados, el apareo siempre está ordenado.
void apareo(producto v1[],producto v2[],int N,int M,producto v3[],int& k)
{
	int i=0; 
	int j=0;
	
	while((i<N)&&(j<M))
	{
		if(v1[i].id<v2[j].id)
		{
			v3[k]=v1[i];
			i++;
		}
		else
			if(v1[i].id==v2[j].id)
			{
				v2[j].cantidadVendida=v2[j].cantidadVendida+v1[i].cantidadVendida;
				v3[k]=v2[j];
				j++;
				i++;	
			}
			else
			{
				v3[k]=v2[j];
				j++;	
			}
		k++;
	}
	while(i<N)
	{
		v3[k]=v1[i];
		i++;
		k++;
	}
	while(j<M)
	{
		v3[k]=v2[j];
		j++;
		k++;
	}
}