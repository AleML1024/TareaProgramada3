#include "producto.h"
#include "tienda.h"

#include <iostream>
#include <string>
#include <fstream>
#include <exception>


using namespace std;

int main() {
    char nombreT[15];
    char direccionI[24];
    char direccionF[24];
    char telefono[8];
    
    cout << "Ingrese nombre de la tienda: ";
    cin >> nombreT; 
    cout << "Ingrese dirección de internet de la tienda: ";
    cin >> direccionI; 
    cout << "Ingrese dirección física de la tienda (sin espacios): ";
    cin >> direccionF; 
    cout << "Ingrese número telefónico de la tienda: ";
    cin >> telefono; 

    Tienda *tienda = new Tienda(nombreT, direccionI, direccionF, telefono); 

    string agregarProductos;

    int id = 0;
    char nombreProducto[20];
    int existencias;

    cout << "¿Desea agregar productos a la tienda?  'Si' 'No'";
    cin >> agregarProductos;
    
    if(agregarProductos == "Si")
    {
        while(agregarProductos == "Si")
    {
        id ++;
        cout << "Ingrese nombre del producto: ";
        cin >> nombreProducto;
        
            while (cout << "Ingrese el número de existencias :" && !(cin >> existencias)) 
        {
            cin.clear(); 
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); 
            cout << "Dato invalido. Porfavor digite un número.\n";
        }
       
        Producto *producto = new Producto(id, nombreProducto, existencias);
        tienda->AgregarProducto(producto);

        cout << "¿Desea agregar más productos a la tienda?  'Si' 'No'";
        cin >> agregarProductos;
    }
    }else if(agregarProductos == "No")
    {
        cout << "Saliendo del sistema y generando archivo...";
    }
    
    ofstream archivoDeSalida;
        archivoDeSalida.open("archivo_prueba.dat", ios::out|ios::binary);

        if (!archivoDeSalida.is_open())
        {
            cerr << "No se pudo abrir archivo archivo_prueba.dat para escribir los datos";
            
        }else{
            tienda->GuardarArchivo(&archivoDeSalida);

            archivoDeSalida.close();

        }

        delete tienda;

        


}