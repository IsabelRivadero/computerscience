#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS 
//
//
//    Ejercicio Adicional Guia 6 N1

int main()
{  
    int num , digitos = 0;
    
        
    cout << "Ingrese un numero entero: ";
    cin >> num;

    while( num!=0 )           // Cuenta la cantidad de digitos.
    {
    
            num = num/10;
            
            digitos++;
     
    }
    
    cout << "El numero ingresado tiene " << digitos << " digito/s." << endl;
    
    system("PAUSE");
    
    return 0;
    
}
