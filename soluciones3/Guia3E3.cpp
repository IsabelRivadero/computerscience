#include <iostream>
#include <cmath>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 3 N3

const double PI=3.1415;

int main()
{
    double d , pericua , pericir , areacua , areacir;
    
    cout << "Ingrese un valor: ";
    cin >> d;
    
    pericua = d*4;
    pericir = 2*d*PI;
    areacua = pow(d,2);
    areacir = pow(d,2)*PI;
    
    cout << "\nUn cuadrado de lado " << d << " tiene: " << endl;
    cout << "Un perimetro de " << pericua << " y un area de " << areacua << endl;
    cout << "Un circulo de radio " << d << " tiene: " << endl;
    cout << "Un perimetro de " << pericir << " y un area de " << areacir << endl;
    
    system ("PAUSE");
    
    return 0;
}
    
