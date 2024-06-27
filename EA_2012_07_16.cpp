/************************************************************
 MATERIA : INFORMATICA
 EXAMEN : Especificación de Algoritmos - 16 de julio 2012
 NOMBRE : 
 MATRICULA : 
 CARRERA : 
 COMISION : 3.1
 ************************************************************

Realice un programa en C++ que realice lo siguiente:

1) Leer desde el teclado una matriz de números reales. Dicha matriz
contendrá en cada fila un vector de dimensión 3 (esto es, la matriz
tendrá siempre 3 columnas). El programa debe pedirle al usuario que
ingrese el número de filas (siendo su valor máximo igual a 20). Luego
debe validar el número de filas ingresado y en caso de que sea
incorrecto debe pedirlo de nuevo. Posteriormente debe pedirle al
usuario que ingrese los valores de la matriz fila por fila. Este
procedimiento debe implementarse a través de la función con el
siguiente prototipo (la función retorna la cantidad de filas indicadas
por el usuario):

int leerMatriz ( double D[N][M] );

2) Asumiendo que los vectores indican las posiciones de un misil
medidas cada 1 segundo respeto a la plataforma de lanzamiento en
unidades de metros. El programa debe calcular la distancia máxima del
misil (esto es, el vector con mayor longitud) e imprimirla por
pantalla. Este procedimiento debe implementarse a través de la función
con el siguiente prototipo:

double max_distancia ( double D[N][M], int numero_de_filas );

La función retorna la distancia máxima, cuya impresión por pantalla
debe hacerse dentro de la función main. El cálculo de la longitud de
un vector debe implementarse mediante la función con el siguiente
prototipo:

double longitud ( double X, double Y, double Z );

3) El programa debe calcular la distancia total en kilometros
recorrida por el misil como la suma de las distancias de un punto al
siguiente. Se debe utilizar la función "longitud" definida en el punto
2 para realizar el cálculo de las distancias. Este procedimiento debe
implementarse mediante la función con el siguiente prototipo:

double distancia_recorrida ( double D[N][M], int numero_de_filas );

La función retorna la distancia recorrida en kilometros, cuya
impresión por pantalla debe hacerse dentro de la función
main. 

4) El programa debe determinar la mayor y la menor velocidad del
misil. La velocidad se calcula como la distancia entre dos punto
(vectores) consecutivos sobre el tiempo empleado (que es siempre igual
a 1 segundo y por lo tanto no es necesario hacer dicha
división). Nuevamente, se debe utilizar la función "longitud". Se debe
imprimir por pantalla el valor de dichas velocidades en unidades de
kilómetros por hora. Este procedimiento debe implementarse a través de
la función con el siguiente prototipo:

void velocidades ( double D[N][M], int numero_de_filas );

=========================================================
 EJEMPLO DE EJECUCION O CORRIDA DEL PROGRAMA
=========================================================
Ingrese el número de filas:   23

Error: el número de filas debe ser menor o igual a 20 

Ingrese el número de filas:   5

Ingrese el vector de la fila 0: 0.0  0.0   0.0
Ingrese el vector de la fila 1: 20.2 30.3  40.4
Ingrese el vector de la fila 2: 30.1 70.7  100.8
Ingrese el vector de la fila 3: 70.1 80.3  150.2
Ingrese el vector de la fila 4: 40.5 120.8 320.9

La máxima distancia es: 345.2676 metros
La distancia recorrida es: 0.3699302 kilometros
La velocidad máxima es: 640.5057 Km/h
La velocidad mínima es: 195.8046 Km/h

=========================================================
Tabla de Corrección
______________________________


Función leerMatriz           | 15
Función max_distancia        | 10
Función longitud             | 10
Función distancia_recorrida  | 20
Función velocidades          | 25
Programa Principal           | 10
Compilación		     | 10
=========================================================

Estimado alumno no modifique nada del código que le proveemos, use los
procedimientos o funciones que estan definidos y no agregue más a la
solucion.

************************************************************/



