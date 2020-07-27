#include <iostream>
using namespace std;

int main(int argc, char const *argv[])

{
    int NumeroSecreto = 7;
    int Numero;

    cout << "ingrese un numero : ";
    cin >> Numero;
    
    cout << endl;

    if (Numero == NumeroSecreto)
    {
    cout << "Adivinaste el Numero Secreto es : " << NumeroSecreto <<endl;
    } else
    {
    cout << "Lo Siento No Adivinaste" <<endl;
    }
    
    return 0;
}
