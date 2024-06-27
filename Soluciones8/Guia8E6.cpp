#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 8 N6

const int N=3, M=2;

int main()
{
    int i , j , min , max;
    int x[N][M];

    cout << "Ingrese 6 valores enteros: " << endl;
         
    for( i=0;i<N;i++ )            
         
          for( j=0;j<M;j++ )
                            
                          cin >> x[i][j];                                                       
    
    cout << "\nMatriz" << endl;
    
    for( i=0;i<N;i++ )
    {               
          cout << endl;
          
          for( j=0;j<M;j++ )
                          
                          cout << setw(5) << x[i][j];                               
          
    }
    
    min=x[0][0];
    max=x[0][0];
    
    for( i=0;i<N;i++ )            
         
          for( j=0;j<M;j++ )
          {                                                          
                          if( x[i][j]>max )
                          
                                         max=x[i][j];
                                       
                          if( x[i][j]<min )
                          
                                         min=x[i][j];
          }  
    
    cout << "\n\nEl minimo es " << min << " y el maximo es " << max << endl;

    system("PAUSE");
    
    return 0;
    
}
