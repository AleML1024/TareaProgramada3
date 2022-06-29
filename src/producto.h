#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto {

    int id;
    string nombreP; // P= Producto
    int existencias;

    public:
    Producto(int id, string nombreP, int existencias);

    int ObtenerId();
    string ObtenerNombreP();
    int ObtenerExistencias();

};

#endif