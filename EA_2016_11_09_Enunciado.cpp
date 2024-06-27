/*
  **************************************************************
  MATERIA   : INFORMATICA
  EXAMEN    : Especificación de Algoritmos - 9 de Noviembre 2016
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
    /10  Comentarios, semántica y presentación
  --------------------------------------------------------------
    /100 Total 
  **************************************************************

  Enunciado:

  Escribir un programa que lea y procese información contenida en un archivo de
  texto llamado "ciudades.txt". Dicho archivo posee información sobre las
  coordenadas geográficas de las ciudades de un determinado país. La ubicación
  de cada ciudad está determinada por las coordenadas X en Y sobre un plano en
  unidades de "metros". El primer número que contiene el archivo es un número
  entero que indica la cantidad de ciudades almacenadas en el archivo. Los
  números sucesivos (números reales) son las coordenadas X e Y (en este orden)
  de cada una de las ciudades. Los números están separados por espacios o nueva
  linea. A continuación se muestra un ejemplo del contenido del archivo.
 
  Ejemplo del contenido del archivo "ciudades.txt"

   6
   1.25   3.3
  -4      6.7
  23.8   10.123
   5.5   -3.0
   8.7    0.23
   4.23   7.65

  El número máximo de ciudades que puede contener el archivo es 100. La
  coordenada X positiva hace referencia al punto cardinal "este" y la coordenada
  Y positiva hace referencia al punto cardinal "norte".

  Realizar cada una de las funciones que se describen a continuación. No se debe
  modificar ni eliminar el código que ya esta escrito. Solo se debe completar
  con el código faltante. No se deben usar variable globales.

  ------------------------------------------------------------------------------
  Ejemplo de ejecución:

  La coordenada Y de la ciudad mas al norte es: 10.123
  Las ciudades mas lejanas se encuentran a una distancia de: 28.0099

  El centro de la ciudad es: 6.58   4.16717

*/



// --- Inicio del programa -----------------------------------------------------

/*

  Incluir bibliotecas y prototipos de funciones aquí

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

/*Tipo de datos que retorna*/ leer_datos(/* Parámetros */)
{

   /*
   Esta función debe leer el archivo "ciudades.txt" y cargar la información en
   la matriz "coordenadas" que recibe como parámetro. La cantidad de ciudades se
   carga por referencia en el parámetro "n_ciudades".
   */

}

/*Tipo de datos que retorna*/ coordenada_y_de_la_ciudad_mas_al_norte(/* Parámetros */)
{
   /*
   Esta función debe buscar la ciudad que se encuentra mas al norte y retornar
   la coordenada Y de dicha ciudad.
   */
}

/*Tipo de datos que retorna*/ distancia_de_ciudades_mas_lejanas(/* Parámetros */)
{
   /*
   Esta función debe buscar el par de ciudades que se encuentran a mayor
   distancia y retornar dicha distancia.
   */
}

/*Tipo de datos que retorna*/ calcular_el_centro_de_la_ciudad(/* Parámetros */);
{
  /*
    Esta función debe calcular el centro de la ciudad y retornarlo como
    parametros por referencia. Las coordenadas X e Y del centro del país se
    calculan como el promedio de las coordenadas X e Y de todas las ciudades.
    Por ejemplo, la coordenada X del centro es el promedio de las coordenadas X
    de todas las ciudades.
  */
}


/*Tipo de datos que retorna*/ buscar_ciudades_perifericas(/* Parámetros */)
{
   /*
   Esta función debe buscar las 2 ciudades que se encuentran mas lejos del
   centro del país. Las coordenadas de dichas ciudades deben ser almacenadas en
   la matriz "ciudades_perifericas" que recibe como parámetro. La coordenada X
   corresponde a la primer columna de la matriz de la coordenada Y a la segunda
   columna. 
   */
}

/*Tipo de datos que retorna*/ guardar_resultados(/* Completar con los parámetros correspondientes */)
{
   /*
   Esta función debe guardar en un archivo llamado "ciudades_perifericas.txt" las
   coordenadas de las ciudades perifericas que recibe como parámetro en la matriz
   "ciudades_perifericas". El contenido del archivo debe seguir el siguiente
   formato:

   Ciudad 1:  X = 23.8	  Y = 10.1
   Ciudad 2:  X = -4.0	  Y = 6.7
   */
}

// --- Fin del programa --------------------------------------------------------
