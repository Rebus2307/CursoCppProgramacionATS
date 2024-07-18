#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas;
    char band = 'F';

    cout<<"Digite el numero de filas: ";
    cin>>filas;

    cout<<"Digite el numero de columnas: ";
    cin>>columnas;
    cout<<"\n";

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    if (filas == columnas){
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                if (numeros[i][j] == numeros [j][i]){
                    band = 'V';
                }
            }
        }
    }

    if (band == 'V'){
        cout<<"\nLa matriz es simetrica";
    }else{
        cout<<"\nLa matriz no es simetrica"; 
    }
        
    getch();
    return 0; 
}