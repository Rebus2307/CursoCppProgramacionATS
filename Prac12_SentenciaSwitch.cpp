#include <iostream>

using namespace std;

int main(){

    int numero;

    cout<<"Digite un numero entre 1 y 5: ";
    cin>>numero;

    switch (numero){
    case 1: 
        cout<<"\nEs el caso 1";
     break;
    
    case 2: 
        cout<<"\nEs el caso 2";
     break;

    case 3:
        cout<<"\nEs el caso 3";
     break;
    
    case 4:
        cout<<"\nEs el caso 4";
     break; 

    case 5:
        cout<<"\nEs el caso 5";
     break;

    default:
        cout<<"\nDigite un numero dentro del rango permitido";
     break;
    }

    return 0; 
}