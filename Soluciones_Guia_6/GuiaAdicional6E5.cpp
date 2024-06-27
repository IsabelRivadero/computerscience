#include <iostream>
#include <ctime>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS 
//
//
//    Ejercicio Adicional Guia 6 N5

int main()
{  
    char letra;
    
    cout << "El programa simula tirar una moneda. Aprete la tecla T para tirarla." << endl;
    cin >> letra;
    
    while( letra=='T' || letra=='t' )
    {
           if( clock()%2==0 )   //La función clock devuelve un número entero dando un 50% de probabilidades de que sea par o impar.
           
               cout << "CARA" << endl;
               
           else
           
               cout << "SECA" << endl;
               
           cout << "Si desea tirar de nuevo la moneda, presione la tecla T." << endl;
           cin >> letra;
    
    }
    
    system("PAUSE");
    
    return 0;
    
}
