/**
 * Project Untitled
 */


#ifndef _CPRODUCTO_H
#define _CPRODUCTO_H

class cProducto {
public: 
    
void Virtual bool VerificarStock();
protected: 
    string Nombre;
    float Precio;
    int Stock;
    string Marca;
    string Area;
    const int ID;
};

#endif //_CPRODUCTO_H