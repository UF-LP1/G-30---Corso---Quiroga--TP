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
    Ticket ticket;
    int Numero;
public: 
    
/**
 * @param Ticket
 * @param Numero
 */
    static int contN;
    cAsistente();
    ~cAsistente();
    Ticket getTicket() { return this->ticket; }
    void setTicket(Ticket ticket);
    
    

/**
 * @param Ticket
 * @param Numero
 */
void GenerarTicket(cCliente* cliente);  //voy a generar el numero que le corresponde dependiendo de a que sector quiero ir. Necesito contadores para cada sector

    
};

#endif //_CASISTENTE_H