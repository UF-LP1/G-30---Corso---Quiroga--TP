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
    cAsistente(Ticket _ticket, int _Numero);
    ~cAsistente();
    int getNumero() { return this->Numero; }
    void setNumero(int Numero);
    Ticket getTicket() { return this->ticket; }
    void setTicket(Ticket ticket);
    
    
/**
 * @param int
 */
void setNumero(int Numero);
    
/**
 * @param Ticket
 * @param Numero
 */
int GenerarTicket(enum Ticket, int Numero);  //voy a generar el numero que le corresponde dependiendo de a que sector quiero ir. Necesito contadores para cada sector

    
};

#endif //_CASISTENTE_H