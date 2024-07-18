#include <iostream>

using namespace std;

int main(){

    int numero;

    cout<<"\nDigite un numero: ";
    cin>>numero;

    if(numero == 0){
        cout<<"\nEl numero es 0";
    }else if (numero%2 == 0){
        cout<<"\nEl numero es par";
    }else{
        cout<<"\nEl numero es impar";
    }
    

    return 0; 
}