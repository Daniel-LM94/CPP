#include<iostream>
using namespace std;

int sumar()
    { 
      return 5 + 7;
    }

// Nombre Completo
string NomCompleto()
{ 
   string Nombre   = "Pedro";
   string Apellido = "Alvarado";
   return Nombre + " " + Apellido;
}   

int main(int argc, char const *argv[])
{
    cout << endl;
    int resultado = sumar();
    cout <<"Funcion Suma = " << resultado << endl ;

    cout << endl;
    cout << endl;   
    
    string NOMyAPELL = NomCompleto();
    cout << "Funcion Nombre Completo = " << NOMyAPELL << endl;

    cout << endl;
    cout << endl;

    return 0;
}
