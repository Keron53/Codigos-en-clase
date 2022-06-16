#include <iostream>

using namespace std;

int main()
{
/*
    Se pide por teclado un entero que representa una tabla de multiplicar.
    Se generan tantas tablas de multiplicar, hasta que la tabla ingresada sea igual a 0
/

/
Subir los programas generados en clase en github y compartirlos con el docente
- cuenta de kleberposligua 
-utilice el archivo .gitignore para excluir los archivos .exe
-instale Clion en su computadora con c++
*/
int tabla; 
do
	{cout<<endl<<"Ingrese un numero entero para calcular su tabla de multiplicar: ";
cin >> tabla;

	    int i = 1;
	    if (tabla > 0)
	    {
	    while (i <= 12)
	        {
		         cout << "\n" << tabla << " X " << i << " = " << (tabla * i) << endl;
                i++;
             }
	    }
	    else
	        {
		        return 0;
            }
}
	while(tabla > 0);
}