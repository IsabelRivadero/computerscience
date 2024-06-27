#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 8 N4

const int N=3;

int main()
{
    int i , j , x[N][N] , columna;

    cout << "Ingrese 9 valores enteros: " << endl;
         
    for( i=0;i<N;i++ )
         
          for( j=0;j<N;j++ )
                          
                          cin >> x[i][j];

                          cout << "Indique la columna que desea ver (0, 1 o 2): " << endl;
                          cin >> columna;
    
    for( i=0;i<N;i++ )
    
         cout << setw(5) << x[i][columna] << endl;
    
    system("PAUSE");
    
    return 0;
    
}
