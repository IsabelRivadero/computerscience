#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 5 N3

int main()
{  
    int N , i=0;
    double factorial=1;
    
    cout << "Ingrese un numero entero para calcular su factorial: ";
    cin >> N;
    
    while( i<N )
    {
    
            factorial = factorial*(N-i);
            
            i++;
     
    }    
       
    cout << endl << "El factorial del numero ingresado es: " << factorial << endl;
    
    system("PAUSE");
    
    return 0;
    
}
