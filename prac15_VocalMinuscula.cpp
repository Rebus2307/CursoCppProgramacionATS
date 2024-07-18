#include <iostream>

using namespace std;

int main(){

    char letra; 

    cout<<"\nDigite un caracter: ";
    cin>>letra;

    switch (letra){
    case 'a':   
        cout<<"\nEs una vocal minuscula"; 
     break;
    
    case 'e':    
        cout<<"\nEs una vocal minuscula";
     break;

    case 'i':    
        cout<<"\nEs una vocal minuscula";
     break;

    case 'o':    
        cout<<"\nEs una vocal minuscula";
     break;

    case 'u':    
        cout<<"\nEs una vocal minuscula";   
     break;
    
    default:
        cout<<"\nNo es una vocal minuscula"; 
        break;
    }

    return 0; 
}