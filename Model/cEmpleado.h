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

#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H

class cEmpleado {
protected: 
    string Nombre;
    int ID;
    

public:
    cEmpleado(string _Nombre);
    ~cEmpleado();
    string getNombre() { return this->Nombre; }
    int getID() { return this->ID; }
    static int cont;
};

#endif //_CEMPLEADO_H