#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS 
//
//
//    Ejercicio Adicional Guia 6 N4

int main()
{  
    int sumletras = 0 , num;
    char letra = 0 , letramenor;
    
    cout << "Ingrese una palabra indicando con el simbolo (.) el final de la misma: " << endl;
    cin >> letra;
    
    num=letra;
    letramenor=letra;
    
    while( letra!='.' )
    {
           
           sumletras++;
           
           while ( num>letra )
           {
                 
                 num = letra;
                 
                 letramenor = letra;
                 
           }
           
           cin >> letra;
    
    }
    
    cout << "La letra cuyo valor entero asociado es el menor es: " << letramenor << endl;
    
    system("PAUSE");
    
    return 0;
    
}
