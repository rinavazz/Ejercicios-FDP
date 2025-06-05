#include <iostream>
#include <string>

using namespace std;

int main (){
    string contrasenacorrecta = "oreo23";
    string contrasenaingresada;

    do{
        cout << "ingrese la contraseña";
        cin >> contrasenaingresada;

       
            if(contrasenaingresada != contrasenacorrecta){
                cout << "contraseña incorrecta, intente de nuevo.\n";

            }
        
    } while (contrasenaingresada != contrasenacorrecta);
    cout << "contraseña correcta, acceso concedido" << endl;

    return 0; 
}