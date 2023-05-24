/**
 * Project Untitled
 */
#include <iostream>
#include <string>

#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"
#include "../G30-Corso-Quiroga-TP/TipoMedicamento.h"
#include "../G30-Corso-Quiroga-TP/TipoProducto.h"
#include "../G30-Corso-Quiroga-TP/cFecha.h"
using namespace std;

#ifndef _CMEDICAMENTO_H
#define _CMEDICAMENTO_H

#include "cProducto.h"

class cMedicamento : public cProducto
{
private:
    TipoAdmision tipoAdmision;
    TipoProducto tipoProducto;
    TipoMedicamento tipoMedicamento;
    float ContenidoNeto;
    string Dosis;
    cFecha* FechaVencimiento;

public:
    /**
     * @param Nombre
     * @param Precio
     * @param Stock
     * @param Marca
     * @param ID
     * @param TipoAdmision
     * @param ContenidoNeto
     * @param Dosis
     * @param FechaVencimiento
     */
    cMedicamento(string Nombre, float Precio, int Stock, string Marca, int ID, TipoProducto tipoProducto, TipoMedicamento tipoMedicamento, TipoAdmision tipoAdmision, float ContenidoNeto, string Dosis, cFecha* FechaVencimiento);
    ~cMedicamento();

    TipoAdmision getTipoAdmision();
    TipoMedicamento getTipoMedicamento();
    bool VerificarStock(int Stock);

    float getPrecio();

    /**
     * @param float
     */
    void setPrecio(float Precio);
    int getStock();
    void setStock(int Stock);
};

#endif //_CMEDICAMENTO_H