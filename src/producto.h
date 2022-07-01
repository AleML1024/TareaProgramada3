#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <cstring>
#include <iostream> 

using namespace std;

class Producto {

    int id;
    char nombreP[20]; // P= Producto
    int existencias;

    public:
    Producto(int id, string nombreP, int existencias);
    Producto();
    
    friend ostream& operator << (ostream &o, const Producto *producto);

};

#endif