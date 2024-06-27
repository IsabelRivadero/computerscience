#include <iostream>
#include <cmath>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 9 N1

//    Funciones

void mostrarMensaje()
{
     cout << "Bienvenidos al lenguaje de programacion C++";
}

int leerPar()
{
    int par;

    cout << "\n\nIngrese un valor entero par: ";
    cin >> par;
    
    while(par%2==1)
        cin >> par;
    
    return par;   
}

void calcularCubo(int num)
{
     cout << "El cubo del numero es: " << pow(num,3.0) << endl;
}

int main()
{
    int x;
    
    mostrarMensaje();

    x=leerPar();

    calcularCubo(x);
    
    system("PAUSE");
    
    return 0;
}
