//Generador de Números Aleatorios

//inlusión de librerias
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int n,numM;
    //Solicitar datos de entrada
    cout<<"Cantidad de numeros aleatorios: ";cin>>n;
    cout<<"Numero maximo: ";cin>>numM;

    //mostrar la serie de números aleatorios
    for(int i=0; i<n;i++){
        int numAleatorio= rand() % (numM+1); //% delimita al numAleatorio hasta el numM+1
        cout<< numAleatorio<< " ";
    }
        cout<<"\n";

    return 0;
}

