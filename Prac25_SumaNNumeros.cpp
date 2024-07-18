#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int n, suma =  0;

    cout<<"\nDigite el numero de elementos: ";
    cin>>n;

    for (int i = 1; i <= n; i++){
        suma = suma + i; 
    }

    cout<<"\nLa suma es "<<suma; 
    getch();

    return 0; 
}