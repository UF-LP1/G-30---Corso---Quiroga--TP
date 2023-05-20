/**
 * Project Untitled
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef _TICKET_H
#define _TICKET_H

enum TipoTicket
{ farmacia_obrasocial, farmacia_particular, PAMI, perfumería, ortopedia };
class cTicket {
private: 
	int numero;
	TipoTicket ticket;
	static int contTicket;
public:
	cTicket(TipoTicket ticket);
	~cTicket();
	TipoTicket getTipoTicket();
	int getnumero();

};
#endif //_TICKET_H