#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    //char palabra[] = "Alejandro";
    //char palabra2[] = {'A', 'l', 'e', 'j', 'a', 'n', 'd', 'r', 'o'};

    char nombre[10];

    cout<<"\nDigite su nombre: ";
    cin.getline(nombre, 10, '\n');

    cout<<nombre<<endl;

    getch();
    return 0; 
}