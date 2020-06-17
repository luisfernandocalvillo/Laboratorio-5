#include <iostream> 

using namespace std; 

int main()
{
    int num1, num2, residuo; 
    cout<< endl; 
    cout<< "CALCULO DE MCD"<< endl << endl; 
    cout<< "Por favor ingrese el primer numero"<< endl; 
    cin>> num1; 
    cout<< "Por favor ingrese el segundo numero"<< endl; 
    cin>> num2; 

    do
    {
        residuo = num1 % num2;
            
        if ( residuo != 0)
        {
            num1= num2;
            num2=num1;
        }
    }while ( residuo != 0);
    cout<< "El MCD es: "<< num2;
}
    