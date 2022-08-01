#include <iostream>

using namespace std;

int main()
{
    //declaración del vector
    int notas[10];

    //lectura de los elementos del vector por teclado
    cout<<endl<<"Registro de notas de estudiantes"<<endl;
    for(int k; k<10; k++)
    {
        cout<<"ingresa la nota del estudiante # "<<k+1<<": ";
        cin>>notas [k];
    }

    //impresión de las notas del vector
    cout<<endl<<endl<<"notas de los estudiantes"<<endl;
    for(int k=0; k<10 ;k++)
    {
        cout<<endl<<"La nota del estudiante # : "<<k+1<<" es: ";
        cout<<notas[k];
    }

    //Calcular la sumatoria y el promedio de las notas de los estudiantes
    //Luego imprimir los resultados
    int suma;
    for(int k=0; k<10; k++)
    {
        suma+=notas[k];
    }
    cout<<endl<<"La suma de las notas es: "<<suma;
    cout<<endl<<"El promedio de las notas es: "<<(double(suma/10));

    /*Tarea:

    Usando vectores se pide:
    1) Declare un vector de 100 enteros para registrar las notas de 100 estudiantes
    2) Ingrese las notas de estos 100 estudiantes. Alternativa: llene el vector co numeros aleatorios
    */

    return 0;
}