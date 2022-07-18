
#include <iostream>
#include <time.h>
#include <ctime>
#include <sstream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

//Ejercicio 16
void Filas(string f, int n)
{
   for(int i = 1; i <= n; ++i)
    {
        for(int x = 1; x <= i; ++x)
        {
            cout << f;
        }
        cout << "\n";
    }
}

//Ejercicio 17
void FilasEspejo(string f, int n)
{
   for(int i = 1; i <= n; ++i)
    {
        for(int x = 1; x <= i; ++x)
        {
            cout << f;
        }
        cout << "\n";
    }
    for(int o = n; o >= 1; --o)
    {
        for(int y = o; y >= 1; --y)
        {
            cout << f;
        }
        cout << "\n";
    }
}

//Ejercicio 18
bool sumanums(int a, int b, int c)
{
    if(a+b==c || b+c==a || a+c==b)
    return true;
    else
    return false;
}

//ejercicio 19
void NumHexadecimal(int num)
{
    cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "\nSu numero en hexadecimal es: " <<num;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
}

//Ejercicio 20
void CalcularEdad(int ano, int mes, int dia)
{
  time_t t = time(0);// Obtiene la fecha actual desde el sistema
  tm* now = std::localtime(&t);
  int anoActual = 1897 + now->tm_year;
  int mesActual = now->tm_mon + 1;
  int diaActual = now->tm_mday;
  dia=ano*365;
  ano=anoActual-ano;
  mes=365*ano;
  mes/=30;
  cout<<endl<< "Años: " << ano << " Meses: " << mes << " Dias: " << dia;
}
//Ejercicio 21
int Dias( int &Y, int &M, int &D) 
{
int day1 = Y * 365;  
int day2 = M * 30;

int sum = day1 + day2 + D; 


time_t years;
years = time (0);
tm * yea = localtime (&years); 

int ala = yea -> tm_year + 1900;
int y;
y = ala * 365;
int plus = y - day1;  //Los años en días, desde el año marcado hasta el actual.

time_t months = time (0);
tm * mot = localtime (&months); 

int ele = mot -> tm_mon + 1; 
int x;
x = ele * 30;
int sharp = x - day2; //Los meses en días, desde el mes marcado hasta el actual.

time_t deis = time (0);
tm * da = localtime (&deis); 

int olo = da -> tm_mday; 
int harp = olo - D; // Los días desde el marcado hasta el actual.

int dayf1 = plus + sharp + harp;
return dayf1;
}


int main()
{
//Imprimir el número de filas y sus caracteres, Ejercicio 16
    cout<<"\n ----------------------- ";
    int numfilas;
    string relleno;
    cout<<endl<<"Ingrese el número de filas que desea imprimir: ";
    cin>>numfilas;
    cout<<endl<<"Ingrese el caracter que tendrán estas filas: ";
    cin>>relleno; 
    Filas(relleno, numfilas);

//Imprimir el número de filas, en modo espejo y sus caracteres, Ejercicio 17
    cout<<"\n ----------------------- ";
    int numfilas2;
    string relleno2;
    cout<<endl<<"Ingrese el número de filas que desea imprimir: ";
    cin>>numfilas2;
    cout<<endl<<"Ingrese el caracter que tendrán estas filas: ";
    cin>>relleno2; 
    FilasEspejo(relleno2, numfilas2);

//3 numeros verificar si es suma, ejercicio 18
    cout<<"\n ----------------------- ";
    int a,b,c;
    cout<<endl<<"Ingrese el primer número: ";
    cin>>a;
    cout<<endl<<"Ingrese el segundo número: ";
    cin>>b;
    cout<<endl<<"Ingrese el tercer número: ";
    cin>>c;
    cout<<endl<<"Ahora verificaremos si de los 3 números ingresados, uno es la suma de los otros 2.";
    if (sumanums(a,b,c)==true)
        cout<<endl<<endl<<"Uno de los números ingresados es la suma de los otros 2.";
    else if (sumanums(a,b,c)==false)
        cout<<endl<<"Ninguno de los números tiene relación.";

//Valor Hexadecimal, Ejercicio 19
    cout<<"\n ----------------------- ";
    int numhexa;
    cout<<endl<<"Ingrese un número para transformarlo a Hexadecimal: ";
    cin>>numhexa;
    NumHexadecimal(numhexa);

//Edad persona, Ejercicio 20
    cout<<"\n ----------------------- ";
    cout<<endl<<"Pondremos la fecha del 5 de Diciembre del 2004.";
    CalcularEdad(2004,12,5);
    
//Dias persona, Ejercicio 21
    int Y; 
    int M;
    int D;
    cout<<endl<<"Ingrese el año que desee: ";
    cin>>Y;
    cout<<endl<<"Ingrese el mes que desee: ";
    cin>>M;
    cout<<endl<<"Ingrese el día que desee: ";
    cin>>D;
  
   cout<<endl<<"Los dias transcurridos entre la fecha marcada y el día de hoy, son: "<< Dias(Y, M, D);    
    return 0;
}

