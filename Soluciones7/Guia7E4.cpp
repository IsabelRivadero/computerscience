#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 7 N4

const int MAX=6;

int main()
{
    int i;
    float x[MAX] , temp;
    
    cout << "Ingrese los elementos de un vector de dimension 6: " << endl;
    
    for( i=0;i<MAX;i++ )
 
          cin >> x[i];
          
    for( i=0;i<MAX;i+=2 )
    {     
          temp=x[i];
          x[i]=x[i+1];
          x[i+1]=temp;
    }

    cout << "Intercambiando posiciones pares e impares, el vector queda: " << endl;

    for( i=0;i<MAX;i++ )
    
          cout << x[i] << endl;    

    system("PAUSE");
    
    return 0;
    
}
