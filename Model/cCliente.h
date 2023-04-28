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

#ifndef _CCLIENTE_H
#define _CCLIENTE_H

class cCliente {
public: 
    
/**
 * @param Nombre
 * @param Apellido
 * @param DNI
 * @param Pago
 * @param ObraSocial
 */
cCliente(string Nombre, string Apellido, const int DNI,Pago pago, ObraSocial obraSocial);
    
~cCliente();
    
string getNombre();
    
/**
 * @param string
 */
void setNombre(string);
    
/**
 * @param Ticket
 */
void SacarTicket();
    
/**
 * @param Pago
 */
void Pagar(Pago pago);
    
void ElegirProducto();
private: 
    string Nombre;
    string Apellido;
    const int DNI;
    Pago pago;
    ObraSocial obraSocial;
};

#endif //_CCLIENTE_H