#include <iostream>

using namespace std;

int main()
{
    //declaración de un vector de enteros
    int x[5];

    //inicializar el vector de manera manual
    x[0]=10;
    x[1]=20;
    x[2]=28;
    x[3]=19;
    x[4]=14;

    //imprime ciertos elementos del vector
    cout<<endl<<"Elemento de la posición 0: "<<x[0];
    cout<<endl<<"Elemento de la posición 3: "<<x[3];
    
    
    //imprime todo el vector
    cout<<endl<<"imprime todo el vector";
    for (int i=0; i<5;i++)
        cout<<" "<<x[i];


    return 0;
}