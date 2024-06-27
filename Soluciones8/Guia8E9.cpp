#include <iostream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 8 N9

const int N=3;

int main()
{
    int i , j , h , fila , columna , validar , diagonal , resultado , y[N][N]={0};
    char x[N][N]={0};

    cout << "Juguemos al TA-TE-TI\n\n";
    cout << "El jugador 1 sera el O y el jugador 2 la X." << endl;
    
    cout << endl << "    C0 C1 C2" << endl;
    
    cout << endl << "    -------";    
         
    for( i=0;i<N;i++ )     //Muestra tablero
    {      
          cout << setw(5) << endl << "|";      
         
          for( j=0;j<N;j++ )
                            
                          cout << x[i][j] << "|";
                          
          cout << "  F" << i << endl << "    -------";
    }
    
    for( h=0;h<N*N;h++ )
    {
                      
         cout << "\n\nDonde sea marcar?\nElija fila: ";
         cin >> fila;
         cout << "Elija columna: ";
         cin >> columna;
    
         while( x[fila][columna]!=0 )
         {      
                cout << "Posicion ya elegida.\nElija fila: ";
                cin >> fila;
                cout << "Elija columna: ";
                cin >> columna;
         }
         
             
         if( h%2==0 )
    
                          x[fila][columna]='O';
    
         else
    
                          x[fila][columna]='X';
                          
         cout << endl << "    -------";  

         for( i=0;i<N;i++ )
         {      
                          cout << setw(5) << endl<<"|";      
         
                          for( j=0;j<N;j++ )
                            
                                    cout << x[i][j]<<"|";
                          
                          cout << endl << "    -------";
         }
         
         diagonal=0;
          
         for( i=0;i<N;i++ )               
         {   
                         resultado=0;
             
                          for( j=0;j<N;j++ )
                         {
                                   if( i==j )
                          
                                            diagonal=diagonal+x[i][j];
                           
                                   resultado=resultado+x[i][j];
                          
                         }
          
                         if( resultado==264 || resultado==237 || diagonal==264 || diagonal==237 )
                         {
                                         cout << "\n\nEl jugador " << (h%2==0)+(h%2==1)*2 << " es el ganador." << endl;

                                         system("PAUSE");
                                         
                                         return 0;
                         }
                         
         }
         
         diagonal=0;

         for( i=0;i<N;i++ )               
         {
                         resultado=0;   
                         
                          for( j=0;j<N;j++ )
                         {
                                   if( i+j==2 )
                          
                                            diagonal=diagonal+x[i][j];
                           
                                   resultado=resultado+x[j][i];
                          
                         }
          
                         if( resultado==264 || resultado==237 || diagonal==264 || diagonal==237 )
                         {
                                         cout << "\n\nEl jugador " << (h%2==0)+(h%2==1)*2 << " es el ganador." << endl;
                                         
                                         system("PAUSE");
                                         
                                         return 0;
                         }
         }      
    
    
    }
    
    cout << "\n\nHa sido un empate." << endl;
    
    system("PAUSE");
    
    return 0;
    
}
