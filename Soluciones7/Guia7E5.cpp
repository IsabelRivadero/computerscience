#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 7 N5

const int MAX=8;

int main()
{
    int i , x[MAX];
    float max , min , N;
    
    cout << "Ingrese una serie de 8 numeros enteros: " << endl;
    
    for( i=0;i<MAX;i++ )
 
          cin >> x[i];
          
    max=x[0];
    min=x[0];
          
    for( i=1;i<MAX;i++ )
    {     
          if( x[i]>max )
          
                      max=x[i];
          
          if( x[i]<min )
          
                      min=x[i];
    }
    
    cout << "Normalizados entre 0 y 1: " << endl;
    
    for( i=0;i<MAX;i++ )
    {
          N=( x[i]-min )/( max-min );
    
          cout << setprecision(3) << setw(7) << N << endl;    
    }
    
    system("PAUSE");
    
    return 0;
    
}
