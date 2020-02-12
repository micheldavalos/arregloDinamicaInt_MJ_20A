#ifndef ARREGLODINAMICOINT_H
#define ARREGLODINAMICOINT_H


#include <iostream>
using namespace std;

class ArregloDinamicoInt
{
    int *arreglo;
    size_t cont;
    size_t tam;
    const static size_t MAX = 100000;
public:
    ArregloDinamicoInt();
    ArregloDinamicoInt(size_t t, int init);
    ~ArregloDinamicoInt()
    {
        delete []arreglo;
    }
    void insertar_final(const int &v);
    void insertar_inicio(const int &v);

    int& operator[](size_t p)
    {
        return arreglo[p];
    }
    void operator+(int v)
    {
        insertar_final(v);
    }
    void operator<<(int v)
    {
        insertar_inicio(v);
    }

    size_t size()
    {
        return cont;
    }
};

#endif // ARREGLODINAMICOINT_H
