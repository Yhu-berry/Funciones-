//Juego de Piedra, Papel y Tijeras

//inlusión de librerias
#include <iostream> 
#include <cstdlib>  /*Para poder implementar rand() y srand()*/
#include <ctime>
using namespace std;

//Funcion para convertir el numero elegido a cadena
string opcionToString(int opcion);

//Funcion para generar una jugada aleatoria para la computadora
int generarjugada_Computadora();

//Progrma principal
int main(){
    srand(time(0));
    int juegosganUsuario=0;
    int juegosganComputadora=0;
    //Para que termine las jugadas deben de haber ganado 3 veces
    while(juegosganUsuario<3 && juegosganComputadora<3){
        int opcionDel_Usuario;
        cout<< "Elige una opcion: "<<endl;
        cout<< "1) Piedra\n2) Papel\n3) Tijera\n";
        cin>>opcionDel_Usuario;

        if(opcionDel_Usuario <1 || opcionDel_Usuario > 3){
            cout<<"Entrada invalida"<<endl;
            continue;
        }

        int jugada_Computadora=generarjugada_Computadora();

        cout<<"Tu jugada: " << opcionToString(opcionDel_Usuario)<<endl;
        cout<<"Jugada de la computadora: " << opcionToString(jugada_Computadora)<<endl;
    }


    return 0;
}


//Funcion para convertir el numero elegido a cadena
string opcionToString(int opcion){
    switch(opcion){
        case 1:
            return "Piedra";
        case 2:
            return "Papel";
        case 3:
            return "Tijera";        
    }
    return"";
}

//Funcion para generar una jugada aleatoria para la computadora
int generarjugada_Computadora(){
    return rand()%3 + 1; /*el +1 es para que cuente tambien el 3 porque inicie de 1*/
}