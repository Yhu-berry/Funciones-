//Área de un círculo
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double A,r;

    cout<<endl<<"CALCULAR El AREA DE UN CIRCULO \n";
    cout<<"Ingrese el radio: ";
    cin>>r;

    A=M_PI * pow(r,2);

    cout<<"A: "<<A;
    cout<<"\n"<<" ";

    return 0;
}
