#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 8 N8

const int N=2;

int main()
{
    int i , j , h , temp;
    int a[N][N] , b[N][N] , r[N][N];
    char operador;

    cout << "Ingrese los valores enteros de dos matrices de 2x2: " << endl;
    
    cout << "\nMatriz A: " << endl;
    
    for( i=0;i<N;i++ )            
         
          for( j=0;j<N;j++ )
                            
                          cin >> a[i][j];
    
    cout << "\nMatriz B: " << endl;
    
    for( i=0;i<N;i++ )            
         
          for( j=0;j<N;j++ )
                            
                          cin >> b[i][j];
                           
    cout << "\n\nMatriz A: " << endl;
    
    for( i=0;i<N;i++ )
    {               
          cout << endl;
          
          for( j=0;j<N;j++ )
                          
                          cout << setw(5) << a[i][j];                               
          
    }
    
    cout << "\n\nMatriz B: " << endl;
    
    for( i=0;i<N;i++ )
    {               
          cout << endl;
          
          for( j=0;j<N;j++ )
                          
                          cout << setw(5) << b[i][j];                          
          
    }
    
    cout << "\n\n¿Que operacion desea realizar? ";
    cin >> operador;
    
    switch( operador )
    {
           case '+':
               
                 for( i=0;i<N;i++ )            
         
                      for( j=0;j<N;j++ )
                            
                              r[i][j]=a[i][j]+b[i][j];                         
          
           break;
           
           case '-':
               
                 for( i=0;i<N;i++ )            
         
                      for( j=0;j<N;j++ )
                            
                              r[i][j]=a[i][j]-b[i][j];                         
          
           break;
                      
           case '*':
               
                 for( i=0;i<N;i++ )            
         
                      for( j=0;j<N;j++ )
                      {
                              temp=0;
                              
                              for( h=0;h<N;h++ )

                                              temp=temp+(a[i][h]*b[h][j]);
                                                          
                              r[i][j]=temp;                        
                      }
           break;
           
           default:
           
           cout << "No se ingreso una operacion valida (+,-,*).";
    }
    
    if( operador=='+' || operador=='-' || operador=='*' )
    {
    
           cout << "\n\nMatriz resultante" << endl;
    
                  for( i=0;i<N;i++ )
                  {               
                      cout << endl;
          
                      for( j=0;j<N;j++ )
                          
                              cout << setw(5) << r[i][j];                               
          
                  }
    }

    cout << endl;

    system("PAUSE");
    
    return 0;
    
}
