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

    cAsistente(enum _Ticket, int _Numero);
    ~cAsistente();
    int getNumero() { return this->Numero; }
    static int contN;
    
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