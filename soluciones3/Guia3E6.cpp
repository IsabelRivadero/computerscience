#include <iostream>
#include <math.h>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 3 N6

const double PI=3.1415;

int main()
{
    double x , y , angulo;
    
    cout << "Ingrese el valor de abscisa: ";
    cin >> x;
    cout << " y de ordenada: ";
    cin >> y;

    angulo = atan(y/x);
    
    cout << endl << "El angulo del vector con respecto al eje de abscisas es: "<<endl;
    cout << angulo << " radianes o " << angulo*180/PI << " grados." << endl;
    
    system ("PAUSE");
    
    return 0;
}
