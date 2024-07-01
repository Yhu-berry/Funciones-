// Cálculo de la Hipotenusa

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cout<<endl<<"--Calculo de la Hipotenusa--"<<endl;
    
    cout<<"Ingrese los valores de los catetos:"<<endl;
    cout<<"Cateto1: ";cin>>a;
    cout<<"Cateto2: ";cin>>b;

    //Teorema de Pitágoras
    c=sqrt(pow(a,2)+pow(b,2));

    cout<<"Hipotenusa: "<<c;
    cout<<"\n"<<" ";
    return 0;
}
