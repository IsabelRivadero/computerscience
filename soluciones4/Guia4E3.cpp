#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 4 N3

int main()
{  
    double x , y;
    
    cout<<"Ingrese el valor de abscisa: ";
    cin>>x;
    cout<<" y de ordenada: ";
    cin>>y;
    
    if( x>4 || y<1 || y>x-1 )                 // Punto exterior
    
        cout << "El punto es externo al triangulo." << endl;
    
    else if ( x<4 && y>1 && y-1<x )           // Punto interior

        cout << "El punto es interno al triangulo." << endl;
            
    else                                      // Punto frontera

        cout << "El punto esta en el borde del triangulo." << endl;   
        
    system ("PAUSE");

    return 0;
}
