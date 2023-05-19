/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>
#include "cAtienden.h"
#include "cEmpleado.h"
using namespace std;



/**
 * cAtienden implementation
 */

cAtienden::cAtienden(string _Nombre):cEmpleado(_Nombre) {
	this->Nombre = _Nombre;
}
cAtienden::~cAtienden() {

}

void cAtienden::setcliente(cCliente* cliente){
	this->cliente = cliente;
	return;
}


//cAtienden::virtual void LlamarCliente() {}

/**
 * @param Factura
 */
//void cAtienden::virtual float EmitirFactura(void Factura) {}