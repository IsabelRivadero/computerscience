#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 5 N5

int main()
{  
    int N , i , contador=0;
    
    cout << "Ingrese un numero entero mayor que 1: " << endl;
    cin >> N;
    
    while( N<=1 )
    {
    
              cout << "El numero ingresado no es mayor que 1. Ingrese otro numero: ";
              cin >> N;
    
    }          
    
    for( i=2;i<N;i++ )    
    
        if( N%i==0 )

                  contador++;
                  
    
    if( contador==0 )
    
        cout << "El numero " << N << " es primo.";
                   
    else
    
        cout << "El numero " << N << " no es primo.";
                    
    system("PUASE");
    
    return 0;
    
}
    
