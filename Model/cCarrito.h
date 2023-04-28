/**
 * Project Untitled
 */


#ifndef _CCARRITO_H
#define _CCARRITO_H

class cCarrito {
public: 
    
/**
 * @param TipoProducto
 * @param Cantidad
 */
void cCarrito(enum TipoProducto, int Cantidad);
    
void AgregarProducto();
    
*cProducto QuitarProducto();
    
void EliminarProducto();
    
void VerTotal();
    
int BuscarProducto();
    
void getTipoProducto();
    
void setTipoProducto();
protected: 
    
void cCarrito();
private: 
    enum TipoProducto;
    int Cantidad;
};

#endif //_CCARRITO_H