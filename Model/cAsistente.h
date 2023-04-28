#include <iostream>
#include <string>


using namespace std;
/**
 * Project Untitled
 */


#ifndef _CASISTENTE_H
#define _CASISTENTE_H

class cAsistente {
public: 
    
/**
 * @param Ticket
 * @param Numero
 */
void cAsistente(enum Ticket, int Numero);
    
int getNumero();
    
/**
 * @param int
 */
void setNumero(void int);
    
/**
 * @param Ticket
 * @param Numero
 */
void GenerarTicket(void Ticket, void Numero);
protected: 
    
void cAsistente();
private: 
    enum Ticket;
    int Numero;
};

#endif //_CASISTENTE_H