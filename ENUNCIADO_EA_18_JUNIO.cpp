/*Evaluaci�n de Especificaci�n de Algoritmo  EA JUNIO 18/6/2015


LEA ATENTAMENTE!! 
DEBE DAR NOMBRE AL PROGRAMA MEDIANTE EL SIGUIENTE ESQUEMA:
 INDICACIONES:    
     "apellido_nombre.cpp" y lo debe subir. (Puede subir peri�dicamente) 
     NO SUBIR ARCHIVOS ".exe" SUBIR SOLAMENTE " .cpp"
 
 ENUNCIADO:    
Haga en un solo programa en C++ para realizar lo siguiente: (LEER ATENTAMENTE)
El programa tiene cuatro (4) funciones ademas de la main(). DEBE USAR LAS FUNCIONES DEFINIDAS.
 
  A saber: void apostar();    int jugar();   int verifgana() ;   void masveces ()
          
En un Juego de ruleta muy simplificado, que  se juega "n" veces hay que
        Programar  lo siguiente:

1.	Ingresar, en main() , la cantidad de "veces" que se va a jugar, con un m�ximo de  100 veces (100 jugadas).

2.	Primera funci�n: " void apostar()": Un solo jugador hace   una sola  jugada que consta de dos partes:
   a.	 Primera parte: apuesta ingresando un n�mero entero entre 0 y 36. Si ingresa un n�mero fuera del rango de 0 a 36 la funci�n indicara que debe volver a ingresar el n�mero y no se tiene en cuenta la jugada.
   b.	 Segunda parte: Solo ingresa los valores "0","1" o "2" es decir: "0" si apuesta es al cero, 1 si apuesta es que el n�mero  sorteado sea  impar; o dos si la apuesta es que el n�mero sorteado que salga sea par.
   c.	Ambas partes (apuestas) son independientes y pertenecen una misma jugada, es decir puedo apostar ,por ejemplo, un n�mero el "34" que es par y apostar, por otra parte,  "1" a  que salga un n�mero tipo impar. (no est� relacionado el 34 con el impar).
   d.	Si alguno de los valores ingresados en inv�lido la funci�n vuelve a pedir valores los dos valores y no se tiene en cuenta la jugada. (validar ingreso de datos)
               Ejemplos de jugadas:
          nro.	tipo
          28 	 1    equivale a apostar el nro. 28  o que salga impar
           0                2   equivale a apostar que sale el nro. 0 o que salgo un nro. par
           3  	0    equivale a apostar que sale el nro. 3 o que sale cero.
           0  	0    equivale a apostar que sale el nro. 0 o que sale cero.
           38 	5   apuesta inv�lida (los dos valores son inv�lidos: jugada nula)
           15 	18   apuesta inv�lida (uno de los valores es inv�lido: jugada nula)
            
3.	Segunda Funci�n :"int jugar(�)": la segunda funci�n  genera un n�mero pseudo
         aleatorio entre 0 y 36 (como si fuera un sorteo o una ruleta).
         Debe mostrar  por pantalla:
                                  "sali� el n�mero : " xx
               donde xx es el n�mero pseudoaleatorio es generado por nuestro programa.



         
4.	Tercera Funci�n: "int verifgana(�)" esta  funci�n debe verificar en cada jugada:
   a.	verificar si gan� (primera apuesta) por ser igual el n�mero generado en el sorteo de la funci�n jugar(), al  ingresado en la funci�n apostar() apostado.
   b.	verificar si gan� por haber ingresado el usuario del programa en apostar() (segunda parte de una misma jugada), a ser par o impar o   cero,  habiendo acertado en la segunda parte o apuesta de la misma jugada, al  ser en n�mero sorteado del tipo elegido (0, par o impar) por el apostador.
                  		
Mostrar por pantalla:
                               ( en caso de no acertar)
             		Ejemplo:    
                   	"no gano nada:  Ud apost� : " 28  "  " sali� el nro. :"   19
                                    	 (En caso de ganar primera apuesta por coincidencia n�mero)
            		Ejemplo:
                  	" Ud Gano, primera  parte de la apuesta Ud apost�: "  19 " y  sali�: " 19
		(Si acierta  por haber elegido el  tipo de n�mero (par, impar o cero) que sali�)
               	Ejemplo:
	     	"Ud. Gano en la segunda parte la   apuesta  sali� impar "

Atenci�n: Los mensajes apropiados los coloca Usted recuerde que las apuestas de  una misma jugadas son 	independientes.
 
    c.	Cada vez que se verifica la jugada debe guardar la siguiente informaci�n:

 -el n�mero que sali� en un arreglo llamado "jugada [ ][ ]"  el n�mero que sali� sorteado en la primera columna,
 -ingresando un uno (1) si es igual al sorteado y un cero (0) si no lo es  en la segunda columna,
 - y en la tercera columna el n�mero de orden de la jugada.

Ejemplo de Arreglo:
	nro.	gan�?	#Jugada         observaci�n (no es parte del arreglo)
	17	0	1			perdi�
	36	0	2			perdi�
	2	1	3			gan�
	15	0	4			perdi�
       

 
5) Cuarta Funci�n: "void masveces(   )": Verificar en el arreglo "jugada[ ][ ]"
         cual fue el n�mero ganador que m�s sali� de las "n"  veces que se jug�.
         Si no hay un valor  que m�s se repita  indicar "no hay repeticiones".


TIEMPO: 2 HORAS. APROBACI�N  60 PTS.
ADVERTENCIA: DEBE SUBIR ARCHIVO PERI�DICAMENTE. INDIVIDUAL A LIBRO CERRADO. APAGAR CELULARES Y TODO OTRO SOFWTWARE DE LA COMPUTADORA NO PERTINENTE.



						                                 Puntaje Obtenido
PUNTAJE : Compila (pasa o no ) 0 pts. 				        Pasa?: 	
Acople funcionamiento (main())  integral correcto: 15 pts.	Acople:
Funci�n 1: 20 pts.    						                F 1:
Funci�n 2 : 15  pts.						                F 2:
Funci�n 3: 25 pts.						                    F 3:
Funci�n 4 25 pts.						                    F 4:
(El m�ximo puntaje por funci�n se alcanza si todo en la funci�n est� correcto)

USE ESTA PLANTILLA PARA PROGRAMAR!! OBLIGATORIO. NO MODIFIQUE PLANTILLA
ATENCI�N: LAS LINEAS DE PUNTOS "..." DEBEN SER RETIRADAS PARA QUE COMPILE.
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
                   
