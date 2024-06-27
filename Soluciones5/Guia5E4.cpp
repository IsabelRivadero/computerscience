#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 5 N4

int main()
{  
    int N ,i;
    
    cout << "Ingrese un numero entero mayor que 1: " << endl;
    cin >> N;
    
    while( N<=1 )
    {
    
              cout << "El numero ingresado no es mayor que 1. Ingrese otro numero: ";
              cin >> N;
    
    }          
    
    cout << endl << "El numero " << N << " es divisible por: " << endl;
    
    for( i=1;i<N;i++ )    
    
                    if( N%i==0 )
                    
                              cout << i << endl;
                    
    system("PUASE");
    
    return 0;
    
}
                    
                    
    
    
