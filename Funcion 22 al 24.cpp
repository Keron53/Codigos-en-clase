#include <iostream>
#include <math.h>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <sys/time.h>

using namespace std;

//ejercicio 22
std::string timeToString(std::chrono::system_clock::time_point &t)
{
    std::time_t time = std::chrono::system_clock::to_time_t(t);
    std::string time_str = std::ctime(&time);
    time_str.resize(time_str.size() - 1);
    return time_str;
}

//Ejercicio 23
void edadActual(int anioNac, int mesNac, int diaNac)
{
    time_t t = time(0);// Obtiene la fecha actual desde el sistema
    tm* now = std::localtime(&t);
    int anioActual = 1900 + now->tm_year;
    int mesActual = now->tm_mon + 1;
    int diaActual = now->tm_mday;
 
    int diasTranscFechaActual = (anioActual * 360) + (mesActual*30) + diaActual;
    int diasTranscFechaNac = (anioNac * 360) + (mesNac*30) + diaNac;
 
    int edadDias = diasTranscFechaActual - diasTranscFechaNac;
    int anio = edadDias / 360;
    int mes = (edadDias % 360) / 30;
    int dia = (edadDias % 360) % 30;
 
    cout<<endl<<"Usted tiene "<< anio <<" año(s), ";
    cout<<mes <<" mes(es), ";
    cout<<dia <<" día(s)";
}

//Ejercicio 24
void swap(int &n1, int &n2){
  int aux = n1;
  n1 = n2;
  n2 = aux;
}


int main()
{
//Tiempo actualizado, Ejercicio 22
    cout<<"\n ----------------------- \n";

    auto time_p = std::chrono::system_clock::now();
    cout<< "Tiempo actual: " << timeToString(time_p)<<endl;


//Dias de una persona, Ejercicio 23
    cout<<"\n ----------------------- \n";
    int anioNac;
    int mesNac;
    int diaNac;
    cout<<endl<<"Ingrese el año: ";
    cin>>anioNac;
    cout<<endl<<"Ingrese el mes: ";
    cin>>mesNac;
    cout<<endl<<"Ingrese el dia: ";
    cin>>diaNac;
    edadActual(anioNac, mesNac, diaNac);

//Valores cambiados, Ejercicio 24
    cout<<"\n ----------------------- \n"; 
    int a;
    int b;
    cout<<endl<<"Eliga el primer valor: ";
    cin>>a;
    cout<<endl<<"Eliga el segundo valor: ";
    cin>>b;
    swap(a,b);
    cout<<endl<<"Ahora el primer valor vale: "<<a;
    cout<<endl<<"Y el segundo valor vale: "<<b;
return 0;
}