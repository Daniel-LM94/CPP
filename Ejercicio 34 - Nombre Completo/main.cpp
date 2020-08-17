#include <iostream>
using namespace std;

string NombreCompleto (string nombre, string apellido)
{ 
    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{   
    string PrimerNombre = "";
    string PrimerApellido = "";

    cout << endl;
    cout << "Ingrese su Primer Nombre: ";
    cin >> PrimerNombre;
    cout << "Ingrese su Primer Apellido: ";
    cin >> PrimerApellido;
    cout << endl;
    
    cout << "Nombre Completo: " 
         << NombreCompleto (PrimerNombre, PrimerApellido) <<endl;
    cout << endl;
    cout << endl;
    
    return 0;
}


