/*RECUPERACI�N DE ESPECIFICACI�N DE ALGORITMOS (EA RECUP)
Comisi�n REDICTADO Jueves
Profesor Ing. Alejandro Ambrosini
C++       Primer Semestre    Fecha 24 Junio 2015 11:15 hs.            Tiempo 2 Hs.

Desarrollar el c�digo fuente (un �nico programa) en lenguaje C++ que implemente lo siguiente:
Es necesario hacer el  tratamiento especificado en los puntos 1 a 4 (ver mas abajo) a "n" matrices generadas aleatoriamente,  es decir correr "n" veces cada una de las funciones, siendo "n" un valor entero ingresado por el usuario en la funci�n "main( )" del programa, siendo las funciones :
.
1.	Funci�n "void inicio( ...)" : Genera, por programa, un arreglo "Minicio[ ][ ]" de 10 x 10 de n�meros aleatorios enteros entre 0 y 256 y lo muestra en forma matricial por pantalla. (ver ejemplo 1)
2.	Funci�n " void imparmayor( ...)": detecta en el arreglo"MInicio[ ][ ]" el mayor valor impar y su posici�n: fila y columna" y lo guarda en un arreglo  "mayorimpar[ n][3 ]" (ver ejemplo 2) .

3.	Funci�n "void trasponer(...)" : Hace la traspuesta de una matriz (por ejemplo "MInicio[ ][ ]") (invierte  los elementos i con los elementos J) y los guarda en el arreglo "traspuesta [ ][ ]" (Aclaraci�n ling��stica:  matriz traspuesta o matriz transpuesta es lo mismo).

4.	Funci�n " void cargarreglo(...)" :
  Guardar en un ARREGLO de nombre "cruzdiagonal[][3]" en la primera columna todos los elementos de la diagonal principal
  , en la segunda columna los elementos ubicados en la columna del medio y en la tercera columna  con la fila del medio de la matriz. 
  Si fuera un arreglo con elementos pares tomar el menor cercano al medio.
  ejemplo tomar la fila 2 y la columna 2 en una arreglo de 4x4 (ya que no hay elemento del medio)   
           

Ejemplo 1 :
 en la funci�n void inicio(...)  una   matriz  aleatoria "Minicio" (gr�fico 1)

230	187	245	194	196	188	98	88	53	185
145	4	164	85	197	158	199	112	5	230
163	97	82	131	129	200	212	56	11	71
62	59	232	210	10	3	200	212	56	111
219	236	121	26	127	245	65	73	90	150
23	48	18	164	225	70	36	116	204	37
11	131	219	39	216	128	164	289	1	167
71	158	113	175	117	28	18	163	223	156
241	74	62	34	102	75	228	235	33	34
30	227	70	179	237	58	189	21	178	24







 En la Funci�n " void imparmayor( ...)"

Ejemplo 2:      para "n"=5 matrices.                              (la cabecera no va )

Nro. maximo impar	Posfil (fila)	Poscol (columna)
113	2	2
21	4	5
13	5	6
233	7	1
255	10	8



Observaciones:
o	Se deben usar funciones y sus cabeceras tal como se las brinda en el archivo segundo_examen.cpp (al cual debe cambiar el nombre)  para ello copiar la cabecera y nombre de las  funciones.

o	DEBE RESPETAR LA CABECERA QUE SE LE DA Y COMPLETAR LOS DATOS.

Indicaciones y puntuaci�n:

o	Debe subir el archivo "SuAPELLIDO_SuNOMBRE.cpp" en el aula virtual en el lugar correspondiente  en  el lugar que dice Subir Especificacion de Algoritmos -Segundo Examen (C++)
o	Aprobaci�n 60 pts. = 4 (cuatro).
o	Puntuaci�n evaluaci�n:
1.	Sin archivo ".cpp" cero ptos!
2.	Si no compila no pasa! cero puntos.
3.	 "void inicio(...)" 		=15 pts. ;
4.	 "void imparmayor(...)"	 = 25 pts.;
5.	"void trasponer(...)" 		=  20 pts.
6.	 "void cargarreglo(...)" = 25 pts. 
7.	Funcionamiento integral: todas las funciones acopladas en "main( )" 10 pts.
8.	Formateo claro y ordenado en pantalla (<iomanip>) 5 pts.
9.	Total 100 pts.
o	Conviene hacer subidas parciales (la �ltima remplaza la anterior). Es responsabilidad suya si pierde la informaci�n. Recuerde que se puede tildar el programa.....!
o	Es Individual, se ruega apagar los celulares!! S�lo se permite tener abierto el editor y el LEV  sin mensajer�a abierta.
________________________________________________________________________________
*/

/*
Nombre y Apellido:
D.N.I.:    
FECHA: 24/06/2015
Descripcion: Recuperaci�n de Especificaci�n de Algoritmos
  */

// ARCHIVOS DE CABECERA O LIBRER�AS
#include<iostream>
// libreria de formatos de salida
#include<iomanip>
// 2 librerias de archivos y aleatorios
#include<cstdlib>
#include<fstream>
// libreria para manejar strings
#include<string>
// libreria para manejar funciones matem�ticas
#include<cmath>
   using namespace std;
//
// variables y constantes globales   (extern y static)

// prototipos de funciones   tipo nombrefun()
 int main()
 { srand(time(NULL));
 // inicializacion de variables y constantes , tipos
 
 // inicializaci�n de arreglos [][]
// llamadas de las funciones
 system("pause");
 return 0;
 }
 // ...=a+ rand()%(b+1-a); (a menor y b mayor)
// cuerpos de las distintas funciones
// tipo nombrefuncion( tipo nombre&, tipo nombre, tipo nombre [variable][variable]

