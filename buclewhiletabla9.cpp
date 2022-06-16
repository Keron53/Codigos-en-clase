#include <iostream>

using namespace std;

int main ()
{
    cout<<"\n\nEjemplo de bucle while que imprime la tabla del 9";
    int tabla=9;
    int i=1;
    while (i<=10)
    {
        cout<<"\n" << tabla << "X" << i << " = " << (tabla * i ) ;
        i++;
          }
//se pide por teclado un numero entero que debe estar entre 1 y 20.
// este numero entero representa la tabla que el usuario desea generar.
//se pide con un bucle while

int a;
cout<<"\n\n Bienvenido al programa de calculo de tablas, ingrese un numero del 1 al 20 : ";
cin>>a;
int b=1;
if (a>=1 && a<=20)
{
   while (b<=12)
    {cout<<"\n" << a << "X" << b << " = " << (b * a);
    b++;
    }
}
else 
   {cout<<"\n el numero ingresado supera el límite puesto";
   }


return 0;
}