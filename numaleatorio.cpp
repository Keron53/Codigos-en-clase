#include <iostream>
#include<stdlib.h>
#include<time.h>
 
using namespace std;
 
int generaNumAleatorio()
{
    int num = 1+rand()%(20); //genera un número aleatorio entre 1 y 20
    return num;
}
 
void jugar(int oportunidades)
{
    int num1; bool ganaste=false;
 
    int num2=generaNumAleatorio();
    cout<<endl<<"NUMERO ALEATORIO GENERADO: "<<num2;
    cout<<endl<<"========================================";
    cout<<endl<<"ADIVINA EL NÚMERO CORRECTO ENTRE 1 Y 20";
    cout<<endl<<"========================================";
 
int j=0;
while(j < oportunidades && ganaste==false)
 {    
    j++;
    cout<<endl<<endl<<"Oportunidad #:"<<j;
    cout<<endl<<"Ingresa un número entre 1 y 20:";
    cin>>num1;
 
    if(num1==num2)
    {
        ganaste=true;
    }
    else if(num1 < num2)
    {
        cout<<endl<<"DEBES INGRESAR UN NUMERO MAYOR :-(   :-(   :-(";
    }
    else
    {
        cout<<endl<<"DEBES INGRESAR UN NUMERO MENOR :-(   :-(   :-(";
    }
 } //fin de while
 
    if(ganaste)
    {
        cout<<endl<<":-)     :-)           :-)      :-)    :-)";
        cout<<endl<<"FELICIDADES, GANASTE UN VIAJE A GALÁPAGOS";
        cout<<endl<<":-)     :-)           :-)      :-)    :-)";
    }
    else
    {
        cout<<endl<<"PERDISTE.!!!!";
    }
 
} //fin de la función
 
int main()
{
    srand(time(NULL)); //inicializa el generador de número aleatorios
    jugar(3);
 
    return 0;
}