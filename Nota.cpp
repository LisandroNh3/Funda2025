#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese la calificacion (0-100): ";
    cin >> nota;

    // Validar que la nota esté en el rango permitido
    if (nota < 0 || nota > 100) {
        cout << "Calificacion fuera de rango." << endl;
        return 0;
    }

    // Determinar la calificación en letra
    switch (nota / 10) {
        case 10: 
        case 9:
            cout << "La calificacion en letra es: A" << endl;
            break;
        case 8:
            if (nota >= 85)
                cout << "La calificacion en letra es: B" << endl;
            else
                cout << "La calificacion en letra es: C" << endl;
            break;
        case 7:
            if (nota >= 75)
                cout << "La calificacion en letra es: D" << endl;
            else
                cout << "La calificacion en letra es: E" << endl;
            break;
        default:
            cout << "La calificacion en letra es: F" << endl;
    }

    return 0;
}
