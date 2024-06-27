#include <iostream>
#include <cmath>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 7 N6

const int N=100;

int main()
{
    int i=0 , n=0;
    int x[N];
    double media=0 , desvio=0;
    
    cout << "Ingrese los datos. Finalice el ingreso con un numero negativo: " << endl;
    cin >> x[i];
    
    while( x[i]>=0 && n<100 )
    {         
          media=media+x[i];
          
          cout<<media;
          
          i++;
         
          cin >> x[i];    
          
          n++;
    }
    
    media=media/n;
    
    for( i=0;i<n;i++ )
    
         desvio=desvio+pow(( x[i]-media ),2);
         
    desvio=sqrt( desvio/n );   
    
    cout << "La media es " << media << " y el desvio estandar " << desvio << endl;
    
    system("PAUSE");
    
    return 0;
    
}
