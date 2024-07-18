#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float x, y, res = 0;

    cout<<"Digite el valor de x: ";
    cin>>x;
    cout<<"\nDigite el valor de y: ";
    cin>>y;

    res = (sqrt(x))/(pow(y,2)-1);

    cout.precision(2);
    cout<<"El resultado es: "<<res<<endl;

    return 0; 
}