#include <iostream>

using namespace std;

//Ejercicio 1
double promedio3numeros(double x, double y, double z)
{
return (x+y+z)/3;
}
//Ejercicio 2
double promedio3numerosysuma(double x, double y, double z, double &suma)
{
double prom;
prom=(x+y+z)/3;
suma=(x+y+z);
return prom;
}
//Ejercicio 3
bool parimpar(int val)
{

int div;
div=(val%2);
if (div==0)
    return true;
else
    return false;
}
//Ejercicio 4
bool multiplo5 (int dat)
{
int div;
div=(dat%5);
if (div==0)
    return true;
else
    return false;
}
//Ejercicio 5
int cubo(int valorc)
{
    int x;
    x=(valorc*valorc*valorc);
    return x;
}


int main ()
{
//Promedio de 3 números de doble precisión, Ejercicio 1
    cout<<"\n ----------------------- ";
    cout<<"\n Ahora se calculará el promedio de los 3 numeros que usted ingrese";
    double q;
    double w;
    double e;
    cout<<"\n Ingrese el primer valor: ";
    cin>>q;
    cout<<"\n Ingrese el segundo valor: ";
    cin>>w;
    cout<<"\n Ingrese el tercer valor: ";
    cin>>e;
    cout<<"\n El promedio de estos tres números es: "<<promedio3numeros(q, w, e);

//Promedio 3 numeros+suma, Ejercicio 2
    cout<<"\n ----------------------- ";
    double suma;
    cout<<"\n Ahora se calculará el promedio de los 3 numeros que usted ingrese y la suma de estos 3";
    cout<<"\n Ingrese el primer valor: ";
    cin>>q;
    cout<<"\n Ingrese el segundo valor: ";
    cin>>w;
    cout<<"\n Ingrese el tercer valor: ";
    cin>>e;
    cout<<"\n El promedio de estos tres números es: "<<promedio3numeros(q, w, e);
    double t=promedio3numerosysuma(q, w , e, suma);

    cout<<endl<<" La suma de estos 3 números es: "<<suma;
// Par o impar , Ejercicio 3

    cout<<"\n ----------------------- ";
    int numpar;
    cout<<"\n Ingrese un número para ver si es par o impar: ";
    cin>>numpar;
    if (parimpar(numpar)==true)
        cout<<"Es par";
    else
        cout<<"Es impar";

//Multiplo de 5, Ejercicio 4
    cout<<"\n ----------------------- ";
    int multi;
    cout<<"\n Ingrese un número para ver si es multiplo de 5: ";
    cin>>multi;
    if (multiplo5(multi)==true)
        cout<<"Es multiplo de 5";
    else
        cout<<"No es multiplo de 5";

// Cubo de un número, Ejercicio 5
    int vcubo;
    cout<<"\n ----------------------- ";
    cout<<endl<<"Ingrese un número para elevarlo al cubo: ";
    cin>>vcubo;
    cout<<endl<<"El valor al cubo de "<< vcubo <<" es: "<<cubo(vcubo);

return 0;
}