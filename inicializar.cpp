#include <iostream>

using namespace std;

int main()
{
    //Inicializar el vector en la declaración
    int edades [5] = {10,11,45,76,1};

    //cambio un elemento del vector
    edades[4]=11; //reemplaza el 1 por el 11

    //Imprimir todo el vector
    int k;
    for (k=0;k<5;k++)
    {            
        cout<<endl<<"El elemento de la posición "<<k<< " es : "<< edades[k];
    }

    //declare un vector de string y agregue 8 nombres de ciudades. Luego imprima todo el vector

    string ciudades[7]={"Esmeraldas","Barcelona","Santa Elena","El Oro","Los Bancos","Ambato","Hokkaido"};
    cout<<endl<<"Listado de Ciudades: ";
    for(k=0; k<7; k++)
    {
        cout<<ciudades[k]<<" ";
    }
    return 0;
}