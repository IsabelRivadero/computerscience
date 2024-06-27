#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS 
//
//
//    Ejercicio Adicional Guia 6 N3

int main()
{  
    int sumletras = 0;
    char letra = 0;
    
    cout << "Ingrese una palabra indicando con el simbolo (.) el final de la misma: " << endl;
    cin >> letra;
    
    while( letra!='.' )
    {
           
           sumletras++;
    
           cin >> letra;
    
    }
    
    cout << "La cantidad de letras de la palabra es " << sumletras << endl;
    
    system("PAUSE");
    
    return 0;
    
}
