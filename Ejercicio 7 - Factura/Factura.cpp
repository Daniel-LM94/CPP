#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  //Entrada
    double Subtotal = 0; 
    double Total = 0;
    double Impuesto = 0.5;

  //Proceso
    cout << "\n Ingrese el Subtotal de la Factura"<<endl;
    cin >> Subtotal;
    Total = Subtotal+(Subtotal*Impuesto);
    cout << endl;

  //Salida
    cout << "Total a pagar es: " <<Total;
    return 0;
}

