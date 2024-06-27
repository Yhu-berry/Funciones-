//Hallar las raices de una ecuacion cuadratica
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    //solicitar datos de entrada al usuario
    cout<<"Introduce los coeficientes"<<endl;
    cin>>a>>b>>c;

    double d=pow(b,2)-4*a*c;

    //verificar si pertenece a los reales o no
    if(d>0 || d==0){
        double r1,r2;
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        cout<<"r1: "<<r1<<endl;
        cout<<"r2: "<<r2<<endl;
    }/*else{
        //raices complejas
    }*/
    return 0;
}