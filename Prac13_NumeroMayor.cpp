#include <iostream>

using namespace std;

int main(){

    int n1, n2;

    cout<<"Digite dos numeros: ";
    cin>>n1>>n2; 

    if(n1 == n2){
        cout<<"\nAmbos numeros son iguales";
    }else if (n1>n2){
        cout<<"El numero mayor es: "<<n1; 
    }else{
        cout<<"\nEl numeros mayor es: "<<n2;
    }
    

    return 0;
}