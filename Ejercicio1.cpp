//Simulacion de cajero automatico
#include<iostream>
using namespace std;

//Funcion para mostrar el menu y ejecutar la opcion seleccionada
void menu(){
    int opcion;
    do{
        cout <<"\n--- Cajero Automatico ---"<<endl;
        cout <<"1. Depositar 100"<<endl;
        cout <<"2. Retirar 100"<<endl;
        cout <<"3. Mostrar Saldo"<<endl;
        cout <<"4. Salir"<<endl;
        cout <<"Seleccione una opcion: ";cin>>opcion;

        switch(opcion){
            case 1:
                //depositar();
                break;
            case 2:
                //retirar();
                break;
            case 3:
                //mostrarSaldo()
                break;
            case 4:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion no valida.Intente de nuevo."<<endl;
        }
    }while(opcion !=4);
}

int main(){
    menu();
    return 0;
}