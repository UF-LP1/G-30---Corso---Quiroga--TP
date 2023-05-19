/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cAsistente.h"

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
int cAsistente::getNumero()
{
    return this->Numero;
}

/**
 * @param int
 * @return void
 */
void cAsistente::setNumero(int Numero)
{
    this->Numero = Numero;
}

/**
 * @param Ticket
 * @param Numero
 * @return void
 */

 // Chequeen esto
int cAsistente::GenerarTicket(Ticket _ticket, int Numero)
{
    return _ticket;
}

cAsistente::~cAsistente() {

}