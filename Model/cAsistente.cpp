/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cAsistente.h"
#include "cCliente.h"

/**
 * cAsistente implementation
 */

 /**
  * @param Ticket
  * @param Numero
  */
cAsistente::cAsistente(Ticket _ticket, int _Numero)
{
    this->Numero = _Numero;
    this->Numero = cAsistente::contN;
    cAsistente::contN++;
}

/**
 * @return int
 */


/**
 * @param int
 * @return void
 */


void cAsistente::setTicket(Ticket ticket){
    this->ticket = ticket;
    return;
}

/**
 * @param Ticket
 * @param Numero
 * @return void
 */

 // Chequeen esto
void cAsistente::GenerarTicket(cCliente* cliente)
{
    if (TipoTicket::PAMI == cliente->getTipoTicket()) {
        if (cliente->getObraSocial() = !PAMI)
            cout << "error obra social" << endl;
    }
    else {
        
    }

    cTicket ticketcliente = new cTicket(cliente->getTipoTicket());
    cliente->setTicket(ticketcliente);
}

cAsistente::~cAsistente() {

}

void cAsistente::setNumero(int Numero){
    this->Numero = Numero;
    return;
}
