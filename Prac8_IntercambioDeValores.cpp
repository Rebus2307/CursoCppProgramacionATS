#include <iostream>

using namespace std;

int main(){

    int x, y, aux; 

    cout<<"Digite el valor de x: ";
    cin>>x;
    cout<<"\nDigite el valor de y: ";
    cin>>y; 

    aux = x; 
    x = y;
    y = aux; 

    cout<<"\nEl nuevo valor de x es: "<<x;
    cout<<"\nEL nuevo valor de y es: "<<y;

    return 0;
}