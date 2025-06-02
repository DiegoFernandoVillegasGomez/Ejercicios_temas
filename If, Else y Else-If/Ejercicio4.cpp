#include <iostream>
using namespace std;

int main() {
//Declaramos variables
    int nota;

    //Pedimos al usuario ingresar una nota
    cout << "Ingrese su nota (1 a 10): ";
    cin >> nota;

    //Veirificar si paso o no la materia
    if (nota == 10) {
        cout << "Excelente, usted ha aprobado perfectamente la materia." << endl;
    } else if (nota == 9) {
        cout << "Muy bien, usted ha aprobado con un desempeño destacado." << endl;
    } else if (nota == 8) {
        cout << "Bien, usted ha aprobado con una buena nota." << endl;
    } else if (nota == 7) {
        cout << "Satisfactorio, usted ha aprobado correctamente la materia." << endl;
    } else if (nota == 6) {
        cout << "Justo, usted ha aprobado por poco." << endl;
    } else if (nota == 5) {
        cout << "Usted no aprobó la materia. Le faltó un poco más de esfuerzo." << endl;
    } else if (nota == 4) {
        cout << "Usted no aprobó. Nivel insuficiente." << endl;
    } else if (nota == 3) {
        cout << "Desempeño bajo. No aprobó la materia." << endl;
    } else if (nota == 2) {
        cout << "Nota muy baja. No aprobó la materia." << endl;
    } else if (nota == 1) {
        cout << "Lo sentimos, esta nota es extremadamente baja. No aprobó." << endl;
    } else {
        cout << "Número no válido. Ingrese una nota entre 1 y 10." << endl;
    }

    return 0;
}
