//Juego de Piedra, Papel o Tijeras

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

    cout<<endl<<"--JUGUEMOS A PIEDRA, PAPEL O TIJERAS--"<<endl;

    /*Para que termine las jugadas deben de haber ganado 3 veces*/
    while(juegosganUsuario<3 && juegosganComputadora<3){
        int opcionDel_Usuario;
       
        cout<< "Elige una opcion: "<<endl;
        cout<< "1) Piedra\t2) Papel\t3) Tijeras\t";
        cin>>opcionDel_Usuario;

        if(opcionDel_Usuario <1 || opcionDel_Usuario > 3){
            cout<<"Entrada invalida"<<endl;
            cin.clear();
            exit(EXIT_FAILURE);
        }

        int jugada_Computadora=generarjugada_Computadora();

        cout<<"Tu jugada: " << opcionToString(opcionDel_Usuario)<<endl;
        cout<<"Jugada de la computadora: " << opcionToString(jugada_Computadora)<<endl;

        //Lógica para hallar al ganador
        if(opcionDel_Usuario==jugada_Computadora){
        cout<<"Empate!"<< endl;

        }else if(
        (opcionDel_Usuario==2 &&jugada_Computadora==1)
        || (opcionDel_Usuario==1 &&jugada_Computadora==3)
        || (opcionDel_Usuario==3 &&jugada_Computadora==2)){
        cout<<"Ganaste esta ronda!"<<endl;
        juegosganUsuario++;
        }else{
        cout<<"Perdiste esta ronda, gano la computadora"<<endl;
        juegosganComputadora++;
        }
        cout<<endl;
    }

    //Mostrar el resultado final del juego
    /*operador ternario si se cumple que usuario ganó 3 veces se ha de imprimir 1 
     ((condicion)"1) si es verdad": "2) si es falso")*/
    cout<< ((juegosganUsuario==3)? "!Ganaste el juego!": "La computadora gano el juego, suerte la proxima")<<endl;

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
            return "Tijeras";        
    }
    return"";
}

//Funcion para generar una jugada aleatoria para la computadora
int generarjugada_Computadora(){
    return rand()%3 + 1; /*el +1 es para que cuente tambien el 3 porque inicie de 1*/
}