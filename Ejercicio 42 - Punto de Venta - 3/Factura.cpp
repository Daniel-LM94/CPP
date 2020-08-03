#include <iostream>
using namespace std;

double Subtotal;
string ListadProductos;

void agregarproducto(string Descripcion, double Precio, int Cantidad)
{ 
     Subtotal = Subtotal + (Cantidad * Precio);
     ListadProductos = ListadProductos + Descripcion + '\n';
}

