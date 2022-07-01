#include "tienda.h"


Tienda::Tienda()
{
     
}

Tienda::~Tienda()
{
    for (Producto *producto : this->productos)
    {
        delete producto;
    }
}

void Tienda::AgregarProducto(Producto *nuevoProducto)
{
    this->productos.push_back(nuevoProducto);
}

void Tienda::GuardarArchivo(ostream *streamSalida)
{
    for(Producto *producto : this->productos)
    {
        streamSalida->write((char *)producto, sizeof(Producto));
    }
}

void Tienda::CargarArchivo(istream *streamEntrada)
{
    // Calcule cantidad de registros
    streamEntrada->seekg( 0, std::ios::end );
    int cantidadBytesEnArchivo = streamEntrada->tellg();
    int cantidadProductos = cantidadBytesEnArchivo / sizeof(Producto);

    // Leer cada producto
    streamEntrada->seekg( 0, std::ios::beg ); // Empezar desde el principio del archivo
    for (int indice = 0; indice < cantidadProductos; indice++)
    {
        Producto *producto = new Producto();
        streamEntrada->read((char *)producto, sizeof(Producto)); // variable para guardar y cuántos bytes leo

        this->AgregarProducto(producto);
    }

}

    ostream& operator << (ostream &o, const Tienda *tienda)
    {
        o << "Planilla: " << std::endl;

        for (Producto *producto : tienda->productos)
        {
            o << producto << endl;
        }

        return o;
    }
    


