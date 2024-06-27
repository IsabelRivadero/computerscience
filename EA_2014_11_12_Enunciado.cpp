/*
 **************************************************************
 MATERIA   : INFORMATICA
 EXAMEN    : Especificación de Algoritmos - 12 Noviembre 2014
 NOMBRES   : 
 MATRICULA : 
 CARRERA   : 
 COMISION  : 
 **************************************************************
 TABLA DE CALIFICACION:
 --------------------------------------------------------------
  /15  cargar_vectores
  /10  imprimir_vectores
  /10  calcular_promedio
  /10  calcular_2do_minimo
  /20  elementos_en_comun
  /15  calcular_matriz
  /10  imprimir_matriz
  /10  Comentarios, semántica y presentación
 --------------------------------------------------------------
  /100 Total 
 **************************************************************

 Realice un programa en C++ con las siguientes características:

 El programa debe pedirle al usuario que ingrese dos vectores de
 números enteros como se muestra en los ejemplos de la ejecución del
 programa que se encuentra al final de este enunciado. Para cada uno
 de los vectores ingresados, el programa debe primero pedir que se
 ingrese la cantidad de elementos del vector y luego pedir que se
 ingresen los números del vector separados por uno o mas espacios. La
 máxima longitud que puede tener el vector es de 10 elementos. El
 programa debe verificar que el usuario no ingrese una longitud
 inválida.

 Los vectores se deben cargar dentro de la función cuyo prototipo es

 void cargar_vectores(int vector1[], int vector2[], int &longitud1, int &longitud2);

 Luego, el programa debe imprimir por pantalla los vectores
 ingresados. Dicha tarea debe realizarse dentro de la función cuyo
 prototipo es

 void imprimir_vectores(int vector1[], int vector2[], int longitud1, int longitud2);

 A continuación, el programa debe calcular el promedio y el 2do minimo
 del primer vector llamando dentro del main a las funciones cuyos
 prototipos son:

 double calcular_promedio(double vector[], int longitud);

 int calcular_2do_minimo(double vector[], int longitud);

 Notar que dichas funciones no imprimen por pantalla el valor del
 rango y el promedio sino que lo retornan como una variable tipo
 'double' e 'int' respectivamente. Las impresiones por pantalla deben
 realizarse dentro de la función 'main'.

 A continuación, el programa debe determinar los números que se
 encuentran en ambos vectores. Dichos números serán almacenados en un
 nuevo vector llamado 'vector3'. Esta tarea debe realizarse dentro de
 la función cuyo prototipo es:

 void elementos_en_comun(int vector1[], int vector2[], int vector3[], int longitud1, int longitud2, int &longitud3);

 Notar que la función retorna la longitud del vector3 por medio del
 parámetro por referencia 'longitud3'. Luego de llamar a esta función,
 dentro del 'main' se debe imprimir por pantalla el resultado según se
 muestra en el ejemplo que esta al final de este enunciado.

 Finalmente el programa debe construir una matriz de números enteros
 tipo 'int' con longitud1 filas y longitud2 columnas tal que el
 elemento de la fila 'k' y columna 'n' vale '1' si el elemento 'k' del
 vector1 es mayor que el elemento 'n' del vector2, sino vale '-1'. 
 Esta matriz debe calcularse dentro de la función cuyo prototipo es:

 void calcular_matriz(int matriz[MAX][MAX], int vector1[], int longitud1, int vector2[], int longitud2);

 Posteriormente al cálculo de la matriz el programa debe imprimirla
 por pantalla dentro de la función cuyo prototipo es

 void imprimir_matriz(int matriz[MAX][MAX], int longitud1, int longitud2);


 -------------------------------------------------------------------
 Ejemplo 1 de la ejecución del programa:
 
 Ingrese la longitud del primer vector: 5
 Ingrese los numeros del primer vector: 4 5 2 8 9

 Ingrese la longitud del segundo vector: 4
 Ingrese los numeros del segundo vector: 3 8 0 5

 Los vectores ingresados son:
 Primer vector  = 4 5 2 8 9 
 Segundo vector = 3 8 0 5 

 El promedio del primer vector es: 5

 El segundo minimo del primer verctor es: 4

 Los numeros que estan en ambos vectores son: 5 8 

 La matriz es: 
       1      -1       1      -1
       1      -1       1      -1
      -1      -1       1      -1
       1      -1       1       1
       1       1       1       1

 -------------------------------------------------------------------
 Ejemplo 2 de la ejecución del programa:
  
 Ingrese la longitud del primer vector: -2

 ERROR: la longitud tiene que ser > 0 
 Ingrese la longitud del primer vector: 4
 Ingrese los numeros del primer vector: 4 3 2 1

 Ingrese la longitud del segundo vector: 13

 ERROR: la longitud tiene que ser < 10
 Ingrese la longitud del segundo vector: 5
 Ingrese los numeros del segundo vector: 5 2 0 4 3

 Los vectores ingresados son:
 Primer vector  = 4 3 2 1 
 Segundo vector = 5 2 0 4 3 

 El promedio del primer vector es: 2

 El segundo minimo del primer verctor es: 2

 Los numeros que estan en ambos vectores son: 4 3 2 

 La matriz es: 
      -1       1       1      -1       1
      -1       1       1      -1      -1
      -1      -1       1      -1      -1
      -1      -1       1      -1      -1

 -------------------------------------------------------------------   
*/

// Bibliotecas
#include<iostream>
#include<iomanip>
using namespace std;

// Constantes Globales
const int MAX = 10; 

// Escriba los prototipos de las funciones a continuacion:











// Programa Principal
int main() 
{
   int vector1[MAX], vector2[MAX], vector3[MAX];
   int longitud1, longitud2, longitud3, min2;
   int matriz[MAX][MAX], promedio;
   
   cargar_vectores(vector1, vector2, longitud1, longitud2);

   imprimir_vectores(vector1, vector2, longitud1, longitud2);

   promedio = calcular_promedio(vector1, longitud1);

   cout << "\n\n El promedio del primer vector es: " << promedio;

   min2 = calcular_2do_minimo(vector1, longitud1);

   cout << "\n\n El segundo minimo del primer verctor es: " << min2;

   elementos_en_comun(vector1, vector2, vector3, longitud1, longitud2, longitud3);

   cout << "\n\n Los numeros que estan en ambos vectores son: ";
   for(int k=0; k<longitud3; k++)
      cout << vector3[k] << " ";
   
   calcular_matriz(matriz, vector1, longitud1, vector2, longitud2);

   imprimir_matriz(matriz, longitud1, longitud2);

   cout << "\n\n";
   return 0;
}

// Escriba las funciones a continuacion:





