#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 4 N2

int main()
{  
    double x , y;
    
    cout << "Ingrese el valor de abscisa: ";
    cin >> x;
    cout << " y de ordenada: ";
    cin >> y;
    
    if( x<2 || x>4 || y<1 || y>5 )            // Punto exterior
    
        cout << "El punto es externo al cuadrado." << endl;
    
    else if ( x>2 && x<4 && y>1 && y<5 )      // Punto interior

        cout << "El punto es interno al cuadrado." << endl;
            
    else                                      // Punto frontera

        cout << "El punto esta en el borde del cuadrado." << endl;   
        
    system ("PAUSE");

    return 0;
}
