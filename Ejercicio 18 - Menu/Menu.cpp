#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{ 
 int opcion = 0; 
 while (true){    

    cout << "******" << endl;
    cout << " MENU" << endl;
    cout << "******" << endl;

    cout << endl;
    cout << "1 - Cafe con Granitas" << endl;
    cout << "2 - Reposteria" << endl;
    cout << "0 - Salir" << endl;

    cout << "\n Ingrese una Opcion del Menu" << endl;
    cin >> opcion;

   if (opcion == 1)
    {    
     system ("cls"); 
     cout << "\n Estas en el Menu de Granitas" << endl;
     system ("pause");
    }

    if (opcion == 2)
    {
     system ("cls");
     cout << "\n Estas en el Menu de Reposteria" << endl;
     system ("pause");
    }

     if (opcion == 0)
    {
     break;
    }
  }
      cout << "\n Saliste del Sistema" << endl;
  return 0; 
}