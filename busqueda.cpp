#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

//Se tiene un vector de 50 números enteros
//Se pide buscar si el número cualquiera existe o no en el vector (devolver true o false)
//Debe utilizar funciones, y el vector se debe llenar de manera aleatoria

//Tarea: Diseñe una función adicional que busca un elemento del vector y devuelve
//la cantidad de veces que existe

int generaNumAleatorio(int total)
{
    int num = rand()%(total); //Genera un número aleatorio del 1 a total
    return num;
}

void LeerEdades(int edades[], int total)
{

    for (int j=0; j<total; j++)
    {
        edades[j]=generaNumAleatorio(total);
    }
}

void ImprimirEdades(int edades[], int total)
{
    for (int j=0; j<total; j++)
    {
        cout<<endl<<"La edad de el estudiante número "<<(j+1)<<" es: "<<edades[j];
    }
}

bool BuscarFuncion (int edades[], int total, int buscar)
{
    bool x=false;
    for (int j=0; j<total; j++)
    {
        if (edades[j]==buscar)
        {
            x=true;
        }
    }
    return x;
}

int main()
{
    srand (time(NULL));

    const int x = 50;
    int edades[50];
    int numbuscar;

    LeerEdades(edades, x);
    ImprimirEdades(edades, x);

    cout<<endl<<"Eliga el valor que quiera buscar: ";
    cin>>numbuscar;

    if (BuscarFuncion(edades, x, numbuscar)==true)
        cout<<endl<<"El número "<< numbuscar <<" Si se encuentra en el vector.";
    else if (BuscarFuncion(edades, x, numbuscar)==false)
        cout<<endl<<"El número "<< numbuscar <<" No se encuentra en el vector.";

    return 0;
}