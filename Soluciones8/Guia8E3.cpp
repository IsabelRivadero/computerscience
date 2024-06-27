#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 8 N3

const int N=3;

int main()
{
    int i , j , x[N][N] , fila;

    cout << "Ingrese 9 valores enteros: " << endl;
         
    for( i=0;i<N;i++ )             
         
          for( j=0;j<N;j++ )
                          
                          cin >> x[i][j];                                                                                

    cout << "Indique la fila que desea ver (0, 1 o 2): " << endl;
    cin >> fila;
    
    for( i=0;i<N;i++ )
    
         cout << setw(5) << x[fila][i];
         
    cout << endl;
    
    system("PAUSE");
    
    return 0;
    
}
