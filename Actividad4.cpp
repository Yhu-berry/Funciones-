//Hallar las raices de una ecuacion cuadratica
#include <iostream>
#include <cmath>
#include <complex> //incluye el conjunto de los numeros complejos 
#include <limits> //Proporciona informacion sobre las carcteristicas del tipo numericas
using namespace std;

//Funcion para verificar si se ha ingresado un valor numérico
void es_unNum();

int main(){
    int a,b,c;
    //solicitar datos de entrada al usuario
    cout<<"Introduce los coeficientes"<<endl;

    cout<<"a: ";cin>>a;
    es_unNum(); 

    cout<<"b: ";cin>>b;
    es_unNum(); 

    cout<<"c: ";cin>>c;
    es_unNum(); 

    double d=pow(b,2)-4*a*c;

    //Verificar si pertenece a los reales o no
    if(d>=0){
        double r1,r2;
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        cout<<"r1: "<<r1<<endl;
        cout<<"r2: "<<r2<<endl;
    }else{  
    //raices complejas
        complex<double> r1,r2;
        r1=complex<double>(-b/(2*a),sqrt(-d)/(2*a));
        r2=complex<double>(-b/(2*a),-sqrt(-d)/(2*a));
        cout<<"r1: "<<r1<<endl;
        cout<<"r2: "<<r2<<endl;
    }

    return 0;
}

void es_unNum(){
    /*si falla*/
    if(cin.fail()){
        cout<<"Entrada invalida, se permiten solo numeros"<<endl;
        cin.clear(); /*evita un bucle inecesario y limpia el flujo de entrada*/
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        
        /*Detiene la ejecución cuando se halla ingresado un valor no numerico*/
        exit(EXIT_FAILURE); 
    }
}