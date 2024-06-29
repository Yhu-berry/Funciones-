//Hallar las raices de una ecuacion cuadratica
#include <iostream>
#include <cmath>
#include <complex> //incluye el conjunto de los numeros complejos 
#include <limits> //Proporciona informacion sobre las carcteristicas del tipo numericas
using namespace std;

//Funcion para verificar si se ha ingresado un valor numérico
void es_unNum();

//Funcion para calcular las raices de una ecuacion cuadratica
void calcularRaices(double a,double b,double c,complex<double> &r1,complex<double> &r2,bool &esReal);


int main(){
    double a,b,c;
    complex<double> r1,r2;
    bool esReal;
    cout<<endl<<"--CALCULAR LAS RAICES DE UNA ECUACION CUADRATICA--"<<endl;

    //solicitar datos de entrada al usuario
    cout<<"Introduce los coeficientes"<<endl;

    cout<<"a: ";cin>>a;
    es_unNum(); 

    cout<<"b: ";cin>>b;
    es_unNum(); 

    cout<<"c: ";cin>>c;
    es_unNum(); 

    //Llamado a la funcion calcularRaices

    /*los valores de r1 y r2 se calculan dentro de la función y se devuelven
    por referencia para que los valores calculados puedan ser utilizados fuera de la función.*/
    calcularRaices(a,b,c,r1,r2,esReal);

    //Datos de salida
    if(esReal){
        if(r1==r2){
            cout<<"Las raices son reales e iguales"<<endl;
            cout<<"r1=r2="<<r1<<endl;
        }
        else{
            cout<<"Las raices son reales y distintas"<<endl;
            cout<<"r1="<<r1<<endl;
            cout<<"r2="<<r2<<endl;
        }
    }else{
        cout<<"Las raices son complejas"<<endl;
        cout<<"r1="<<r1<<endl;
        cout<<"r2="<<r2<<endl;
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

void calcularRaices(double a,double b,double c,complex<double> &r1,complex<double> &r2, bool &esReal){
    //Calcular la discriminante
    double d=pow(b,2)-4*a*c;

    //Verificar si pertenece a los reales o no
    if(d>=0){
        esReal=true;
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
    }else{  
    //raices complejas
        esReal=false;
        r1=complex<double>(-b/(2*a),sqrt(-d)/(2*a));
        r2=complex<double>(-b/(2*a),-sqrt(-d)/(2*a));
    }
}