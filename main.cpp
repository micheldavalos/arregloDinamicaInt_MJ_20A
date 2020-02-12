#include <iostream>
#include "arreglodinamicoint.h"
using namespace std;

void modificar(int *a)
{
    (*a)++;
}

int main()
{
    ArregloDinamicoInt a(15, 3);
//    a.insertar_final(10);
//    a.insertar_final(20);

    for (size_t i = 0; i < 10; i++) {
        a.insertar_final(i);
    }
    a.insertar_inicio(-1);
    a.insertar_inicio(-2);
    a + 500;
    a << -100;

    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }

//    int a = 12;
//    cout << a << endl;
//    modificar(&a);
//    cout << a << endl;


//    int *b = new int;
//    b[2] = 10;

//    cout << a << " " << &a << endl;
//    cout << b << " " << *(b+2) << endl;

//    delete b;

    return 0;
}
