/************************************************************
 MATERIA : INFORMATICA
 EXAMEN : Especificaci�n de Algoritmos - 16 de julio 2012
 NOMBRE : 
 MATRICULA : 
 CARRERA : 
 COMISION : 3.1
 ************************************************************

Realice un programa en C++ que realice lo siguiente:

1) Leer desde el teclado una matriz de n�meros reales. Dicha matriz
contendr� en cada fila un vector de dimensi�n 3 (esto es, la matriz
tendr� siempre 3 columnas). El programa debe pedirle al usuario que
ingrese el n�mero de filas (siendo su valor m�ximo igual a 20). Luego
debe validar el n�mero de filas ingresado y en caso de que sea
incorrecto debe pedirlo de nuevo. Posteriormente debe pedirle al
usuario que ingrese los valores de la matriz fila por fila. Este
procedimiento debe implementarse a trav�s de la funci�n con el
siguiente prototipo (la funci�n retorna la cantidad de filas indicadas
por el usuario):

int leerMatriz ( double D[N][M] );

2) Asumiendo que los vectores indican las posiciones de un misil
medidas cada 1 segundo respeto a la plataforma de lanzamiento en
unidades de metros. El programa debe calcular la distancia m�xima del
misil (esto es, el vector con mayor longitud) e imprimirla por
pantalla. Este procedimiento debe implementarse a trav�s de la funci�n
con el siguiente prototipo:

double max_distancia ( double D[N][M], int numero_de_filas );

La funci�n retorna la distancia m�xima, cuya impresi�n por pantalla
debe hacerse dentro de la funci�n main. El c�lculo de la longitud de
un vector debe implementarse mediante la funci�n con el siguiente
prototipo:

double longitud ( double X, double Y, double Z );

3) El programa debe calcular la distancia total en kilometros
recorrida por el misil como la suma de las distancias de un punto al
siguiente. Se debe utilizar la funci�n "longitud" definida en el punto
2 para realizar el c�lculo de las distancias. Este procedimiento debe
implementarse mediante la funci�n con el siguiente prototipo:

double distancia_recorrida ( double D[N][M], int numero_de_filas );

La funci�n retorna la distancia recorrida en kilometros, cuya
impresi�n por pantalla debe hacerse dentro de la funci�n
main. 

4) El programa debe determinar la mayor y la menor velocidad del
misil. La velocidad se calcula como la distancia entre dos punto
(vectores) consecutivos sobre el tiempo empleado (que es siempre igual
a 1 segundo y por lo tanto no es necesario hacer dicha
divisi�n). Nuevamente, se debe utilizar la funci�n "longitud". Se debe
imprimir por pantalla el valor de dichas velocidades en unidades de
kil�metros por hora. Este procedimiento debe implementarse a trav�s de
la funci�n con el siguiente prototipo:

void velocidades ( double D[N][M], int numero_de_filas );

=========================================================
 EJEMPLO DE EJECUCION O CORRIDA DEL PROGRAMA
=========================================================
Ingrese el n�mero de filas:   23

Error: el n�mero de filas debe ser menor o igual a 20 

Ingrese el n�mero de filas:   5

Ingrese el vector de la fila 0: 0.0  0.0   0.0
Ingrese el vector de la fila 1: 20.2 30.3  40.4
Ingrese el vector de la fila 2: 30.1 70.7  100.8
Ingrese el vector de la fila 3: 70.1 80.3  150.2
Ingrese el vector de la fila 4: 40.5 120.8 320.9

La m�xima distancia es: 345.2676 metros
La distancia recorrida es: 0.3699302 kilometros
La velocidad m�xima es: 640.5057 Km/h
La velocidad m�nima es: 195.8046 Km/h

=========================================================
Tabla de Correcci�n
______________________________


Funci�n leerMatriz           | 15
Funci�n max_distancia        | 10
Funci�n longitud             | 10
Funci�n distancia_recorrida  | 20
Funci�n velocidades          | 25
Programa Principal           | 10
Compilaci�n		     | 10
=========================================================

Estimado alumno no modifique nada del c�digo que le proveemos, use los
procedimientos o funciones que estan definidos y no agregue m�s a la
solucion.

************************************************************/



