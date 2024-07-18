#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int numero;

    do{
        cout<<"\nDigite un numero: ";
        cin>>numero;
    } while ((numero < 1) || (numero > 10));

    for (int i = 0; i <= 20; i++){
        cout<<numero<<"*"<<i<<" = "<<numero * i<<endl;
    }

    system("pause");

    return 0;
}