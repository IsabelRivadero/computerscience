#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 6 N3

int main()
{  
    int i , j , alt;
    
    cout << "Ingrese la altura del triangulo rectangulo isoceles: ";
    cin >> alt;

    
    for( i=0;i<alt;i++ )          // Imprime un triángulo rectángulo isóceles invertido de asteriscos.
    {
    
            for( j=0;j<alt-i;j++ )
            
                 cout << "*";
            
            cout << endl;
     
    }    
    
    system("PAUSE");
    
    return 0;
    
}
