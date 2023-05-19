/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cMedicamento.h"

/**
 * cMedicamento implementation
 */

 /**
  * @param Nombre
  * @param Precio
  * @param Stock
  * @param Marca
  * @param Area
  * @param ID
  * @param TipoAdmision
  * @param ContenidoNeto
  * @param Dosis
  * @param FechaVencimiento
  */
cMedicamento::cMedicamento(string _Nombre, float _Precio, int _Stock, string _Marca, string _Area, int ID, TipoAdmision _tipoAdmision, float _ContenidoNeto, string _Dosis, cTime _FechaVencimiento) : cProducto(_Nombre, _Precio, _Stock, _Marca, _Area, ID)
{
    this->Nombre = _Nombre;
    this->Precio = _Precio;
    this->Stock = _Stock;
    this->Marca = _Marca;
    this->Area = _Area;
    this->tipoAdmision = _tipoAdmision;
    this->ContenidoNeto = _ContenidoNeto;
    this->Dosis = _Dosis;
    this->FechaVencimiento = _FechaVencimiento;
}

/**
 * @return bool
 */
bool cMedicamento::VerificarStock()
{
    return false;
}

/**
 * @return float
 */
float cMedicamento::getPrecio()
{
    return this->Precio;
}

/**
 * @param float
 * @return void
 */
void cMedicamento::setPrecio(float Precio)
{
    this->Precio = Precio;
    return;
}

cMedicamento::~cMedicamento()
{
}

TipoProducto cMedicamento::getTipoProducto() {
    return TipoProducto.Medicamento;
}