#include <iostream>
#include <cmath>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 3 N4

int main()
{
    double x , y , distancia;
    
    cout << "Ingrese el valor de abscisa del punto: ";
    cin >> x;
    cout << " y el de ordenada: ";
    cin >> y;
    
    distancia = sqrt(x*x+y*y);
    
    cout << "La distancia al centro de coordenadas (0,0) es " << distancia << endl;
    
    system ("PAUSE");
    
    return 0;
}
