#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 8 N2

const int N=6;

int main()
{
    int i , j , x[N] , temp;

    cout << "Ingrese 6 valores enteros: " << endl;
    
    for( i=0;i<N;i++ )
    
         cin >> x[i];
         
    for( i=0;i<N-1;i++ )
         
          for( j=0;j<N-(1+i);j++ )
          
                          if( x[j]<x[j+1] )
                          {
                                         temp=x[j];
                                         x[j]=x[j+1];
                                         x[j+1]=temp;
                          }
                          
    cout << endl << "Ordenados en forma descendente: ";
                          
    for( i=0;i<N;i++ )
    
         cout << setw(5) << x[i];
         
    cout << endl;     
         
    system("PAUSE");
    
    return 0;
    
}
