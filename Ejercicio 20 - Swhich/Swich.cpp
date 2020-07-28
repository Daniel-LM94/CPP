#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{ 
    int opcion = 0;
    cout << "Ingrese una Opcion" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
     
       cout << "Escojiste 1" <<endl;
       cout << "Segunda linea opcion 1" <<endl;
       break;
    
    case 2:
       cout << "Escojiste 2" <<endl;
       break;

    case 3:
       cout << "Escojiste 3" <<endl;
       break;

    default:
       cout << "Ingrese una Opcion entre 1 y 3" <<endl;
       break;
    }
    return 0; 
}