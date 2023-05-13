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

cAtienden::cAtienden(float _Factura) {
	this->Factura = _Factura;
}
cAtienden::~cAtienden() {

}

void cAtienden::setcliente(cCliente* cliente){

}


//cAtienden::virtual void LlamarCliente() {}

/**
 * @param Factura
 */
//void cAtienden::virtual float EmitirFactura(void Factura) {}