#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){

    char cad[] = "123.456";
    float numero;

    numero = atof(cad);

    cout<<numero<<endl;

    getch();
    return 0;
}