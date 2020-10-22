#include "Arra.h"
#include <iomanip>
Arra::Arra(){

    array = new string[Max];
    cont=0;
    tam=Max;

}

Arra::~Arra(){
    delete[] array;
}

void Arra::expancion(){
    string *nuevo= new string[tam+Max];
    //copiamos lo que tiene el arreglo anterior
    for(size_t i=0;i<cont;i++){
    nuevo[i]=array[i];
    }
    delete[] array; //destruimos nuestro antiguo arreglo uwu
    array = nuevo; //pero que paso papi , aqui revive y mas poderoso
    tam=+5;
}


void Arra::insertafin(string s){
    //comprobacion para clonar todo el arreglo si es necesario
    if(cont==tam){
        expancion();
    }
    array[cont]=s;
    cont++;
}

void Arra::insertaini(string ss){
    if(cont==tam){
        expancion();
    }
        for(int i=cont; i>0; i--){
        array[i]=array[i-1];
        }   
    array[0]=ss;
    cont++;
}

void Arra::muestra(){
    cout<<left;
        for(size_t i=0;i<cont;i++){
        cout<<setw(20)<<array[i]<<endl;
        }

}

size_t Arra::size(){

    return cont;
}