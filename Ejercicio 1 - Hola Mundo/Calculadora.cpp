#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int D1, D2, SUM, RES, MUL, DIV;

    cout << " Bienvenido digite los valores a calcular"<<endl;
    cout << " Suma - Resta - Multiplicasion - Divicion"<<endl;
    cout << " Valor 1 :";
    cin  >> D1;  
    cout << " Valor 2 :";
    cin  >> D2;

    SUM = D1+D2;
    RES = D1+D2;
    MUL = D1+D2;
    DIV = D1+D2;
    
    cout << " Resultados";
    cout << "\n           Suma ["<<SUM<<"]    gResta [" <<RES<<"]"<<endl;
    cout << "\n Multiplicasion ["<<MUL<<"] Divicion [" <<DIV<<"]"<<endl;
    return 0;
}
