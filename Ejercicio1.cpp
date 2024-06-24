//Simulacion de cajero automatico
#include<iostream>
using namespace std;

//Declaracion de las funciones
void depositar(float);
void retirar(float);
void mostrarSaldo();

//Funcion para mostrar el menu y ejecutar la opcion seleccionada
int main(){
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
                int valor;
                cout<<"Ingrese el monto: "; cin>>valor;
                depositar(valor);
                cout<<valor;
                break;
            case 2:
                cout<<"Ingrese el monto: "; cin>>valor;
                retirar(valor);
                cout<<valor;
                break;
            case 3:
                mostrarSaldo();
                break;
            case 4:
                cout<<"Saliendo..."<<endl;
                system("pause");
                break;
            default:
                cout<<"Opcion no valida.Intente de nuevo."<<endl;
        }
    }while(opcion !=4);
    return 0;
}

//Codigo de las funciones

void depositar(float monto){
    double saldo;
        saldo = saldo + monto;
}
void retirar(float monto){
    double saldo;
    saldo = saldo - monto;
}

void mostrarSaldo(){
    double saldo;
    cout<<"El saldo actual es: "<<saldo<<endl;
}