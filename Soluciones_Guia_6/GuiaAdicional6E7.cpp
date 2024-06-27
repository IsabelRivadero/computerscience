#include <iostream>
#include <ctime>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS 
//
//
//    Ejercicio Adicional Guia 6 N7

int main()
{  
    int num, comp;
    
    cout << "El programa simula el juego Piedra,Papel o Tijera. Elija su opcion: " << endl;
    cout << "Piedra=0" << endl << "Papel=1" << endl << "Tijera=2" << endl;
    cin >> num;
    
    while( num==0 || num==1 || num==2 )
    {
            
           comp=clock()%3;
           
           cout << "He elegido: ";
            
           switch( comp )
           {
                   
           case 0:
                
                cout << "Piedra" << endl;
                
                break;
                
           case 1:
                
                cout << "Papel" << endl;
                
                break;
                                
           case 2:
                
                cout << "Tijera" << endl;
                
                break;
                                                  
           }
           
           if( num==comp )            //Iguales opciones
           
               cout << "Ha sido un empate." << endl;
               
           else if( num+1<comp )      //Solo se cumple en el caso de que hayas elegido Piedra y la computadora Tijera
           
                    cout << "Has ganado." << endl;
               
           else if( comp+1<num )      //Solo se cumple en el caso de que hayas elegido Tijera y la computadora Piedra
                
                    cout << "Has perdido." << endl;
                    
           else if( num<comp )        //Solo se cumple en el caso de que hayas elegido Papel y la computadora Tijera
           
                    cout << "Has perdido." << endl;
                    
           else                       //Solo se cumple en el caso de que hayas elegido Tijera y la computadora Papel
           
                    cout << "Has ganado." << endl;
           
           cout << "Si desea jugar de nuevo, elija su opcion: " << endl;
           cin >> num;
    
    }
    
    system("PAUSE");
    
    return 0;
    
}
