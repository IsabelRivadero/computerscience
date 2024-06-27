#include <iostream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 5 N6

int main()
{  
    int vocales=0 , consonantes=0;
    char P;
    
    cout << "Ingrese un palabra en minuscula y cualquier otro caracter para indicar el final: " << endl;
    cin >> P;   
     
    while( P>=97 && P<=122 )  // En código ASCII, 97 equivale a la letra minuscula "a" y el 122 a "z"
    {

        
        if( P=='a' || P=='e' || P=='i' || P=='o' || P=='u' )
        
            vocales++;
                  
        else
        
            consonantes++;
            
        cin >> P;
    
    }          
    
        cout << "La palabra tiene " << vocales << " vocales y " << consonantes << " consonantes.";

    system("PUASE");
    
    return 0;
    
}
