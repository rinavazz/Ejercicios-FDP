#include <iostream>

using namespace std;

int main (){
    int opcion;

    do{
        cout << "\n----------MENU INTERACTIVO----------" << endl;
        cout << "1. saludar" << endl;
        cout << "2. mostrar un mensaje" << endl;
        cout << "3. sorpresa" << endl;
        cout << "4. salir" << endl;
        cout << "seleccione el numero de la opcion que desee";
        cin >> opcion;

        switch (opcion) {
            case 1:
            cout << "holis" << endl;
            break;
            case 2:
            cout << "estudia para el parcial" << endl;
            break;
            case 3:
            cout << "ni que fuera tu cumpleaños"<< endl;
            break;
            case 4:
            cout << "saliendo del programa..." << endl;
            break;
            default:
            cout << "opcion invalida" << endl;


        }

    }while (opcion !=4);
    
    return 0;
}