#ifndef TIENDA_H
#define TIENDA_H
#include <string>
#include "producto.h"

using namespace std;

class Tienda {
    string nombreT; //T = Tienda
    string direccionI; //I = Internet
    string direccionF; //F = Fisica
    string telefono; 

    public:
    Tienda(string nombre, string direccionI, string direccionF, string telefono);
    ~Tienda();

    string ObtenerNombreT();
    string ObtenerDireccionI();
    string ObtenerDireccionF();
    string ObtenerTelefono(); 
};


#endif 