// Cálculo de la Hipotenusa

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cout<<"Cateto1: ";cin>>a;
    cout<<"Cateto2: ";cin>>b;
        cout<<endl;

    c=sqrt(pow(a,2)+pow(b,2));

    cout<<"Hipotenusa: "<<c<<endl;
    return 0;
}
