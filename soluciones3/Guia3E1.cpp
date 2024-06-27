#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 3 N1

int main()
{
    int num , acumulador=0;
    
    cout << "Ingrese 4 numeros enteros para calcular su promedio: " << endl;

    cin >> num;
    acumulador += num;

    cin >> num;
    acumulador += num;

    cin >> num;
    acumulador += num;

    cin >> num;
    acumulador += num;

    cout << "El promedio es: " << acumulador/4.0 << endl;
    
    system ("PAUSE");
    
    return 0;
}
