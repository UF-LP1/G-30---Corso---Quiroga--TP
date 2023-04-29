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
#include "../Model/TipoProducto.h"
using namespace std;

#ifndef _CFARMACIA_H
#define _CFARMACIA_H

class cFarmacia {
public: 
    
/**
 * @param Fecha
 * @param Abierto
 * @param Nombre
 * @param Perfumeria
 * @param Ortopedia
 * @param Limpio
 * @param Producto
 */
cFarmacia(cTime Fecha, bool Abierto, string Nombre, enum Perfumeria, enum Ortopedia, bool Limpio, string Producto);
    
bool AbrirFarmacia();
    
bool CerrarFarmacia();
    
bool getAbierto();
    
/**
 * @param bool
 */
void setAbierto(bool Abierto);
    
/**
 * @param Producto
 */
void SeleccionarProducto(string Producto);
protected: 
    
~cFarmacia();
private: 
    cTime Fecha; //VER
    bool Abierto;
    string Nombre;
    bool Limpio;
    string Producto;
};

#endif //_CFARMACIA_H