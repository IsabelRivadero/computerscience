#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 6 N5

int main()
{  
    int M , N , i , j;
    double nota , prom = 0 , promgeneral = 0;
    
    cout << "Cantidad de parciales de cada estudiante? ";
    cin >> M;
    cout << "Cantidad de estudiantes? ";
    cin >> N;
    
    for( i=0;i<N;i++ )          
    {
            cout << "Ingrese las notas del estudiante " << i+1 << endl;
    
            for( j=0;j<M;j++ )
            {
            
                 cin >> nota;
                 
                 prom+=nota;
                 
            }
                 
            cout << "El promedio del estudiante es: " << prom/M << endl;
            
            promgeneral+=prom/M;
            
            prom = 0;
     
    }
    
    cout << "El promedio general es: " << promgeneral/N << endl;    
    
    system("PAUSE");
    
    return 0;
    
}
