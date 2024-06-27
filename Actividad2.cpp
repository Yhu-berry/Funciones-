//Generador de Números Aleatorios

//inlusión de librerias
#include <iostream>
#include <cstdlib> /*Para poder implementar rand() y srand()*/
#include <ctime> 
using namespace std;

int main(){
    int n,numM;
    cout<<endl<<"SERIE DE NUMEROS ALEATORIOS \n";
    //Solicitar datos de entradas
    cout<<"Cantidad de numeros aleatorios: ";cin>>n;
    cout<<"Numero maximo: ";cin>>numM;

    //Generador de numeros aleatorios basada en el tiempo
      srand(time(0));
    /*Es como una semilla de minecraft te puede aparecer un mundo igual al otro 
    ,pero mayormente se crean mundos aleatoriamente*/
  
    //Mostrar la serie de números aleatorios
    for(int i=0; i<n;i++){
        int numAleatorio= rand() % (numM+1); //% delimita al numAleatorio hasta el numM+1
        cout<<numAleatorio<< " ";
    }
        cout<<"\n"<<" ";

    return 0;
}

