#include <iostream>
using namespace std;

double Subtotal;
double ISV;
double AcumISV;
double Total;
string ListaProductos; // Vacio sin valor = " "

void AgregarProducto (string Descripcion, int Cantidad, double Precio)
{ 
    //     Valores Acumulables       + 1 Capuccino  L. 40 + ENTER
    //                               + 1 Expesso    L. 30 + ENTER
     ListaProductos = ListaProductos + Descripcion + '\n';
     Subtotal       = Subtotal + (Cantidad * Precio);
     ISV            = Precio * 0.15;                 // ISV no acumula    
     AcumISV        = AcumISV + ISV;      
     Total          = Total + (Subtotal + AcumISV);
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
    cout << "ISV:      [ Lps. " << AcumISV << " ]" <<endl;
    cout << "Total:    [ Lps. " << Total << " ]" <<endl;
   
    cout << endl;
    cout << endl;
    system ("Pause");
}  
