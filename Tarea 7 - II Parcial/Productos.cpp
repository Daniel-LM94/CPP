#include <iostream>
#include "Funciones.h"
using namespace std;

// Declarando la Funcion como Externa
void AgregarProducto (string Descripcion, int Cantidad, double Precio);

void productos (int opcion)
{ 
    system ("cls");
    int OpcionProducto = 0;

    switch (opcion)
    {    
    case 1:
    {               
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "Opcion 1 - Capuccino L.40" << endl;
        cout << "Opcion 2 - Expresso  L.30" << endl;
        cout << endl;
        cout << "Ingrese una Opcion" << endl;            
        cin >> OpcionProducto;

        switch (OpcionProducto)
        {
        case 1: 
            
          AgregarProducto ("1 Capuccino L.40", 1, 40);
          break;

        case 2:

          AgregarProducto ("1 Expresso L.30", 1, 30);
          break;
            
        default:
            {  // Abre llaves {} si es mas de 1 linea de codigo! Ejemplo: 1 Cout y 2 break
                
                cout << "** Opcion No Valida **" << endl;
                return;
                break;

            }
        }

        cout << "\n ** Producto Agregado  **" << endl;               
        system ("pause");
        break;                
    }    
    case 2:

        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "Opcion 1 - Capuccino (Frio)  L.35" << endl;
        cout << "Opcion 2 - Mocca (Frio)      L.38" << endl;
        cout << endl;
        cout << "Ingrese una Opcion" << endl;            
        cin >> OpcionProducto;

        switch (OpcionProducto)
        {
        case 1: 
            
          AgregarProducto ("1 Capuccino (Frio) L.35", 1, 35);
          break;

        case 2:

          AgregarProducto ("1 Mocca (Frio) L.38", 1, 38);
          break;
            
        default:
            {  // Abre llaves {} si es mas de 1 linea de codigo! Ejemplo: 1 Cout y 2 break
                
                cout << "** Opcion No Valida **" << endl;
                return;
                break;

            }
        }

        cout << "\n ** Producto Agregado  **" << endl;               
        system ("pause");
        break;

    case 3:

        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "Porcion Revanada" << endl;
        cout << endl;
        cout << "Opcion 1 Pastel Selva Negra  L.45" << endl;
        cout << "Opcion 2 Red Velvet          L.50" << endl;
        cout << "Opcion 3 Napoleon            L.55" << endl;
        cout << endl;
        cout << "Ingrese una Opcion" << endl;            
        cin >> OpcionProducto;

        switch (OpcionProducto)
        {
        case 1: 
            
          AgregarProducto ("1 Pastel Selva Negra L.45", 1, 45);
          break;

        case 2:

          AgregarProducto ("1 Pastel Red Velvet L.50", 1, 50);
          break;

        case 3:

          AgregarProducto ("1 Pastel Napoleon L.55", 1, 55);
          break;  
            
        default:
            {  // Abre llaves {} si es mas de 1 linea de codigo! Ejemplo: 1 Cout y 2 break
                
                cout << "** Opcion No Valida **" << endl;
                return;
                break;

            }
        }

        cout << "\n ** Producto Agregado  **" << endl;               
        system ("pause");
        break;        
    
    default:

        break;
    }
    
}

/* Recordatorio: 
   No COMPILAR 2 veces con el mismo nombre del ejecutable.exe
   la razon es que no se actualizan los cambios; la solucion es:

   1 - Un nuevo nombre para el nuevo archivo.
   2 - Eliminar el ejecutable obsoleto y hacer uno con el mismo nombre.*/