#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int alt=1;
    double pi=0, numerador=4, denominador=1, iteraciones=0, cantidad=0, i=0;


    cout<<"Serie de Leibniz para Pi \n";
    cout<<"Ingrese la cantidad de decimales: \n";

    cin>>cantidad;

    iteraciones=pow(10,cantidad);

    for(i ; i<iteraciones ;i++){
        pi=pi+alt*(numerador/denominador);
        denominador=denominador+2;
        alt=alt*(-1);
    }

    cout<<"Pi es: \n"<<pi;
    return 0;

}