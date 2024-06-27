#include <iostream>
#include <cmath>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 4 N4

int main()
{
    double x , y , distancia;
    
    cout << "Ingrese el valor de abscisa: ";
    cin >> x;
    cout << " y de ordenada: ";
    cin >> y;
    
    distancia = sqrt(pow(x-2,2)+pow(y-3,2));
    
    if( distancia==1.5 )         // Punto frontera
    
        cout << "El punto esta en el borde del circulo." << endl;
    
    else               
    {
        if( distancia<1.5 )      // Punto interior

        	cout << "El punto es interno al circulo." << endl;
    
        else                     // Punto exterior

        	cout << "El punto es externo al circulo." << endl;
    }
    
    system ("PAUSE");
    
    return 0;
}
