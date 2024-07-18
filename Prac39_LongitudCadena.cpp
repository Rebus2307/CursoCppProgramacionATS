#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[] = "Hola que tal?";
    int longitud = 0; 

    longitud = strlen(palabra);

    cout<<"Numero de digitos de la cadena es: "<<longitud<<endl;

    getch();
    return 0; 
}