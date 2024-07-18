#include <iostream>

using namespace std;

int main(){

    int saldo_inicial = 1000, opc;
    float extra, saldo = 0, retiro;

    system("cls");

    cout<<"\n\nBienvenido a su cajero virtual"<<endl;
    cout<<"1. Ingresar dinero en la cuneta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Digite una opcion: ";
    cin>>opc;

    switch (opc){
    case 1: 
        cout<<"\nDigite la cantidad a ingresar: ";
        cin>>extra;

        saldo = saldo_inicial + extra;

        cout<<"\nDinero en cuenta: "<<saldo;
    break;

    case 2:
        cout<<"\nDigite la cantidad de dinero que va a retirar: ";
        cin>>retiro;

        if (retiro > saldo_inicial){
            cout<<"\nNo tiene esa cantidad de dinero";
        }else{
            saldo = saldo_inicial - retiro;
            cout<<"\nDinero en cuenta: "<<saldo;
        }
    break;

    case 3: 
    break;
    
    default:
        cout<<"\nDigite una opcion valida";
    break;
    }


    return 0;
}