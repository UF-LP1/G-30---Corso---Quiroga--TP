/**
 * Project Untitled
 */

#include <iostream>
#include <string>
#include <cTime>
#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"

using namespace std;

#ifndef _CCARRITO_H
#define _CCARRITO_H

class cCarrito {
public: 
    
/**
 * @param TipoProducto
 * @param Cantidad
 */
cCarrito(enum TipoProducto, int Cantidad);
    
void AgregarProducto();
    
//cProducto* QuitarProducto();
    
void EliminarProducto();
    
void VerTotal();
    
int BuscarProducto();
    
void getTipoProducto();
    
void setTipoProducto();
protected: 
    
~cCarrito();
private: 
    enum TipoProducto;
    int Cantidad;
};

#endif //_CCARRITO_H