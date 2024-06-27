#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 9 N3

/** Variables y constantes globales **/
// Tablero de 3x3 (alcance global)
const int N=3;
char tablero[N][N]={'-','-','-','-','-','-','-','-','-'};

/** Prototipo de funciones **/

/* Inicializar tablero sin marcas -> caracter '-' */
void inicializar()
{
    int i , j;
    
    for( i=0;i<N;i++ )
    {      
          cout << endl;      
         
          for( j=0;j<N;j++ )
                            
                          cout << " " << tablero[i][j] << " ";
          
    }
}
/* Imprime el tablero y sus marcas */
void imprimir()
{
    int i , j;
    
    for( i=0;i<N;i++ )
    {      
          cout << endl;      
         
          for( j=0;j<N;j++ )
                            
                          cout << " " << tablero[i][j] << " ";
          
    }
}
/* Marca el caracter correspondiente (X u O) */
void marcar(char player)
{
    int fila , columna;
    
    cout << "\n\nDonde sea marcar?\nElija fila: ";
    cin >> fila;
    cout << "Elija columna: ";
    cin >> columna;
    
    while( tablero[fila][columna]!='-' )
    {      
           cout << "Posicion ya elegida.\nElija fila: ";
           cin >> fila;
           cout << "Elija columna: ";
           cin >> columna;
    }
    
    tablero[fila][columna]=player;
}
/* Determina si el juego terminó en empate (no hay más espacios por marcar) o si hay un ganador. */
bool fin(char player)
{
     int diagonal=0 , resultado=0;
     int i , j;
          
         for( i=0;i<N;i++ )                // Comprueba si en la diagonal principal o en alguna fila hay juego.
         {   
                         resultado=0;
             
                          for( j=0;j<N;j++ )
                         {
                                   if( i==j )
                          
                                            diagonal=diagonal+tablero[i][j];
                           
                                   resultado=resultado+tablero[i][j];
                          
                         }
          
                         if( resultado==264 || resultado==237 || diagonal==264 || diagonal==237 )  // La 'X' en código ASCII es 88 entonces 88*3=264. La 'O' es 79, 79*3=237.
                         {
                                         cout << "\n\nEl jugador " << (player=='O')*1+(player!='O')*2 << " es el ganador." << endl;
                                        
                                         return 1;
                         }
                         
         }
         
         diagonal=0;

         for( i=0;i<N;i++ )               // Comprueba si en la diagonal secundaria o en alguna columna hay juego.
         {
                         resultado=0;   
                         
                          for( j=0;j<N;j++ )
                         {
                                   if( i+j==2 )
                          
                                            diagonal=diagonal+tablero[i][j];
                           
                                   resultado=resultado+tablero[j][i];
                          
                         }
          
                         if( resultado==264 || resultado==237 || diagonal==264 || diagonal==237 )
                         {
                                         cout << "\n\nEl jugador " << (player=='O')*1+(player!='O')*2 << " es el ganador." << endl;
                                        
                                         return 1;
                         }
                         
         }
         
         for( i=0;i<N;i++ )               // Comprueba si no hay empate.
         {                         
                          for( j=0;j<N;j++ )
                         {                         
                                   if( tablero[i][j]=='-' )
                                   
                                       return 0;
                          
                         }
         }
         
         cout << "\n\nEs empate." << endl;
         
         return 1;
}      

int main()
{
    char jugador = 'X';
    
    cout<<"Juguemos al TA-TE-TI\n\n";
    cout<<"El jugador 1 sera la X y el jugador 2 la O."<<endl;
    
    inicializar();
    while( !fin(jugador) )
    {
           marcar( jugador );
           imprimir();
           
           switch( jugador )
           {
                   case 'O':
                        jugador = 'X';
                        break;
                        
                   case 'X':
                        jugador = 'O';
                        break;
           }
    }
    
    system("PAUSE");
    
    return 0;
    
}


    
