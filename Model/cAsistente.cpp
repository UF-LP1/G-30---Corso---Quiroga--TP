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
cAsistente::cAsistente(enum _Ticket, int _Numero) {
    this->Numero = _Numero;

}

/**
 * @return int
 */
int cAsistente::getNumero() {
    return this-> Numero;
}

/**
 * @param int
 * @return void
 */
void cAsistente::setNumero(int Numero) {
    this->Numero = Numero;
}

/**
 * @param Ticket
 * @param Numero
 * @return void
 */
void cAsistente::GenerarTicket(enum Ticket, int Numero) {
    return;
}

cAsistente::~cAsistente() {

}