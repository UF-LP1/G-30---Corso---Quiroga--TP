/**
 * Project Untitled
 */

#include <iostream>
#include <string>


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
void cCliente(string Nombre, string Apellido, const int DNI, enum Pago, enum ObraSocial);
    
void cCliente();
    
string getNombre();
    
/**
 * @param string
 */
void setNombre(void string);
    
/**
 * @param Ticket
 */
void SacarTicket(void Ticket);
    
/**
 * @param Pago
 */
void Pagar(void Pago);
    
void ElegirProducto();
private: 
    string Nombre;
    string Apellido;
    const int DNI;
    enum Pago;
    enum ObraSocial;
};

#endif //_CCLIENTE_H