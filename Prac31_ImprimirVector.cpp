#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100], n;

    cout<<"\nDigite el numero de elementos que va a tener el arreglo: ";
    cin>>n;

    for (int i = 0; i < n; i++){        //Guardando elementos del vector
        cout<<"Digite un numero: ";
        cin>>numeros[i];
    }

    for (int i = 0; i < n; i++){        //Mostramos los elementos del vector
        cout<<i<<" -> "<<numeros[i]<<endl;
    }

    getch();
    return 0;
}