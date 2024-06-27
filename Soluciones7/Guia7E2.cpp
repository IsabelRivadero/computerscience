#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 7 N2

const int MAX=10;

int main()
{
    int i , x[MAX] , max , min;
    
    cout << "Ingrese una serie de 10 numeros enteros: " << endl;
    
    for( i=0;i<MAX;i++ )
 
          cin >> x[i];
 
    max=x[0];
    min=x[0];
    
    for( i=1;i<MAX;i++ )
    {     
          if( x[i]>max )
          
                      max=x[i];
          
          if( x[i]<min )
          
                      min=x[i];
    }
    
    cout << "El mayor es " << max << " y el menor es " << min << endl;
    
    system("PAUSE");
    
    return 0;
    
}
