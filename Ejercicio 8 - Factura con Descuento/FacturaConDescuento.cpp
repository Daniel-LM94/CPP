#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  //Entrada
    double Subtotal = 0; 
    double Total = 0;
    double Impuesto = 0.5;
    int Descuento = 0;
    double CalDescuento = 0; //Calculo del Descuento
    double CalImpuesto = 0; //Calculo del Impuesto

    
  //Proceso
    cout << "\n Ingrese el Subtotal de la Factura"<<endl;
    cin >> Subtotal;
    cout << "\n Ingrese el Descuento (0, 10, 15, 20)"<<endl; 
    cin >> Descuento;
    
  //Salida
    Total = Subtotal+(Subtotal*Impuesto);
    cout << endl;
    cout << "Total a pagar es: " <<Total;
    return 0;
}