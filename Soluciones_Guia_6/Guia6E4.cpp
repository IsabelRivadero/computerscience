#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 6 N4

int main()
{  
    int i , j , h , alt;
    
    cout << "Ingrese la altura del triangulo isoceles: ";
    cin >> alt;

    
    for( i=0;i<alt;i++ )          // Imprime un triángulo isóceles de asteriscos.
    {
    
            for( j=1;j<alt-i;j++ )
            
                 cout << " ";
            
            for( h=0;h<2*i+1;h++ )
            
                 cout << "*";
                 
            cout << endl;
     
    }    
    
    system("PAUSE");
    
    return 0;
    
}
