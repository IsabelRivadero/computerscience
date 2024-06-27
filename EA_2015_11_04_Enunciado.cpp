/*
 **************************************************************
 MATERIA   : INFORMATICA
 EXAMEN    : Especificaci�n de Algoritmos - Noviembre 2015
 NOMBRES   : 
 MATRICULA : 
 CARRERA   : 
 COMISION  : 
 **************************************************************
 TABLA DE CALIFICACION:
 --------------------------------------------------------------
  /15  cargar_vector
  /5   imprimir_vector
  /15  1er_y_2do_minimo
  /20  buscar_xmax_xmin
  /20  ordenar_vector
  /15  guardar_vector
  /10  Comentarios, sem�ntica y presentaci�n
 --------------------------------------------------------------
  /100 Total 
 **************************************************************

 Realice un programa en C++ con las siguientes caracter�sticas:

 El programa debe pedirle al usuario que ingrese un vector de n�meros
 reales seg�n se indica en el ejemplo de ejecuci�n del programa que se
 encuentra al final de este enunciado. El vector no deber� tener m�s
 de 20 n�meros positivos y la finalizaci�n del mismo se realizar�
 mediante el ingreso de un n�mero negativo al final.

 Dicho vector se debe cargar dentro de la funci�n cuyo nombre es 
 "cargar_vector"

 Luego, el programa debe imprimir por pantalla el vector ingresado
 usando notaci�n cient�fica con dos d�gitos decimales de
 precisi�n. Dicha tarea debe realizarse dentro de la funci�n cuyo
 nombre es "imprimir_vector"

 A continuaci�n, el programa debe encontrar los dos valores mas chicos
 del vector. Este c�lculo se realizar� en la funci�n cuyo nombre es 
 "encontrar_1er_y_2do_minimo"

 Posteriormente, el programa le pedir� al usuario que ingrese un nuevo
 n�mero X y a continuaci�n el programa deber� encontrar: (i) cual es
 el mayor n�mero menor a X dentro del vector y (ii) cual es el menor
 n�mero mayor a X dentro del vector. Si tal n�mero no existiera se
 deber� imprimir el n�mero -1. Esta �ltima b�squeda se realizar� en la
 funci�n cuyo nombre es "buscar_xmax_xmin"

 A continuaci�n, el programa deber� ordenar el vector de menor a mayor
 dentro de la funci�n cuyo nombre es "ordenar_vector"

 Finalmente, el programa deber� guardar el vector en un archivo 
 llamado "salida.txt". Esto �ltimo se realizar� en la funci�n
 cuyo nombre es "guardar_vector"

 -------------------------------------------------------------------
 Ejemplo de la ejecuci�n del programa:

 Ingrese los elementos del vector: 9.1 8.3 7.6 4.2 2.2 -1

 El vector es:   9.10e+00  8.30e+00  7.60e+00  4.20e+00  2.20e+00
 
 El 1er minimo es: 2.20
 El 2do minimo es: 4.20

 Ingrese en valor de X: 4.3     

 El mayor numero menor a X es: 4.20
 El menor numero mayor a X es: 7.60
 
 El vector ordenado se imprime a continuacion: 
 El vector es:   2.20e+00  4.20e+00  7.60e+00  8.30e+00  9.10e+00

 -------------------------------------------------------------------   
*/

// Bibliotecas
#include<iostream>
#include<iomanip>
using namespace std;

// Constantes Globales
const int MAX = 21; 

// Escriba los prototipos de las funciones a continuacion:











// Programa Principal: NO DEBE SER MODIFICADO
int main() 
{
  int    lon;
  int    matriz[10][10];
  double vector[MAX];
  double rango, xmax, xmin, x, min1, min2;
  
  lon = cargar_vector(vector);

  imprimir_vector(vector, lon);

  encontrar_1er_y_2do_minimo(vector, lon, min1, min2);

  cout << "\n El 1er minimo es: " << min1;
  cout << "\n El 2do minimo es: " << min2;

  cout << "\n\n Ingrese en valor de X: ";
  cin >> x;
  
  buscar_xmax_xmin(vector, lon, x, xmax, xmin);

  cout << "\n El mayor numero menor a X es: " << xmin;
  cout << "\n El menor numero mayor a X es: " << xmax;

  ordenar_vector(vector, lon);

  cout << "\n El vector ordenado se imprime a continuacion: ";

  imprimir_vector(vector, lon);
  
  guardar_vector(vector, lon);

  cout << "\n\n";
  return 0;
}

// Escriba las funciones a continuaci�n:





