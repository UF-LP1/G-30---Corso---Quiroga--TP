/**
 * Project Untitled
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef _TICKET_H
#define _TICKET_H

enum TipoTicket
{ farmacia_obrasocial, farmacia_particular, pami, perfumeria, ortopedia };
class cTicket {
private: 
	int numero;
	TipoTicket ticket;
	static int contTicket;
public:
	cTicket(TipoTicket ticket);
	~cTicket();
	TipoTicket getTipoTicket() { return this->ticket; }
	void setTipoTicket(TipoTicket ticket);
	void setNumero(int numero);
	int getNumero() {return this->numero;}

};
#endif //_TICKET_H