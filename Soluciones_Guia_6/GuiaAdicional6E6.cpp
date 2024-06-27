#include <iostream>
#include <ctime>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS 
//
//
//    Ejercicio Adicional Guia 6 N6

int main()
{  
    char letra;
    
    cout << "El programa simula tirar un dado. Aprete la tecla T para tirarlo." << endl;
    cin >> letra;
    
    while( letra=='T' || letra=='t' )
    {
           
           switch( clock()%6 )  //Cualquier número entero dividido por 6 puede dar como resto 0, 1, 2, 3, 4 ó 5 exclusivamente con 1/6 de probabilidades cada uno.
           {
                   
           case 0:
                
                cout << 1 << endl;
                
                break;
                
           case 1:
                
                cout << 2 << endl;
                
                break;
                                
           case 2:
                
                cout << 3 << endl;
                
                break;
                                        
           case 3:
                
                cout << 4 << endl;
                
                break;
                                        
           case 4:
                
                cout << 5 << endl;
                
                break;
                                        
           case 5:
                
                cout << 6 << endl;
                
                break;
                                        
           }
           
           cout << "Si desea tirar de nuevo el dado, presione la tecla T." << endl;
           cin >> letra;
    
    }
    
    system("PAUSE");
    
    return 0;
    
}
