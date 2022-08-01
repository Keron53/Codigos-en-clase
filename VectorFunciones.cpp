#include <iostream>

using namespace std;

//Leer por teclado las edades de 8 estudiantes
//Encontrar la edad promedio, la edad mínima y la edad máxima
//se pide usar funciones

//función que realiza la lectura de las edades de los estudiantes.
void LeerEdades(int edades[], int total)
{
    cout<<endl<<"Ingrese las edades de los estudiantes: "<<endl;
    for (int j=0; j<total; j++)
    {
        cout<<(j+1)<<" Ingresa la edad : ";
        cin>>edades[j];
    }
}

//función que imprima el vector de edades
void ImprimirEdades(int edades[], int total)
{
    for (int j=0; j<total; j++)
    {
        cout<<endl<<"La edad de el estudiante número "<<(j+1)<<" es: "<<edades[j];
    }
}

//Función que retorna la edad mínima
int getedadminima(int edades[], int total)
{
    int x=edades[0];
    for (int j=1; j<total; j++)
    {
        if (edades[j] < x)
            x=edades[j];
            
    }
    return x;
}

//Función que retorna la edad máxima
int getedadmaxima(int edades[], int total)
{
    int x=edades[0];
    for (int j=1; j<total; j++)
    {
        if (edades[j] > x)
            x=edades[j];
        
    }
    return x;
}

int main()
{
    const int TOTAL=8;
    int edades[TOTAL];//declaración del vector de edades
    LeerEdades(edades, TOTAL);
    ImprimirEdades(edades, TOTAL);
    int x=getedadminima(edades, TOTAL);
    int y=getedadmaxima(edades, TOTAL);
    cout<<endl<<"La edad minima es "<< x;
    cout<<endl<<"La edad máxima es "<< y;
    
    return 0;
}