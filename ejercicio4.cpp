#include <iostream>
using namespace std;

bool bisiesto(int anio);
int dias_meses (int mes);


//funcion para el año bisisesto
bool bisiesto(int anio)
{
  return (anio % 400 == 0 || (anio % 100 != 0 && anio % 4 == 0));
}


int dias_meses (int mes, int anio)
{
    int dias;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
      {
        dias = 30;
      }else if (mes == 2)
      { 
       /*meto la funcion bisiesto dentro de la funcion dias meses con dos 
       parametros, una la ocupara ahora y la otra es para cuando este en el main*/

        if (bisiesto(anio))
        {
            dias = 29;
        }else
        {
            dias = 28; 
        }
      }else if (mes == 1 || mes == 3 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
      {
        dias =31;
      }else
      {
        cout << "Fecha incorrecta" << endl;
        // mensaje
      }
    return dias;
}

// codigo principal 
int main()
{
  int dia,mes,anio;
  cout << endl << "ingrese la fecha en numeros" << endl;
  cout << "dia: "; cin >> dia; cout << "mes: "; cin >> mes; cout << "anio: "; cin >> anio;
  if (dia == dias_meses (mes,anio))
    {
      dia = 1;
      mes ++;
      if (mes >= 12)
        {
          mes = 1;
          anio++;
        }
        cout << endl << "La nueva fecha es: " << dia << " / " << mes << " / " << anio;
    }else if (dia < dias_meses(mes, anio)){
        dia++;
        cout << endl << "Su fecha el dia siguiente es: " << dia << "/" << mes << "/" << anio;
    }else{
      	cout << "Fecha incorrecta" << endl;
    }
}

