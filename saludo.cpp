#include <iostream>
using namespace std;

// Una funcion recibe como parametro un entero que representa el mes del año
//La función debe devolver el nombre de ese mes. Por ejemplo:
//Si se ingresa 6, La funcion devuelve "Junio"
string mes(int numeromes)
{
string aux;
if (numeromes==1)

    aux="Enero";

else if (numeromes==2)

    aux="Febrero";

else if (numeromes==3)

    aux="Marzo";

else if (numeromes==4)

    aux="Abril";

else if (numeromes==5)

    aux="Mayo";

else if (numeromes==6)

    aux="Junio";

else if (numeromes==7)

    aux="Julio";

else if (numeromes==8)

    aux="Agosto";

else if (numeromes==9)

    aux="septiembre";

else if (numeromes==10)

    aux="octubre";

else if (numeromes==11)

    aux="noviembre";

else if(numeromes==12)

    aux="diciembre";
else
    aux="Numero fuera de rango";
return aux;
}
//Una funcion recibe como parametro un entero que representa
//una tabla de multiplicar, la funcion debe imprimir la tabla
//de multiplicar. Desde el main, llame tresw veces a esta funcion
int tabla(int numerotabla)
{
  cout<<endl<<"Tabla de : "<<numerotabla;
    for(int i = 1; i<=10; i++)
    {
        cout<<endl<<numerotabla<< "X" << i << "=" << (numerotabla * i);
    }
    return 0;
}
//diseñe la funcion que envia un saludo
void saludo(string nombre, string genero)
{
cout<<endl<<"+++++++++++++++++++++++++++++++";
cout<<endl<<"++++Hola "<<nombre << "++++++++";
if (genero=="m")
{
    cout<<endl<<"Bienvenido a la PUCESE++++++++";
    cout<<endl<<"+++++++++++++++++++++++++++++++";
}
else if (genero=="f")
{
    cout<<endl<<"Bienvenida a la PUCESE++++++";
    cout<<endl<<"+++++++++++++++++++++++++++++++";
}
}
int main()
{
cout<<endl<<"ejemplo de una funcion que no devuelva valores";

saludo("Juan", "m");
saludo("Martha", "f");

cout<<endl<<"El primer mes es: "<<mes(1);
cout<<endl<<"El septimo mes es: "<<mes(7);
cout<<endl<<"El decimo mes es: "<<mes(10);
tabla(2);
tabla(5);
tabla(7);
return 0;
}