/*Evaluación de Especificación de Algoritmo  EA JUNIO 18/6/2015


LEA ATENTAMENTE!! 
DEBE DAR NOMBRE AL PROGRAMA MEDIANTE EL SIGUIENTE ESQUEMA:
 INDICACIONES:    
     "apellido_nombre.cpp" y lo debe subir. (Puede subir periódicamente) 
     NO SUBIR ARCHIVOS ".exe" SUBIR SOLAMENTE " .cpp"
 
 ENUNCIADO:    
Haga en un solo programa en C++ para realizar lo siguiente: (LEER ATENTAMENTE)
El programa tiene cuatro (4) funciones ademas de la main(). DEBE USAR LAS FUNCIONES DEFINIDAS.
 
  A saber: void apostar();    int jugar();   int verifgana() ;   void masveces ()
          
En un Juego de ruleta muy simplificado, que  se juega "n" veces hay que
        Programar  lo siguiente:

1.	Ingresar, en main() , la cantidad de "veces" que se va a jugar, con un máximo de  100 veces (100 jugadas).

2.	Primera función: " void apostar()": Un solo jugador hace   una sola  jugada que consta de dos partes:
   a.	 Primera parte: apuesta ingresando un número entero entre 0 y 36. Si ingresa un número fuera del rango de 0 a 36 la función indicara que debe volver a ingresar el número y no se tiene en cuenta la jugada.
   b.	 Segunda parte: Solo ingresa los valores "0","1" o "2" es decir: "0" si apuesta es al cero, 1 si apuesta es que el número  sorteado sea  impar; o dos si la apuesta es que el número sorteado que salga sea par.
   c.	Ambas partes (apuestas) son independientes y pertenecen una misma jugada, es decir puedo apostar ,por ejemplo, un número el "34" que es par y apostar, por otra parte,  "1" a  que salga un número tipo impar. (no está relacionado el 34 con el impar).
   d.	Si alguno de los valores ingresados en inválido la función vuelve a pedir valores los dos valores y no se tiene en cuenta la jugada. (validar ingreso de datos)
               Ejemplos de jugadas:
          nro.	tipo
          28 	 1    equivale a apostar el nro. 28  o que salga impar
           0                2   equivale a apostar que sale el nro. 0 o que salgo un nro. par
           3  	0    equivale a apostar que sale el nro. 3 o que sale cero.
           0  	0    equivale a apostar que sale el nro. 0 o que sale cero.
           38 	5   apuesta inválida (los dos valores son inválidos: jugada nula)
           15 	18   apuesta inválida (uno de los valores es inválido: jugada nula)
            
3.	Segunda Función :"int jugar(…)": la segunda función  genera un número pseudo
         aleatorio entre 0 y 36 (como si fuera un sorteo o una ruleta).
         Debe mostrar  por pantalla:
                                  "salió el número : " xx
               donde xx es el número pseudoaleatorio es generado por nuestro programa.



         
4.	Tercera Función: "int verifgana(…)" esta  función debe verificar en cada jugada:
   a.	verificar si ganó (primera apuesta) por ser igual el número generado en el sorteo de la función jugar(), al  ingresado en la función apostar() apostado.
   b.	verificar si ganó por haber ingresado el usuario del programa en apostar() (segunda parte de una misma jugada), a ser par o impar o   cero,  habiendo acertado en la segunda parte o apuesta de la misma jugada, al  ser en número sorteado del tipo elegido (0, par o impar) por el apostador.
                  		
Mostrar por pantalla:
                               ( en caso de no acertar)
             		Ejemplo:    
                   	"no gano nada:  Ud apostó : " 28  "  " salió el nro. :"   19
                                    	 (En caso de ganar primera apuesta por coincidencia número)
            		Ejemplo:
                  	" Ud Gano, primera  parte de la apuesta Ud apostó: "  19 " y  salió: " 19
		(Si acierta  por haber elegido el  tipo de número (par, impar o cero) que salió)
               	Ejemplo:
	     	"Ud. Gano en la segunda parte la   apuesta  salió impar "

Atención: Los mensajes apropiados los coloca Usted recuerde que las apuestas de  una misma jugadas son 	independientes.
 
    c.	Cada vez que se verifica la jugada debe guardar la siguiente información:

 -el número que salió en un arreglo llamado "jugada [ ][ ]"  el número que salió sorteado en la primera columna,
 -ingresando un uno (1) si es igual al sorteado y un cero (0) si no lo es  en la segunda columna,
 - y en la tercera columna el número de orden de la jugada.

Ejemplo de Arreglo:
	nro.	ganó?	#Jugada         observación (no es parte del arreglo)
	17	0	1			perdió
	36	0	2			perdió
	2	1	3			ganó
	15	0	4			perdió
       

 
5) Cuarta Función: "void masveces(   )": Verificar en el arreglo "jugada[ ][ ]"
         cual fue el número ganador que más salió de las "n"  veces que se jugó.
         Si no hay un valor  que más se repita  indicar "no hay repeticiones".


TIEMPO: 2 HORAS. APROBACIÓN  60 PTS.
ADVERTENCIA: DEBE SUBIR ARCHIVO PERIÓDICAMENTE. INDIVIDUAL A LIBRO CERRADO. APAGAR CELULARES Y TODO OTRO SOFWTWARE DE LA COMPUTADORA NO PERTINENTE.



						                                 Puntaje Obtenido
PUNTAJE : Compila (pasa o no ) 0 pts. 				        Pasa?: 	
Acople funcionamiento (main())  integral correcto: 15 pts.	Acople:
Función 1: 20 pts.    						                F 1:
Función 2 : 15  pts.						                F 2:
Función 3: 25 pts.						                    F 3:
Función 4 25 pts.						                    F 4:
(El máximo puntaje por función se alcanza si todo en la función está correcto)

USE ESTA PLANTILLA PARA PROGRAMAR!! OBLIGATORIO. NO MODIFIQUE PLANTILLA
ATENCIÓN: LAS LINEAS DE PUNTOS "..." DEBEN SER RETIRADAS PARA QUE COMPILE.
en el EDITOR C++:
*/
/************************************************************
 MATERIA : INFORMATICA
 EXAMEN : Especificacion de Algoritmos - 10 de junio 2015
 NOMBRE : 
 DNI : 
 CARRERA : 
 COMISION : REDICTADO
 ************************************************************/

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;
// definir constantes globales

const int..;
const int... ;
// prototipado de funciones

void apostar(int[...]);
int jugar();
void verifgana(int,int[...], int [...],int);

void masveces( int, int [...]  );

int main()
{
    // inicializo variables y arreglos
   ......
// semilla variables pseudo aleatorias     
    srand(time(NULL));
    cout <<"ingrese la cantidad de veces que va a jugar (maximo 100)"<<endl;
   
    ....
    for (...)
    {
        apostar(...);
        ...=jugar();
        verifgana(....);
       
    }
         
        masveces(...);
        cout <<"    finalizo el programa   ";
        
    system("pause");
            return 0;
}

void apostar(int ...[...])
{
     ...
     ...
     ...
    return;
  }
    
int jugar()
{
            int a=..., b=...,... ;

     sorteo=a+ rand()%(b+1-a);
     .......
     return sorteo;
}
     
void verifgana(....)
{
     .....
     ....
     .....
     
     return;
}


     
void masveces(.... )
{
.....
      for(......)
       {
         ........
         for(......)
            {
                        
                         
        .........

cout<<"el numero ganador que mas se repitio es: "<< ....<<endl;
cout <<" se repitio "<<...<<" veces"<<endl;
return;
}             
                   
