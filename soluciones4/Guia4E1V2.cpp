#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 4 N1

int main()
{  
    int x , par=0 , impar=0;
    
    cout << "Ingrese 5 valores enteros: " << endl;

    cin >> x;
    
    if( x>=1 && x<=100 )
    {
            par = par + (x+1)%2;

	        impar = impar + x%2;
    } 
    
    cin >> x;
    
    if( x>=1 && x<=100 )
    {
            par = par + (x+1)%2;

	        impar = impar + x%2;
    } 
    
    cin >> x;
    
    if( x>=1 && x<=100 )
    {
            par = par + (x+1)%2;

	        impar = impar + x%2;
    } 
        
    cin >> x;
    
    if( x>=1 && x<=100 )
    {
            par = par + (x+1)%2;

	        impar = impar + x%2;
    }     
      
    cin >> x;
    
    if( x>=1 && x<=100 )
    {
            par = par + (x+1)%2;

	        impar = impar + x%2;
    }    
      
    cout << "Se ingreso " << par << " numero/s par/es y " << impar << " numero/s impar/es perteneciente/s al intervalo [1;100]." << endl;
    
    system ("PAUSE");
    
    return 0;
}
