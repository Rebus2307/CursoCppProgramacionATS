#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int array[] = {5,3,4,1,2};
    int pos, aux;

    for (int i = 0; i < 5; i++){
        pos = i;
        aux = array[i];

        while ((pos > 0) && (array[pos-1] > aux)){
            array[pos] = array[pos-1];
            pos--;
        }
        array[pos] = aux;
    }

    cout<<"Orden ascendente: ";
    for (int i = 0; i < 5; i++){
        cout<<array[i]<<" ";
    }
    
    cout<<"\nOrden descendente: ";
    for (int i = 4; i >= 0; i--){
        cout<<array[i]<<" ";
    }
    


    getch();
    return 0;
}