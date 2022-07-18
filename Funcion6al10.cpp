#include <iostream>

using namespace std;

//Ejercicio 6
int exponente(int base, int exponente)
{
    int totalexponente;
    totalexponente = base;
    int x=1;
    while (x<exponente)
    {
        totalexponente= totalexponente*base;
        x++;
    }
    return totalexponente;
}

//Ejercicio 7 
int cuantascifras(int num)
{
int x= 0;

while (num>0)
{
    num=num/10;
    x++;
}
return x;
}

//Ejercicio 8
void binario (int n)
{
string r;
while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    for (int i=r.length()-1; i>=0; i--)
      cout << r[i];
}

//Ejercicio 9
void tabla (int x)
{
int i=1;
while (i <= 15)
	{
	cout << "\n" << x << " X " << i << " = " << (x * i) << endl;
    i++;
    }
}

//Ejercicio 10
void tablam (int x)
{
int i=12;
while (i >= 1)
	{
	cout << "\n" << x << " X " << i << " = " << (x * i) << endl;
    i--;
    }
}

int main()
{
    // Base y Exponente, Ejercicio 6
    cout<<"\n ----------------------- ";
    cout<<endl<<"Se le va a pedir una base y un exponente";
    int ba;
    cout<<endl<<"Ingrese primero un número, este será la base: ";
    cin>>ba;
    int ex;
    cout<<endl<<"Ahora ingrese el exponente por el que será elevado la base: ";
    cin>>ex;
    cout<<endl<<"El resultado de "<<ba<<" elevado a "<< ex <<" es: "<<exponente(ba, ex);

//Cifras de un número, Ejercicio 7
    int a;
    cout<<endl<<"Ingrese un número para contar cuantas cifras tiene: ";
    cin>>a;
    cout<<endl<<"El número de cifras que tiene el valor "<<a<<" es: "<<cuantascifras(a);
    
//Transformar a Binario, Ejercicio 8
    cout<<"\n ----------------------- ";
    int numentero;
    cout<<endl<<"Ingrese un número entero para mostrar su valor en binario: ";
    cin>>numentero;
    binario(numentero);

//Imprimir tabla, Ejercicio 9
    cout<<"\n ----------------------- ";
    int tabla1;
    cout<<"\n Ingrese el número de la tabla que desea imprimir: ";
    cin>>tabla1;
    tabla(tabla1);

//Imprimir tabla arriba para abajo, Ejercicio 10
    cout<<"\n ----------------------- ";
    int tabla2;
    cout<<"\n Ingrese el número de la tabla que desea imprimir de arriba para abajo: ";
    cin>>tabla2;
    tablam(tabla2);
return 0;
}