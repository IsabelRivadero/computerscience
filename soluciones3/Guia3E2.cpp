#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 3 N2

int main()
{
    int num , contador=0;
    
    cout << "Ingrese 4 numeros enteros: " << endl;
    
    cin >> num;
    contador = contador + (num+1)%2;

    cin >> num;
    contador = contador + (num+1)%2;

    cin >> num;
    contador = contador + (num+1)%2;

    cin >> num;
    contador = contador + (num+1)%2;

    cout << "Hay " << contador << " numero/s par/es." << endl;
    
    system ("PAUSE");
    
    return 0;
}
