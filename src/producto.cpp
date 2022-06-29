#include "producto.h"

using namespace std;

Producto::Producto(int id, string nombreP, int existencias)
{
    this->id = id;
    this->nombreP = nombreP;
    this->existencias = existencias;
}

int Producto::ObtenerId()
{
    return this->id;
}

string Producto::ObtenerNombreP()
{
    return this->nombreP;
}

int Producto::ObtenerExistencias()
{
    return this->existencias;
} 