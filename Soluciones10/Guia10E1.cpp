#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 10 N1

const int N=3;
int mat[N][N];
void posicionMaximo ( int&, int& );

int main()
{
    int fila , columna , i , j;
    
    cout << "Ingrese los valores enteros de la matriz 3x3: " << endl;
    
    for( i=0;i<N;i++ )
    
                    for( j=0;j<N;j++ )
                    
                                    cin >> mat[i][j];
                                    
    for( i=0;i<N;i++ )
    {
                    cout << endl;
    
                    for( j=0;j<N;j++ )
                    
                                    cout << setw(5) << mat[i][j];
    }
                                    
    posicionMaximo ( fila, columna );
    
    cout << "\n\nEl maximo se encuentra en la fila " << fila << " y en la columna " << columna << endl;
    
    system("PAUSE");
    
    return 0;
    
}

void posicionMaximo ( int& x, int& y )
{
    int i , j , max;

    max=mat[0][0];
    x=0;
    y=0;
    
    for( i=0;i<N;i++ )
    
                    for( j=0;j<N;j++ )
                    
                                    if( mat[i][j]>max )
                                    {
                                                     max=mat[i][j];
                                                     x=i;
                                                     y=j;
                                    }
}                                    
