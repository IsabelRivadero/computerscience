#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 5 N2

int main()
{  
    int N , x , positivos=0;
    double promedio=0;
    
    cout << "Cuantos numeros enteros desea ingresar? ";
    cin >> N;
    
    cout << endl << "Ingrese " << N << " numeros: " << endl;
    
    for( int i=0;i<N;i++ )
    {
            cin >> x;
            
            if( x>0 )
            {
                   
                   promedio += x;
            
                   positivos++;
            }
    }
    
    promedio = promedio/positivos;
    
    cout << endl << "El promedio de los numeros positivos ingresados es: " << promedio << endl;
    
    system("PAUSE");
    
    return 0;
    
}
