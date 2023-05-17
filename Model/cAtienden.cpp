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

cAtienden::cAtienden(string _Nombre, int _ID):cEmpleado(_Nombre, _ID) {
	
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