#include<iostream>
using namespace std;

string nombre   = "Juan";
string apellido = "Perez";
int edad = 18;

string ObtenerNombreCompleto ()
{ 
    return nombre + " " + apellido;
}

int ObtenerEdad ()
{ 
    return edad;
}
