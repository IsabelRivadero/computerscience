#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 10 N4

const int N=3, M=2;
void cargarMatriz ( double [N][M] );
void maxmin ( double [N][M], double& , double& );
void imprimePosicion ( double [N][M], double );

int main()
{
    int i , j;
    double mayor , menor , num;
    double matriz[N][M];
    
    cargarMatriz ( matriz );
    
    maxmin ( matriz, mayor, menor );
    
    cout << "\n\nEl maximo es " << mayor << " y el minimo " << menor;
    
    cout << "\n\nIngrese el valor que desea encontrar: ";
    cin >> num;
    
    imprimePosicion ( matriz, num );
    
    system("PAUSE");
    
    return 0;
    
}

void cargarMatriz ( double A[N][M] )
{
    int i , j;
    
    cout << "Ingrese los valores de la matriz " << N << "x" << M << ": " << endl;

    for( i=0;i<N;i++ )
    
                    for( j=0;j<M;j++ )
                    
                                    cin >> A[i][j];
                                    
    for( i=0;i<N;i++ )
    {
                    cout << endl;
    
                    for( j=0;j<M;j++ )
                    
                                    cout << setw(10) << A[i][j];
    }
}

void maxmin ( double A[N][M], double& max, double& min )
{
     int i , j;
     max=A[0][0];
     min=A[0][0];
     
     for( i=0;i<N;i++ )
     
                     for( j=0;j<M;j++ )
                     {
                                     if( A[i][j]>max )
                                     
                                                    max=A[i][j];
                                     
                                     if( A[i][j]<min )
                                     
                                                    min=A[i][j];
                     }
}

void imprimePosicion ( double A[N][M], double n )
{
     int i , j , cont=0;
     
          for( i=0;i<N;i++ )
     
                     for( j=0;j<M;j++ )
                     
                                     if( A[i][j]==n )
                                     {
                                                    cout << "\n\nHay coincidencia en la fila " << i << " y en la columna " << j;
                                                    cont++;
                                     }
     
     if( cont==0 )
     
                cout << "\n\nNo hubo coincidencia.";
}
                                     
                     
