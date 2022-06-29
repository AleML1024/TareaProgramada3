#include "tienda.h"


Tienda::Tienda(string nombreT, string direccionI, string direccionF, string telefono)
{
     this->nombreT = nombreT;
     this->direccionI = direccionI;
     this->direccionF = direccionF;
     this->telefono = telefono;
}

Tienda::~Tienda()
{
    
}

string Tienda::ObtenerNombreT()
{
    return this->nombreT;
}

string Tienda::ObtenerDireccionI()
{
    return this->direccionI;
}

string Tienda::ObtenerDireccionF()
{
    return this->direccionF;
}

string Tienda::ObtenerTelefono()
{
    return this->telefono;
}


