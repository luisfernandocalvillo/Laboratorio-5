#include <iostream>

using namespace std;

void nueva_hora(int h, int m, int s)
{
    if(h < 24 && m < 60 && s < 60 )
    {
        if(s < 59 && s >= 0)
        {
          cout<< "La nueva hora es: " << h <<"h " << m << "m " << (s++) << "s";
        }else
            {
             if(s==59)
                {
                  if(m==59)
                    {
                      if(h==23)
                        {
                          cout << "La nueva hora es: " << "00h 00m 00s";
                        }else
                        {
                          cout << "La nueva hora es: " << (h++) << "h 00m 00s";
                        }
                    }else
                    {
                      cout << "La nueva hora es: " << h << "h " << (m++) << "m 00s";
                    }
                }
            }
    }else
        {
          cout << endl << "Hora no valida, intente de nuevo" << endl;
        }
}

int main(){

    int h,m,s;
    cout << endl << endl << "La hora un segundo despues" << endl << "FORMATO 24 HORAS";    
    cout << endl << endl << "ingresa la hora: ";
    cin >> h;
    cout << "ingresa los minutos: ";
    cin >> m;
    cout << "ingresa los segundos: ";
    cin >> s;
    cout << endl;
    nueva_hora(h,m,s);
}