#include <iostream>
#include <cstdlib>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 9 N4

/** Variables y constantes globales **/
const int M= 10;  // Cantidad de naves
const int N= 5;
int tableroNaves[N][N]={0};

/** Funciones **/
/* Inicializa el trablero y posiciona aleatoriamente las M naves */
void inicializar()
{
     int i, j, fila , columna;
     
     for( i=0;i<M;i++)
     {
          fila=rand()%N;
          columna=rand()%N;
     
          tableroNaves[fila][columna]+=1;
     }

}

int disparar()
{
    int fila ,i,j, columna , hundidos;
    
    cout << "Elija donde disparar.\nFila: ";
    cin >> fila;
    cout << "Columna: ";
    cin >> columna;
    
    hundidos=tableroNaves[fila][columna];
    tableroNaves[fila][columna]=0;

    return hundidos;
}

bool fin()
{
     int i , j;
     
     for( i=0;i<N;i++)
          
          for( j=0;j<N;j++ )
          
               if( tableroNaves[i][j]!=0 )
                   
                   return 0;
                   
     return 1;
}

int main()
{
    inicializar();
    while( !fin() )
    {
           cout << endl << disparar() << " barcos hundidos\n" << endl;
    }
    
    cout << "Todas las naves ha sido hundidas!!" << endl;
    
    system("PAUSE");
}
                   
