#include <iostream>
using namespace std;
int main()
{
    cout<<"ejemplo de bucle for";
    int tabla=10;
    for (int k=1; k<=10; k++)
    {
        cout<<endl<<tabla<<"X"<< k << "="<< (tabla * k);

    }
    //tabla de 3, con incremento de 2 en 2
    cout<<endl<<endl<< "tabla del 3";
    for(int k=1; k<=30; k+=2)
    {
        cout<<endl<<tabla<< " X " << k << " = " << (tabla * k);     
    }
    //ejercicio en clase:
    //con un bucle for, genere la tabla del 7 desde el 11 al 1
cout<<endl<<endl<<"tabla del 7";
tabla=7;
for(int k=12; k>=1; k--)
{
    cout<<endl<<tabla<< " X " << k << " = " << (tabla * k); 
}
return 0;
}
