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
    const int MAX= 100;  //Maxima cantidad de productos en el carrito
    int ID;
    int contProducto;
    cProducto** _listaProductos;


public: 
    
/**
 * @param TipoProducto
 * @param Cantidad
 */
    cCarrito();
    ~cCarrito();    
    void AgregarProducto();
    int getMAXID() { return this->MAX; }
    int getID() { return this->ID; }
    //int getcantidad() { return this->Cantidad; }
    
//cProducto* QuitarProducto();
    
    bool EliminarProducto(int ID);
    
    float VerTotal();
    
    int BuscarProducto(int ID);
    
    void getTipoProducto();
    
    void setTipoProducto();
};

#endif //_CCARRITO_H