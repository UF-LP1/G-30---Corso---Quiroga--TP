#include <iostream>
#include <string>
#include <cTime>
#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"

using namespace std;
/**
 * Project Untitled
 */


#ifndef _CASISTENTE_H
#define _CASISTENTE_H

class cAsistente {
private:
    enum Ticket;
    int Numero;
public: 
    
/**
 * @param Ticket
 * @param Numero
 */

cAsistente(enum Ticket, int Numero);
~cAsistente();

int getNumero();
    
/**
 * @param int
 */
void setNumero(int Numero);
    
/**
 * @param Ticket
 * @param Numero
 */
void GenerarTicket(enum Ticket, int Numero);
protected: 
    
};

#endif //_CASISTENTE_H