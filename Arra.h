#ifndef ARRA_H_INCLUDED
#define ARRA_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Arra
{
private:
    string *array;
    size_t tam;
    size_t cont;
    const static size_t Max=4;
    void expancion();
    
public:

    void insertafin(string s);
    void insertaini(string s);
    void muestra();
    Arra();
    ~Arra();
    size_t size();

    string operator[](size_t p)
    {
        return array[p];
    }

};
#endif