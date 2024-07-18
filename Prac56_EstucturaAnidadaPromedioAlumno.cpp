#include <iostream>
#include <conio.h>

using namespace std;

struct promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno{
    char nombre[20];
    char sexo[20];
    int edad;
    struct promedio prom;
}alumno1;

int main(){

    cout<<"Digite su Nombre: ";
    cin.getline(alumno1.nombre, 20, '\n');
    cout<<"Digite su sexo: ";
    cin.getline(alumno1.sexo, 10, '\n');
    cout<<"Digite su edad: ";
    cin>>alumno1.edad;

    cout<<"\n";
    cout<<"\nNotas del alumno: ";
    cout<<"\nNota1: ";
    cin>>alumno1.prom.nota1;
    cout<<"Nota2: ";
    cin>>alumno1.prom.nota2;
    cout<<"Nota3: ";
    cin>>alumno1.prom.nota3;

    float promedio_alumno;

    promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;
    cout<<"\nDatos del Alumno: "<<endl;
    cout<<"\nNombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Promedio: "<<promedio_alumno;

    getch();
    return 0;
}