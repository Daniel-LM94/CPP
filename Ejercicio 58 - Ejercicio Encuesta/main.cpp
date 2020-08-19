#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string Alumnos[3];
    string Encuesta[3][2] =
    {  
        //,""}, Columna con valor vacio o nulo.
        //         Columna 0                   Columna 1
      {"Llevara Clases el siguiente periodo? ",""}, //,""}, Columna con valor vacio o nulo.
      {"Matricula Nivel 2? "                  ,""},
      {"Matricula Nivel 2? con Lic. Bily? "   ,""}
    };
    
    int Respuestas[3] = {0, 0, 0};
    cout << "\nConteste la encuesta con s o n" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese su Nombre: " << endl;
        cin  >> Alumnos[i];
        cout << endl;

        for (int j = 0; j < 3; j++)
        {
           cout << Encuesta[j][0] << ": ";
           cin  >> Encuesta[j][1];

            if (Encuesta[j][1] == "s")
            {
              Respuestas[j]++;
            }
        }
            cout << endl;           
    }
    
    cout << "Resumen" << endl;
    cout << "Respuesta Pregunta 1 = " << Respuestas[0] << endl;
    cout << "Respuesta Pregunta 2 = " << Respuestas[1] << endl;
    cout << "Respuesta Pregunta 3 = " << Respuestas[2] << endl;
    cout << endl;

    return 0;
}
