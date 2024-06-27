#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 8 N7

const int N=3;

int main()
{
    int i , j;
    int x[N][N];

    cout << "Ingrese 9 valores enteros: " << endl;
         
    for( i=0;i<N;i++ )            
         
          for( j=0;j<N;j++ )
                            
                          cin >> x[i][j];                      

    
    
    cout << "\nMatriz" << endl;
    
    for( i=0;i<N;i++ )
    {               
          cout << endl;
          
          for( j=0;j<N;j++ )
                          
                          cout << setw(5) << x[i][j];                               
          
    }
    
    cout << "\n\nMatriz transpuesta" << endl;
    
    for( i=0;i<N;i++ )
    {               
          cout << endl;
          
          for( j=0;j<N;j++ )
                          
                          cout << setw(5) << x[j][i];                               
          
    }

    cout << endl;

    system("PAUSE");
    
    return 0;
    
}
