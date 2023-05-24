
#include <iostream>
#include <string>

using namespace std;

#include "Ticket.h"

cTicket::cTicket(TipoTicket _ticket){
	this->ticket = _ticket;
}

void cTicket::setTipoTicket(TipoTicket ticket){
	this->ticket = ticket;
	return;
}

void cTicket::setNumero(int numero){
	this->numero = numero;
	return;
}
