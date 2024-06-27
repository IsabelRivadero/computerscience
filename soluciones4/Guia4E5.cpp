#include <iostream>
#include <cmath>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 4 N5

int main()
{  
    double x1 , y1 , x2 , y2 , x3 , y3 , dist1 , dist2 , dist3;
    
    cout << "Ingrese las coordenadas de 3 puntos."<<endl;
    
    cout << "X1: ";
    cin >> x1;
    cout << "Y1: ";
    cin >> y1;
    
    cout << "X2: ";
    cin >> x2;
    cout << "Y2: ";
    cin >> y2;
    
    cout << "X3: ";
    cin >> x3;
    cout << "Y3: ";
    cin >> y3;
    
    dist1 = sqrt(x1*x1+y1*y1);
    dist2 = sqrt(x2*x2+y2*y2);
    dist3 = sqrt(x3*x3+y3*y3);
    
    if( dist1==dist2 )
    {
        if( dist1==dist3 )
        
        	cout << "Todos los puntos estan a la misma distancia del centro de coordenadas." << endl;
        
        else if( dist1>dist3 )
        
        	cout << "El dos primeros puntos ingresados son los mas alejados." << endl;
        
        else
        
        	cout << "El tercer punto ingresado es el mas alejado." << endl;
                   
    }
    else if( dist1>dist2 )
    {
         if( dist1==dist3 )
        
        	 cout << "El primero y el tercero son los mas alejados." << endl;
        
         else if( dist1>dist3 )
         
         	cout << "El primero es el mas alejado." << endl;
         
         else
         
         	cout << "El tercero es el mas alejado." << endl;
    }
    else 
    {
         if( dist2==dist3 )
         
        	 cout << "El segundo y el tercero son los mas alejados." << endl;
         
         else if( dist2>dist3 )
         
        	 cout << "El segundo es el mas alejado." << endl;
         
         else
         
         	cout << "El tercero es el mas alejado." << endl;
    }
    
    system ("PAUSE");
    
    return 0;
    
}
