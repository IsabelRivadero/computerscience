#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 4 N6

int main()
{  
    double valA , valB;
    char operador;
    
    cout << "Ingrese una operacion entre dos numeros: " << endl;
    cin >> valA >> operador >> valB;
    
    switch( operador )
    {
                    case '+':
                    
                    cout << "Resultado: " << valA+valB << endl;
                    
                    break;
                    
                    case '-':
    
                    cout << "Resultado: " << valA-valB << endl;
         
                    break;
                    
                    case '*':
    
                    cout << "Resultado: " << valA*valB << endl;
         
                    break;
                    
                    case '/':
                 
	                if( valB==0 )

	                cout << "No se puede dividir por cero. " << endl;

	                else
      
                    cout << "Resultado: " << valA/valB << endl;
         
                    break;
                    
                    default:
    
                    cout << "No se ingreso un operador valido (+,-,*,/)." << endl;
                    
    }
         
    system ("PAUSE");
    
    return 0;
}
