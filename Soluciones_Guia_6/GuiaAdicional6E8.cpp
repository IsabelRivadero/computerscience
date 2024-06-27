#include <iostream>
#include <ctime>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS 
//
//
//    Ejercicio Adicional Guia 6 N8

int main()
{  
    int segundos = 0;
    char letra;
    
    cout << "El programa simula un cronometro. Presione la tecla I para iniciarlo." << endl;

    do
    {
           cin >> letra;        
    }
    while( letra!='I' && letra!='i');
    
    do
    {
           
           segundos=clock()-segundos;
           
           cout << "Presione cualquier tecla para parar el cronometro." << endl;
           cin >> letra;
           
           segundos=clock()-segundos;
    
           cout << "Han pasado " << segundos/CLOCKS_PER_SEC << " segundos." << endl;
           
           cout << "Si desea reanudar la cuenta presione I. Si desea comenzar de nuevo presione cualquier otra tecla. Presione S si desea salir del programa." << endl;
           cin >> letra;
           
           if( letra!='I' && letra!='i' )
           
                     segundos=0; 
                     
           if( letra=='S' || letra=='s' )
           
                     break; 
    }
    while(1);

    
    system("PAUSE");
    
    return 0;
    
}
