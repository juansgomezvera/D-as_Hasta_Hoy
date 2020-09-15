//Codigo basado en el ejemplo de http://www.cplusplus.com/reference/ctime/time/.
//Pregunta la fecha de nacimiento y nos dá los días vividos.
//Juan Sebastian Gomez Vera.

#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;


int main ()
{
    time_t tactual;    //Almacenamos la fecha actual en una variable.           
    struct tm fecha = {0};        //Creamos una estructura para guardar la fecha de nacimiento.
    double segundos;     //En esta variable se almacenará el tiempo en segundos.

    //Ahora le pedimos al usuario que ingrese su fecha de nacimiento:        

    cout << "De su Fecha de Nacimiento digite: "<< endl;     
    int y;                       
    cout<<"El año:"<< endl;
    cin>> y;       
    int m;                       
    cout<<"El mes:"<< endl;
    cin>> m;        
    int d;                       
    cout<<"El día:"<< endl;
    cin>> d; 

    //Hacemos unos cambios a las fechas para que se puedan operar con el tiempo unix. Y como no usararemos el tiempo de
    //horas, minutos y segundos, los igualamos a 0.

    fecha.tm_year=y-1900;        
    fecha.tm_mon=m-1;           
    fecha.tm_mday=d;  
    fecha.tm_hour, fecha.tm_min, fecha.tm_sec = 0; 
          

    time(&tactual);     //Almacenamos en time el tiempo actual.        

    segundos = difftime(tactual,mktime(&fecha)); //Sacamos la diferencia de las dos fechas en segundos.
    int dias=segundos/86400;       //Hacemos la conversión de segundos a días.
    cout << "Has vivido " << dias << " días." << endl;  //Imprimimos el resultado.
    return 0;
}