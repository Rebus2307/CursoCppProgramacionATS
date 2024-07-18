#include <iostream>

using namespace std;

int main(){

    int numero, dato = 5;   

    cout<<"Digite un numero: ";
    cin>>numero;

    if (numero >= dato){
        cout<<"\nEl numero es mayor o igual a 5";
    }else{
        cout<<"\nEl numero es menor a 5";
    }
    

    return 0; 
}