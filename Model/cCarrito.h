/**
 * Project Untitled
 */

#include <iostream>
#include <string>
#include <cTime>
#include "../Model/cProducto.h"
#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"


using namespace std;

#ifndef _CCARRITO_H
#define _CCARRITO_H

class cCarrito {
private:
    static int MAX_ID;
    const int ID;
    int Cantidad;
    cProducto** _listaProductos;


public: 
    
/**
 * @param TipoProducto
 * @param Cantidad
 */
    cCarrito(int _Cantidad);
    ~cCarrito();    
    void AgregarProducto();
    int getMAXID() { return this->MAX_ID; }
    int getID() { return this->ID; }
    int getcantidad() { return this->Cantidad; }
    
//cProducto* QuitarProducto();
    
    void EliminarProducto();
    
    float VerTotal();
    
    int BuscarProducto();
    
    void getTipoProducto();
    
    void setTipoProducto();
};

#endif //_CCARRITO_H