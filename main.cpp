#include <iostream>
#include "Arra.h"
string wow,wow2;
Arra dinamico;

using namespace std;

int main(){
    wow2="lo que sea";
    wow="numero:";
    cout<<"insertaremos al final"<<endl;

        for(size_t i=0;i<8;i++){
        wow=wow+to_string(i+1);
        dinamico.insertafin(wow);
        }
        for (size_t i = 0; i < dinamico.size(); i++)
        {
            cout<<dinamico[i]<<endl;
        }
        cout<<endl<<"aqui insertaremos al inicio"<<endl;
        dinamico.insertaini("elemento nuevo 1");
        dinamico.insertaini("elemento nuevo 2");

        //para imprimir
        for (size_t i = 0; i < dinamico.size(); i++)
        {
            cout<<dinamico[i]<<endl;
        }

    dinamico.~Arra();//no olvidar ponerlo jajatl

 
    return 0;
}