#include <iostream>
using namespace std;

extern void agregarproducto(string Descripcion, double Precio, int Cantidad);

void productos (int opcion)
{ 
    system ("cls");
    int OpcionProducto = 0;

    switch (opcion)
    {
    case 1:
        
        while (true)
        {
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;
            cout << "Opcion 1 - Capuccino" << endl;
            cout << "Opcion 2 - Expresso" << endl;            
            cin >> OpcionProducto;

            switch (OpcionProducto)
            {
            case 1:
                agregarproducto ("Capuccino", 1, 40);
                break;

            case 2:
                agregarproducto ("Expresso", 1, 30);
                break;
            
            default:
                 cout << "Opcion No Valida" << endl;
                break;
            }
        }
        

        cout << "Bebidas Calientes" << endl;
        cout << "*****************" << endl;
        system ("pause");
        break;

    case 2:

        cout << "Bebidas Frias" << endl;
        cout << "*****************" << endl;
        system ("pause");
        break;

    case 3:

        cout << "Reposteria" << endl;
        cout << "*****************" << endl;
        system ("pause");
        break;        
    
    default:

        break;
    }
}