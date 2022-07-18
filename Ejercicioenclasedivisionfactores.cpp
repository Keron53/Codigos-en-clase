#include <iostream>

using namespace std;

double factorial(int num)
{
    double fac=1;
    for(int i=1; i<=num; i++)
        fac=fac*i;

    return fac;
}

double exponente (int base, int exp)
{
    int suma=base;
    int i=1;
    while (i<exp)
        {
            suma=suma*base;
            i++;
        }
    return suma;

}

double serie01(int num)
{
    double suma=0;
    int k=2;
    int exp=5;
    int numexp=1;
    for (int i=1;i<num;i++)
    {
        suma=suma+ (factorial(k)/exp);
        k++;
        numexp++;
        exp=exponente(5,numexp);
    }
    return suma;
}


int main()
{

    cout<<"la serie cuando N vale 5 es "<<serie01(5);
    cout<<endl<<"la serie cuando N vale 5 es "<<serie01(7);
    cout<<endl<<"la serie cuando N vale 5 es "<<serie01(3);

return 0;
}