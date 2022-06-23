#include <iostream>

using namespace std;

int cuadrado (int num)
{
    /*
    int x = num * num;
    return x;

    */
   return (num * num);
}

int main ()
{
    cout<<endl<<"Ejercicio con funcion";
    cout<<endl<< "Funcion que devuelva el cuadrado de un numero";
    cout<<endl<<"EL cuadrado de 10 es "<<cuadrado(10);
    cout<<endl<<"EL cuadrado de 10 es "<<cuadrado(12);
    
    int n = cuadrado(20);
    n += 2;
    cout<<endl<<"El valor n  "<<n;

    int x;
    cout<<endl<<"Ingresar un entero ";
    cin>>x;
    cout<<endl<<"El cuadrado de  " << x << "es : "<<cuadrado(x);
    

    return 0;
}