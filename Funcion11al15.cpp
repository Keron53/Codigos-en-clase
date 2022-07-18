#include <iostream>
#include <math.h>

using namespace std;

//Ejercicio 11
void tablanum (int x)
{
    int f=10;
    if(x>=1 && x<=10)
        { 
        for(int i=1;i<=x;i++) 
            {for(int k=1;k<=f;k++)
            { 
            cout<<"\n"<<i<<" X "<<k<<" = "<<(i*k); 
            }
            cout<<endl;
            }
    }
    else
    cout<<endl<<"número fuera de rango";
}
//Ejercicio 12

int Funcioncuadratica (double a, double b, double c, double &x1, double &x2 )
{
int D=(b*b-4*a*c);
    if (a==0)
        return -1;  //Error dividir 0

    if (D<0)
        return 0;   //Error Discriminante negativo
    

    x1 = (-b+ sqrt(D))/(2*a);

    x2 = (-b- sqrt(D))/(2*a);
    return 1;
}

//Ejercicio 13
int sumatoria13(int N)
{
    int suma=0;
    bool flag = true;
    for (int i=1; i<=N; i++)
        {
            if (flag==true)
                suma=suma+i;
            else
                suma=suma-i;
            
            flag= !flag;
        }
    return suma;
}

//Ejercicio 14

double sumaexpo14(int n)
{
    int suma = 0;
    double exp = 0;
    for (int i = 2; i <= n; i++)
        {
        exp = pow(i,(i-1));
        suma=suma+exp;
        }
    return suma;
}
//Ejercicio 15
double factorial(int num)
{
double fac=1;
for(int k=1; k<=num; k++)
{
fac=fac*k;
}
return fac;
}

double serieFactorial(int n)
{
double suma=0;
bool flag=true;
for(int k=2; k<=n; k++ )
{
if(flag==true)
{
suma= suma + factorial(k);
}
else
{
suma= suma - factorial(k);
}
flag=!flag;
}

return suma;

}

int main()
{
//Imprimir tablas según numero puesto, Ejercicio 11
    cout<<"\n ----------------------- ";
    int tabla3;
    cout<<"\n Ingrese, del 1 al 10, el límite de numero de tablas que desea imprimir: ";
    cin>>tabla3;
    tablanum(tabla3);

//Ecuacion cuadratica, Ejercicio 12
    cout<<"\n ----------------------- ";
    cout<<endl<<"se calculara la ecuacion cuadratica, a continuación, se pediran 3 valores";
    double funcuadra1;
    double funcioncuadra2;
    cout<<"\n ----------------------- ";
    double h, j, v;
    cout<<"\n Ingrese el valor de a: ";
    cin>>h; 
    cout<<"\n Ingrese el valor de b: "; 
    cin>>j;
    cout<<"\n Ingrese el valor de c: "; 
    cin>>v;
    int e=Funcioncuadratica(h, j, v, funcuadra1, funcioncuadra2);
    if (e==1)
        {
        cout<<endl<<"Esta ecuación tiene solución";
        cout<<endl<<"La primera solución es: "<<funcuadra1;
        cout<<endl<<"La primera solución es: "<<funcioncuadra2; 
        }
    else if (e==0)  
        {
        cout<<endl<<"Esta ecuación no tiene solución debido a que el discriminante es negativo";
        }
    else
        cout<<endl<<"Error al dividir por 0";

//uno suma otro resta, Ejercicio 13
    cout<<"\n ----------------------- ";
    int N13;
    cout<<endl<<"Eliga un número límite para calcular la serie de suma y resta: ";
    cin>>N13;
    int res = sumatoria13(N13);
    cout<<endl<<"La sumatoria de la serie cuando N es "<<N13<<" es: ";
    cout<<res;

//Suma elevado, Ejercicio 14
    cout<<"\n ----------------------- ";
    int N14;
    cout<<endl<<"Eliga un número límite para calcular la serie con exponentes: ";
    cin>>N14;
    int sumelv = sumaexpo14(N14);
    cout<<endl<<"La sumatoria de la serie con exponentes cuando N es igual a "<<N14<<" es: ";
    cout<<sumelv;

//factorial suma, Ejercicio 15
    cout<<"\n ----------------------- ";
    int N15;
    cout<<endl<<"Eliga un número límite para calcular la serie con Factoriales de suma y resta: ";
    cin>>N15;
    double sumfac = serieFactorial(N15);
    cout<<endl<<"La sumatoria de la serie de factoriales cuando N es "<<N15<<" es: ";
    cout<<sumfac;
    return 0;
    }