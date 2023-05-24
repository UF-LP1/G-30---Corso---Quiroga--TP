/**
 * Project Untitled
 */
#include <iostream>
#include <string>

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
cMedicamento::cMedicamento(string _Nombre, float _Precio, int _Stock, string _Marca,  int _ID, TipoProducto _tipoProducto, TipoMedicamento _tipoMedicamento, TipoAdmision _tipoAdmision, float _ContenidoNeto, string _Dosis, cFecha* _FechaVencimiento) : cProducto(_Nombre, _Precio, _Stock, _Marca, _ID, _tipoProducto)
{
    this->Nombre = _Nombre;
    this->Precio = _Precio;
    this->Stock = _Stock;
    this->Marca = _Marca;
    this->tipoProducto = _tipoProducto;
    this->tipoMedicamento = _tipoMedicamento;
    this->tipoAdmision = _tipoAdmision;
    this->ContenidoNeto = _ContenidoNeto;
    this->Dosis = _Dosis;
    this->FechaVencimiento = _FechaVencimiento;
}

/**
 * @return bool
 */
bool cMedicamento::VerificarStock(int Stock)
{
     bool queda= false;
    if(this->Stock>0)
        queda=true;
    
    return queda;
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
/**
 * @return int
 */
int cMedicamento::getStock(){
    return this->Stock;
}
/**
 * @param int
 * @return void
 */
void cMedicamento::setStock(int Stock) {
    this->Stock = Stock;
    return;
}
cMedicamento::~cMedicamento()
{
}

