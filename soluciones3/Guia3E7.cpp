#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 3 N7

int main()
{
    double x , y;
    int cuadrante;
    
    cout << "Ingrese el valor de abscisa: ";
    cin >> x;
    cout << " y de ordenada: ";
    cin >> y;
   
    cuadrante = (x>0 && y>0)*1 + (x<0 && y>0)*2 + (x<0 && y<0)*3 + (x>0 && y<0)*4;
       
    cout << endl << "La coordenada esta en el cuadrante: " << cuadrante << endl;
    
    system ("PAUSE");
    
    return 0;
}
