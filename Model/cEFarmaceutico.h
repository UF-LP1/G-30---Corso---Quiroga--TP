/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"
#include "../G30-Corso-Quiroga-TP/TipoEmpleado.h"

using namespace std;

#ifndef _CEFARMACEUTICO_H
#define _CEFARMACEUTICO_H

#include "cAtienden.h"


class cEFarmaceutico: public cAtienden {

protected:
    string Nombre;

    
public: 
    
/**
 * @param Nombre
 * @param ID
 */
    cEFarmaceutico(string Nombre, int ID, cCliente* cliente);
    ~cEFarmaceutico();   
    string getNombre() { return this->Nombre; }
    void setNombre(string Nombre);
    void LlamarCliente(cCliente* cliente);
    
    
    float AplicarDescuento(ObraSocial obraSocial, float Monto);
    float EmitirFactura(cCliente* cliente);

   

    
/**
 * @param string
 */
  

};

#endif //_CEFARMACEUTICO_H