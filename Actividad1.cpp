//Área de un círculo
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double A,r;
    cout<<"Ingrese el radio: ";
    cin>>r;
    A=M_PI * pow(r,2);
    cout<<A<<endl;
    return 0;
}
