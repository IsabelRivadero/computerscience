#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 5 N3

int main()
{  
    int N;
    double factorial=1;
    
    cout << "Ingrese un numero entero para calcular su factorial: ";
    cin >> N;
    
    for( int i=0;i<N;i++ )
    
            factorial = factorial*(N-i);
            
    cout << endl << "El factorial del numero ingresado es: " << factorial << endl;
    
    system("PAUSE");
    
    return 0;
    
}
