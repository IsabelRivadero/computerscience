#include <iostream>
#include <cmath>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 3 N5

int main()
{
    double x1 , y1 , x2 , y2 , distancia;
    
    cout << "Ingrese las coordenadas cartesianas de dos puntos."<<endl;
    
    cout << "X1: ";
    cin >> x1;
    
    cout << "Y1: ";
    cin >> y1;
    
    cout << "X2: ";
    cin >> x2;
    
    cout << "Y2: ";
    cin >> y2;

    distancia = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    
    cout << "La distancia entre los dos puntos es: " << distancia << endl;
    
    system ("PAUSE");
    
    return 0;
}
