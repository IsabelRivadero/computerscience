/*
  **************************************************************
  MATERIA   : INFORMATICA
  EXAMEN    : Especificaci�n de Algoritmos - 9 de Noviembre 2016
  NOMBRES   : 
  MATRICULA : 
  CARRERA   : 
  COMISION  : 
  **************************************************************
  TABLA DE CALIFICACION:
  --------------------------------------------------------------
    /15  leer_datos
    /10  coordenada_y_de_la_ciudad_mas_al_norte
    /20  distancia_de_ciudades_mas_lejanas
    /10  calcular_el_centro_de_la_ciudad
    /20  buscar_ciudades_perifericas
    /15  guardar_resultados
    /10  Comentarios, sem�ntica y presentaci�n
  --------------------------------------------------------------
    /100 Total 
  **************************************************************

  Enunciado:

  Escribir un programa que lea y procese informaci�n contenida en un archivo de
  texto llamado "ciudades.txt". Dicho archivo posee informaci�n sobre las
  coordenadas geogr�ficas de las ciudades de un determinado pa�s. La ubicaci�n
  de cada ciudad est� determinada por las coordenadas X en Y sobre un plano en
  unidades de "metros". El primer n�mero que contiene el archivo es un n�mero
  entero que indica la cantidad de ciudades almacenadas en el archivo. Los
  n�meros sucesivos (n�meros reales) son las coordenadas X e Y (en este orden)
  de cada una de las ciudades. Los n�meros est�n separados por espacios o nueva
  linea. A continuaci�n se muestra un ejemplo del contenido del archivo.
 
  Ejemplo del contenido del archivo "ciudades.txt"

   6
   1.25   3.3
  -4      6.7
  23.8   10.123
   5.5   -3.0
   8.7    0.23
   4.23   7.65

  El n�mero m�ximo de ciudades que puede contener el archivo es 100. La
  coordenada X positiva hace referencia al punto cardinal "este" y la coordenada
  Y positiva hace referencia al punto cardinal "norte".

  Realizar cada una de las funciones que se describen a continuaci�n. No se debe
  modificar ni eliminar el c�digo que ya esta escrito. Solo se debe completar
  con el c�digo faltante. No se deben usar variable globales.

  ------------------------------------------------------------------------------
  Ejemplo de ejecuci�n:

  La coordenada Y de la ciudad mas al norte es: 10.123
  Las ciudades mas lejanas se encuentran a una distancia de: 28.0099

  El centro de la ciudad es: 6.58   4.16717

*/



// --- Inicio del programa -----------------------------------------------------

/*

  Incluir bibliotecas y prototipos de funciones aqu�

*/


int main() // Este main no debe ser modificado
{
  double coordenadas[100][2], ciudades_perifericas[2][2], distancia, coordenada_y;
  double x_centro, y_centro;
  int    n_ciudades;

  leer_datos(coordenadas, n_ciudades);

  coordenada_y = coordenada_y_de_la_ciudad_mas_al_norte(coordenadas, n_ciudades);

  distancia = distancia_de_ciudades_mas_lejanas(coordenadas, n_ciudades);

  cout << "\n\n";
  cout << "La coordenada Y de la ciudad mas al norte es: " << coordenada_y;
  cout << "\n";
  cout << "Las ciudades mas lejanas se encuentran a una distancia de: " << distancia;
  cout << "\n\n";

  calcular_el_centro_de_la_ciudad(coordenadas, n_ciudades, x_centro, y_centro);

  cout << "El centro de la ciudad es: " << x_centro << "   " << y_centro << "\n\n";

  buscar_ciudades_perifericas(coordenadas, n_ciudades, x_centro, y_centro, ciudades_perifericas);

  guardar_resultados(ciudades_perifericas);

  return 0;
}

/*Tipo de datos que retorna*/ leer_datos(/* Par�metros */)
{

   /*
   Esta funci�n debe leer el archivo "ciudades.txt" y cargar la informaci�n en
   la matriz "coordenadas" que recibe como par�metro. La cantidad de ciudades se
   carga por referencia en el par�metro "n_ciudades".
   */

}

/*Tipo de datos que retorna*/ coordenada_y_de_la_ciudad_mas_al_norte(/* Par�metros */)
{
   /*
   Esta funci�n debe buscar la ciudad que se encuentra mas al norte y retornar
   la coordenada Y de dicha ciudad.
   */
}

/*Tipo de datos que retorna*/ distancia_de_ciudades_mas_lejanas(/* Par�metros */)
{
   /*
   Esta funci�n debe buscar el par de ciudades que se encuentran a mayor
   distancia y retornar dicha distancia.
   */
}

/*Tipo de datos que retorna*/ calcular_el_centro_de_la_ciudad(/* Par�metros */);
{
  /*
    Esta funci�n debe calcular el centro de la ciudad y retornarlo como
    parametros por referencia. Las coordenadas X e Y del centro del pa�s se
    calculan como el promedio de las coordenadas X e Y de todas las ciudades.
    Por ejemplo, la coordenada X del centro es el promedio de las coordenadas X
    de todas las ciudades.
  */
}


/*Tipo de datos que retorna*/ buscar_ciudades_perifericas(/* Par�metros */)
{
   /*
   Esta funci�n debe buscar las 2 ciudades que se encuentran mas lejos del
   centro del pa�s. Las coordenadas de dichas ciudades deben ser almacenadas en
   la matriz "ciudades_perifericas" que recibe como par�metro. La coordenada X
   corresponde a la primer columna de la matriz de la coordenada Y a la segunda
   columna. 
   */
}

/*Tipo de datos que retorna*/ guardar_resultados(/* Completar con los par�metros correspondientes */)
{
   /*
   Esta funci�n debe guardar en un archivo llamado "ciudades_perifericas.txt" las
   coordenadas de las ciudades perifericas que recibe como par�metro en la matriz
   "ciudades_perifericas". El contenido del archivo debe seguir el siguiente
   formato:

   Ciudad 1:  X = 23.8	  Y = 10.1
   Ciudad 2:  X = -4.0	  Y = 6.7
   */
}

// --- Fin del programa --------------------------------------------------------
