#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 9 N2

//    Funciones

double promedio(int N)
{
     double num , prom;
     
     cout << "Ingrese " << N << " numeros reales: " << endl;
     
     for( int i=0;i<N;i++ )
     {
             cin >> num;
             
             prom=prom+num;
     }
     
     prom=prom/N;
     
     return prom;
}

double absoluto(double val)
{  
    if(val<0)
    
             val=-val;
    
    return val;   
}

int techo(double val)
{     
     return int(val+1);
}

int piso(double val)
{    
     return int(val);
}

int main()
{
    int N;
    double x,y;
    
    cout << "¿Cuantos datos desea ingresar?";
    cin >> N;
    
    x=promedio(N);
    
    cout << "Promedio: " << x << endl;

    cout << "Valor absoluto: " << absoluto(x) << endl;

    cout << "Entero superior mas cercano: " << techo(x) << endl;

    cout << "Entero inferior mas cercano: " << piso(x) << endl;
    
    system("PAUSE");
    
    return 0;
}








