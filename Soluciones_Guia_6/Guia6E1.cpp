#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 6 N1

int main()
{  
    int i , j , alt , base;
    
    cout << "Ingrese la altura del rectangulo: ";
    cin >> alt;
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    
    for( i=0;i<alt;i++ )           // Imprime un rectángulo de asteriscos.
    {
    
            for( j=0;j<base;j++ )
            
                 cout << "*";
            
            cout << endl;
     
    }    
    
    system("PAUSE");
    
    return 0;
    
}
