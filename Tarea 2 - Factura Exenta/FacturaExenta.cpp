#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  //Entrada
    double Subtotal = 0;   
    double Total = 0;
    double Impuesto = 0.5;
    int Descuento = 0;
    double CalDescuento = 0; //Calculo del Descuento
    double CalImpuesto = 0;  //Calculo del Impuesto
    char FacturaExen;        //Factura Exenta

  //Proceso
    cout << "\n Ingrese el Subtotal de la Factura" << endl;
    cin  >> Subtotal;
    cout << "\n Ingrese el Descuento (0, 10, 15, 20)" << endl; 
    cin  >> Descuento;
    cout <<"Su Factura esta Exenta S (SI) / N (NO)? \n";
    cin  >> FacturaExen;
    
    if (FacturaExen == 'S' || FacturaExen == 's')
    {
  
    CalDescuento = (Subtotal*Descuento) / 100;
    CalImpuesto  = 0;     
    Total        =  Subtotal-CalDescuento+CalImpuesto;    
    cout << endl;

  //Salida
    cout << "Total a pagar es: " <<Total << " (ISV Exento)"<< endl;

    } else //Alternativa
    
    if(FacturaExen == 'N' || FacturaExen == 'n')
    {
    
    CalDescuento = (Subtotal*Descuento) / 100;
    CalImpuesto  = (Subtotal-CalDescuento) * Impuesto;     
    Total        =  Subtotal-CalDescuento+CalImpuesto;    
    cout << endl;

  //Salida
    cout << "Total a pagar es: " <<Total;
    return 0;
    }
}