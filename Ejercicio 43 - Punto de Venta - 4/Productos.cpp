#include <iostream>
using namespace std;

// Declarando la Funcion como Externa
extern void AgregarProducto (string Descripcion, int Cantidad, double Precio);

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
        cout << "Opcion 1 - Capuccino" << endl;
        cout << "Opcion 2 - Expresso" << endl;
        cout << endl;
        cout << "Ingrese una Opcion" << endl;            
        cin >> OpcionProducto;

        switch (OpcionProducto)
        {
        case 1: 
            
          AgregarProducto ("1 Capuccino L.40", 1, 40);
          break;

        case 2:

          AgregarProducto ("1 Expresso  L.30", 1, 30);
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
        cout << "*****************" << endl;
        system ("pause");
        break;

    case 3:

        cout << "REPOSTERIA" << endl;
        cout << "*****************" << endl;
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