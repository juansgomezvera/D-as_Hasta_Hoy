//Codigo basado en el ejemplo de http://www.cplusplus.com/reference/ctime/time/.
//Pregunta la fecha de nacimiento y nos dá los días vividos.
//Juan Sebastian Gomez Vera.

#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;


int main ()
{
    time_t tactual;               
    struct tm fecha = {0};        
    double segundos;             

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

    fecha.tm_year=y-1900;        
    fecha.tm_mon=m-1;           
    fecha.tm_mday=d;  
    fecha.tm_hour, fecha.tm_min, fecha.tm_sec = 0; 
          

    time(&tactual);                 

    segundos = difftime(tactual,mktime(&fecha)); 
    int dias=segundos/86400;       
    cout << "Has vivido " << dias << " días." << endl;  
    return 0;
}