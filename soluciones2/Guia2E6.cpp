#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Tema 2 N6

int main() 
{ 
    char letra;

    cout << "Ingrese un letra en minuscula: ";
    
    cin >> letra;
    
//En c�digo ASCII, las may�sculas y min�sculas estan distanciadas por 32 unidades. 
//Ej: El n�mero 67 representa una 'C' y el 99 una 'c' en c�digo ASCII.
    
    cout << "\nMayuscula: " << char(letra-32) << endl;
 
    system("PAUSE");
    
    return 0;
}
