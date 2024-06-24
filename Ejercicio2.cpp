//Paso por valor y referencia
#include <iostream>
using namespace std;

void porvalor(int a) {
a = 10;
cout << "Dentro de porValor, a ="<< a << endl;
}

void porReferencia(int &a) {
a = 10;
cout << "Dentro de porReferencia, a = " << a << endl;
}

int main() {
int num = 5;
cout << "Antes de pasar por valor, num = "<< num << endl; porvalor (num);
cout << "Luego de pasar por valor, num = "<<num << endl;
cout << "Antes de pasar por referencia, num = "<< num << endl; porReferencia(num);
cout << "Luego de pasar por referencia, num = " << num << endl;
}