#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 4 N6

int main()
{  
    double valA , valB;
    char operador;
    
    cout << "Ingrese una operacion entre dos numeros: " << endl;
    cin >> valA >> operador >> valB;
    
    if( operador=='+' )
    
         cout << "Resultado: " << valA+valB << endl;
    
    else if( operador=='-' )
    
         cout << "Resultado: " << valA-valB << endl;
         
    else if( operador=='*' )
    
         cout << "Resultado: " << valA*valB << endl;
         
    else if( operador=='/' )
    {
	 if( valB==0 )

	 cout << "No se puede dividir por cero. " << endl;

	 else
    
         cout << "Resultado: " << valA/valB << endl;
    }         
    else
    
         cout << "No se ingreso un operador valido (+,-,*,/)." << endl;
         
    system ("PAUSE");
    
    return 0;
}
