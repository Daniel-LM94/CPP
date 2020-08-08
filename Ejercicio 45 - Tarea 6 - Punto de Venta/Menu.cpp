#include <iostream>
using namespace std;

extern void productos (int opcion);
extern void ImprimirFactura ();

void menu()
{
   
 int opcion = 0;

 while (true) 
 {
    system ("cls");
    cout << "******" << endl;
    cout << " MENU " << endl;
    cout << "******" << endl;

    cout << endl;
    cout << "1 - Bebidas Calientes" << endl;
    cout << "2 - Bebidas Frias" << endl;
    cout << "3 - Reposteria" << endl;
    cout << "4 - Imprimir Factura" << endl;
    cout << "0 - Salir" << endl;
    cout << endl;
    cout << "Ingrese una Opcion" << endl;
    cin >> opcion;

    if (opcion == 0)
    {
      break;
    }

    if (opcion == 4)
    { 

      ImprimirFactura ();

    }else{

      productos (opcion); // Se conecta a la Funcion desde Productos.cpp

    }
  } 
}