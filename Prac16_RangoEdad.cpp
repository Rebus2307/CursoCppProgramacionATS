#include <iostream>

using namespace std;

int main(){

    int edad;   

    cout<<"\nDigite su edad: ";
    cin>>edad; 

    if (edad >= 18 && edad <= 25){
        cout<<"\nLa edad esta dentro del rango";
    }else
        cout<<"\nLa edad esta fuera del rango";
    

    return 0; 
}