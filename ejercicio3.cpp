#include <iostream>

using namespace std; 

//funcion para calcular un año bisiesto
bool bisiesto (int anio)
{
    if (anio % 400 == 0 || (anio % 100 != 0 && anio % 4 == 0))
    {
        return true;

    } else 
    {
        return false; 
    }
}
    
    
int main()
{
    int anio; 
    cout<< "Ingrese un anio"<< endl;
    cin>> anio; 

    bool valor = bisiesto (anio);

    if (valor)
    {
        cout<< "El anio es bisiesto"<< endl;
    }else
    {
        cout<< "El anio no es bisiesto"<< endl; 
    }
}