#pragma once
#include <iostream>
#include <string>
#include "../Model/cFarmacia.h"
#include "../Model/cAtienden.h"
#include "../Model/cCajero.h"
#include "../Model/cCarrito.h"
#include "../Model/cCliente.h"
#include "../Model/cEFarmaceutico.h"
#include "../Model/cELimpieza.h"
#include "../Model/cEMostrador.h"
#include "../Model/cEmpleado.h"
#include "../Model/cEOrtopedia.h"
#include "../Model/cEPerfumeria.h"
#include "../Model/cGolosinas.h"
#include "../Model/cMedicamento.h"
#include "../Model/cOrtopedia.h"
#include "../Model/cPerfumeria.h"
#include "../Model/cProducto.h"
#include "../Model/cReceta.h"
#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"
#include "TipoEmpleado.h"
#include "TipoProducto.h"
#include "TipoMedicamento.h"
#include "cFecha.h"


using namespace std;

int main()
{
	// elementos static
	cEmpleado::cont = 0; 
	cAsistente::contN = 0;
	cProducto::contProducto = 0;

	// Creo la farmacia
	cFarmacia* _farmacia = new cFarmacia(false, "Farmacia 1 ", true);

	// creo productos
	cPerfumeria* perfume1 = new cPerfumeria("Jabon", 144.99, 80, "Dove", "Perfumeria", 21, 0.0);
	cGolosinas* golosina1 = new cGolosinas("Caramelo", 144.99, 80, "Moggul", "Golosinas", 21);
	cOrtopedia* ortopedia1 = new cOrtopedia("Protesis", 144.99, 80, "Dove", "Ortopedia", 21);
	cMedicamento* medicamento1 = new cMedicamento("Paracetamol", 144.99, 80, "Paracetamol", "Medicamento", 21);

	// Inserto los productos en la farmacia
	_farmacia->insertarProducto(perfume1);
	_farmacia->insertarProducto(golosina1);
	_farmacia->insertarProducto(ortopedia1);
	_farmacia->insertarProducto(medicamento1);

	// Creo los empleados
	// chequear si estan bien los parametros en los constructores
	cCajero* cajero = new cCajero("Luis");
	cEPerfumeria* empleadoPerfumeria = new cEPerfumeria("Ana");
	cEOrtopedia* empleadoOrtopedia = new cEOrtopedia("Juan");
	cEMostrador* empleadoMostrador = new cEMostrador("Pablo");
	cEFarmaceutico* farmaceutico = new cEFarmaceutico("Clara");

	// inserto los empleados
	_farmacia->insertarEmpleado(cajero);
	_farmacia->insertarEmpleado(empleadoPerfumeria);
	_farmacia->insertarEmpleado(empleadoOrtopedia);
	_farmacia->insertarEmpleado(empleadoMostrador);
	_farmacia->insertarEmpleado(farmaceutico);

	_farmacia->AbrirFarmacia();

	cCliente* cliente1 = new cCliente("Juan", "Garcia", 44665522, "CREDITO", "OSDE");
	cCarrito* carrito = new cCarrito(Medicamento,1);
	// Agrego los productos que quiere comprar el cliente
	cliente1->getCarrito()->AgregarProducto(medicamento1);
	// hago que la farmacia atienda al cliente
	_farmacia->atenderCliente(cliente1);

	delete carrito;
	delete perfume1;
	delete empleadoPerfumeria;
	delete cajero;
	delete cliente1;

	return 0;
}
