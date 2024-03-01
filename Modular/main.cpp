#include <iostream>
using namespace std;
#include "mylib.cpp"


int main() {
    float n1, n2;
    hello();
    imp("Prueba de texto");
    impln("Prueba de texto con salto de linea");
    //cin >> n1 >> n2;

    cout << valida('q') << endl;
    cout << booltotxt(valida('q')) << endl;

} //fin main
