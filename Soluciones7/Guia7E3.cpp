#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 7 N3

const int MAX=5;

int main()
{
    int i , contador = 0;
    double x[MAX] , y[MAX];
    
    cout << "Ingrese los valores reales de dos vectores de longuitud 5." << endl;
    
    cout << "Vector 1: " << endl;
    
    for( i=0;i<MAX;i++ )
    
                      cin>>x[i];    
    
    cout << "Vector 2: " << endl;
    
    for( i=0;i<MAX;i++ )
    
                      cin >> y[i]; 
                      
    for( i=0;i<MAX;i++ )
    
                      if( x[i]==y[i] )
                      
                                    contador++;
                                    
    cout << "La cantidad de valores iguales es: " << contador << endl;
    
    system("PAUSE");
    
    return 0;
    
}
