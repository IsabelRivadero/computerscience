#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 8 N5

const int N=3;

int main()
{
    int i , j , diagonal=0;
    int x[N][N] , sumfila=0 , sumcolum=0;

    cout << "Ingrese 9 valores enteros: " << endl;
         
    for( i=0;i<N;i++ )          
         
          for( j=0;j<N;j++ )
          
                          cin >> x[i][j];                               
          
    
    cout << "Matriz" << endl;
    
    for( i=0;i<N;i++ )
    {               
          cout << endl;
          
          for( j=0;j<N;j++ )
                          
                          cout << setw(5) << x[i][j];                               
          
    }
    
    cout << "\n\nSumas de: " << endl;
    
    for( i=0;i<N;i++ )               
    {   
          for( j=0;j<N;j++ )
          {
                          if( i==j )
                          
                                    diagonal=diagonal+x[i][j];
                           
                          sumfila=sumfila+x[i][j];
                          
          }
          
          cout << endl << "Fila " << i << " es " << sumfila;
          
          sumfila=0;
    }
          
    for( i=0;i<N;i++ )               
    {    
          for( j=0;j<N;j++ )
           
                          sumcolum=sumcolum+x[j][i];
                          
          cout << endl << "Columna " << i << " es " << sumcolum;
          
          sumcolum=0;
    }
    
    cout << endl << "Diagonal principal es " << diagonal << endl;               
       
    system("PAUSE");
    
    return 0;
    
}
