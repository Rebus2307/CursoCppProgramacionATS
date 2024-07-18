#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int matriz[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    
    cout<<"\nMatriz Original\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }

    cout<<"\nMatriz Transpuesta\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matriz[j][i];
        }
        cout<<"\n";
    }


    getch();
    return 0; 
}