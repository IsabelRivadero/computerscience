#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 7 N1

const int MAX=3;

int main()
{
    int i;
    double x[MAX] , y[MAX] , h[MAX];
    
    cout << "Ingrese los valores reales de dos vectores de longuitud 3." << endl;
    
    cout << "Vector 1: " << endl;
    
    for( i=0;i<MAX;i++ )
    
                      cin >> x[i];    
    
    cout << "Vector 2: " << endl;
    
    for( i=0;i<MAX;i++ )
    {
                      cin >> y[i]; 
    
                      h[i]=x[i]+y[i];
    }
    
    cout << "La suma de los dos vectres es: " << endl;
        
    for( i=0;i<MAX;i++ )
    
                      cout << h[i] << endl;
    
    system("PAUSE");
    
    return 0;
    
}
    
    
