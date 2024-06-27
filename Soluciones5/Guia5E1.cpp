#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 5 N1

int main()
{  
    int N , x;
    double promedio=0;
    
    cout << "Cuantos numeros enteros desea ingresar? ";
    cin >> N;
    
    cout << endl << "Ingrese " << N << " numeros: "<<endl;
    
    for( int i=0;i<N;i++ )
    {
            cin >> x;
            
            promedio += x;
    }
    
    promedio = promedio/N;
    
    cout << endl << "El promedio de los numeros ingresados es: " << promedio << endl;
    
    system ("PAUSE");
    
    return 0;
    
}
