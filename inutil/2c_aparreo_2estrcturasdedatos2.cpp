#include <iostream>
using namespace std;

struct alumno{
    int legajo;
    char nombre[50];
    int CantMatAprobadas;
};

void apareo(int[], int[], int, int,int[],int &);

int main()
{
    int N=7, M=6,i;
    int v1[N]={10,21,31,40,51,100,101};
    int v2[M]={11,21,31,41,51,70};
    int v3[N+M];
    int k=0;
    apareo(v1,v2,N,M,v3,k);
    for(i=0;i<k;i++)
    {
        cout << v3[i] << endl;
    }
}

void apareo(int v1[], int v2[], int N, int M,int v3[],int & k)
{
    int i=0;
    int j=0;

    while((i<N)&&(j<M))
    {
        if (v1[i]<v2[j])
        {
            v3[k]=v1[i];
            i++;
        }
        else {
            if (v1[i]==v2[j])
            {
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
        k++; //tamaño lógico del vector, donde puse el ultimo dato
    }
}

