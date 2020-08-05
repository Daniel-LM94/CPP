#include <iostream>
using namespace std;

double Subtotal;
string ListaProductos; // Vacio sin valor = " "

void AgregarProducto (string Descripcion, int Cantidad, double Precio)
{ 
    //                               + 1 Capuccino  L. 40 + ENTER
    //                               + 1 Expesso    L. 30 + ENTER
     ListaProductos = ListaProductos + Descripcion + '\n';
     Subtotal = Subtotal + (Cantidad * Precio);
     
}

void ImprimirFactura ()
{ 
    system ("cls");
    cout << "*********" << endl;
    cout << " FACTURA " << endl;
    cout << "*********" << endl;
    cout << endl;

    cout << "Productos" << endl;
    cout << endl;
    cout << ListaProductos << endl;

    cout << endl;
    cout << "Subtotal: [ Lps. " << Subtotal << " ]" <<endl;
    cout << endl;
    cout << endl;
    system ("Pause");
}  
