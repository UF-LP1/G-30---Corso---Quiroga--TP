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
#include "../Model/TipoProducto.h"

using namespace std;

int main() {

	cEmpleado::cont = 0;   //elemento static
	cAsistente::contN = 0;

	//creo productos
	cPerfumeria* perfume1 = new cPerfumeria("Jabon", 144.99, 80, "Dove", "Perfumeria", 21, 0.0);
	cGolosinas* golosina1 = new cGolosinas("Caramelo", 144.99, 80, "Moggul", "Golosinas", 21);
	cOrtopedia* ortopedia1 = new cOrtopedia("Protesis", 144.99, 80, "Dove", "Ortopedia", 21);
	cMedicamento* medicamento1 = new cMedicamento("Paracetamol", 144.99, 80, "Paracetamol", "Medicamento", 21);

	/*
	cCliente* cliente1 = new cCliente ("Juan", "Garcia", 44665522, "CREDITO", "OSDE");
	cCajero* cajero = new cCajero ("Luis", 001);
	cEPerfumeria* empleadoPerfumeria = new cEPerfumeria("Ana", 023);
	cPerfumeria* perfume1 = new cPerfumeria("Jabon", 144.99, 80, "Dove", "Perfumeria", 21, 0.0);
	cCarrito* carrito = new cCarrito();

	carrito->AgregarProducto(perfume1);
	
	float TOTAL = cajero->Cobrar();

	delete carrito;
	delete perfume1;
	delete empleadoPerfumeria;
	delete cajero;
	delete cliente1;
	*/

	return 0;
}
