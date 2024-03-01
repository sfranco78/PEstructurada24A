void hello(){
    cout << "Hello to my first function" << endl;
} // fin hello

void imp(string texto){
    cout << texto;
} // fin imp

void imp(int num){
    cout << num ;
}
void imp(float num){
    cout << num ;
}

void impln(string texto){
    cout << texto << endl;
}

/* Esta función retorna la suma de num1 con num2 */

int suma(int num1, int num2){
    int sum;
    sum = num1 + num2;
    return sum;
}

float suma(float num1, float num2){
    return num1+num2;
}

bool valida(char caracter){
    if((caracter >=65 && caracter <= 90) || (caracter >=97 && caracter <= 122) )
        return true;
    else
        return false;
}

string booltotxt(bool val){
    if(val == 1)
        return "Verdadero";
    else
        return "Falso";
}// fin bool to txt