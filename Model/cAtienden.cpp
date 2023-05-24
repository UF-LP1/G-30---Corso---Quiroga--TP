/**
 * Project Untitled
 */
#include <iostream>
#include <string>

#include "cAtienden.h"

using namespace std;



/**
 * cAtienden implementation
 */

cAtienden::cAtienden(string _Nombre, cCliente* _cliente):cEmpleado(_Nombre) {
	this->Nombre = _Nombre;
	this->cliente = _cliente;
}
cAtienden::~cAtienden() {

}

void cAtienden::setcliente(cCliente* cliente) {
	this->cliente = cliente;
	return;
}


void cAtienden:: LlamarCliente(cCliente* cliente) {

}

void cAtienden::setnumeroAtender(int numeroAtender){
	this->numeroAtender = numeroAtender;
	return;
}

float cAtienden:: EmitirFactura(cCliente* cliente) {
}