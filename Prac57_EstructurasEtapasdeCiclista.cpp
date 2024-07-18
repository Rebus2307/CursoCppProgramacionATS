#include <iostream>
#include <conio.h>

using namespace std;

struct Etapas{
    int horas;
    int minutos;
    int segundos;
}et[100];

int main(){

    int n_etapas;
    int horasT = 0, minutosT = 0, segundosT = 0; 

    cout<<"Digite el numero de etapas: ";
    cin>>n_etapas;

    for (int i = 0; i < n_etapas; i++){
        cout<<"Horas: ";
        cin>>et[i].horas;
        cout<<"Minutos: ";
        cin>>et[i].minutos;
        cout<<"Segundos: ";
        cin>>et[i].segundos;

        horasT = horasT + et[i].horas;
        minutosT = minutosT + et[i].minutos;
        if (minutosT >= 60){
            minutosT = minutosT - 60;
            horasT++;
        }
        segundosT = segundosT + et[i].segundos;
        if (segundosT >= 60){
            segundosT = segundosT - 60;
            minutosT++;
        }
        cout<<"\n";
    }
    
    cout<<"\n-Tiempo total-";
    cout<<"\nHoras: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;

    getch();
    return 0;
}