#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas; 

    cout<<"Digite el numero de filas: ";
    cin>>filas;

    cout<<"Digite el numeros de columnas: ";
    cin>>columnas;
    cout<<"\n";

    //Almacenando elemento de la matriz
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    cout<<"\n";
    
    //Mostrando la mariz
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n"; 
    }
    

    getch();
    return 0; 
}