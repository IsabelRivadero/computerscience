#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 10 N5

const int N=3;
void cargarMatriz ( double [N][N] );
void promedioColumnas ( double [N][N], double [N] );
void promedioFilas ( double [N][N], double [N] );

int main()
{
    double datos[N][N];
    double promCol[N]={0}, promFil[N]={0};
    int i, j;

// Mostrar datos en matriz
    cargarMatriz ( datos );
    
    for( i=0;i<N;i++ )
    {
                    cout << endl;
    
                    for( j=0;j<N;j++ )
                    
                                    cout << setw(10) << datos[i][j];
    }

// Mostrar promedios de columnas
    promedioColumnas ( datos, promCol );
    
    cout << "\n\nPromedio de cada columna: \n";
    
    for( i=0;i<N;i++ )
         
                     cout << setw(10) << promCol[i];


// Mostrar promedios de filas
    promedioFilas ( datos, promFil );
    
    cout << "\n\nPromedio de cada Fila: \n";
    
    for( i=0;i<N;i++ )
         
                     cout << setw(10) << promFil[i] << endl;
                     
    system("PAUSE");
    
    return 0;
}

void cargarMatriz ( double A[N][N] )
{
    int i , j;
    
    cout << "Ingrese los valores de la matriz " << N << "x" << N << ": " << endl;

    for( i=0;i<N;i++ )
    
                    for( j=0;j<N;j++ )
                    
                                    cin >> A[i][j];
    
}

void promedioColumnas ( double A[N][N], double B[N] )
{
    int i , j;

    for( i=0;i<N;i++ )
    {
                    for( j=0;j<N;j++ )
                    
                                    B[i]+=A[j][i];
                                    
                    B[i]=B[i]/N;
    }
}

void promedioFilas ( double A[N][N], double B[N] )
{
    int i , j;

    for( i=0;i<N;i++ )
    {
                    for( j=0;j<N;j++ )
                    
                                    B[i]+=A[i][j];
                                    
                    B[i]=B[i]/N;
    }
}
