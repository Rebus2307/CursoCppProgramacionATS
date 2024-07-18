#include<iostream>

using namespace std;

int main(){

    float practica, teorica, participacion, final = 0;

    cout<<"\nDigite la nota de practica: ";
    cin>>practica;
    cout<<"\nDigite la nota teorica: ";
    cin>>teorica;
    cout<<"\nDigite la nota de particiacion: ";
    cin>>participacion;

    practica *= 0.30;
    teorica = teorica * 0.60;
    participacion = participacion * 0.10;

    final = practica + teorica + participacion;

    cout<<"\nLa nota final es: "<<final;

    return 0;
}