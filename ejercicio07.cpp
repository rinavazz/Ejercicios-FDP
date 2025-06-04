#include <iostream>

using namespace std;

int main(){

    float temperatura;

    cout << "Ingrese la temperatura\n";
    cin >> temperatura; 

    if(temperatura <= 15){

        cout << "La temperatura esta fria\n";

    }else{
        if(temperatura > 15 && temperatura < 25){
            cout << "La temperatura esta templada \n ";


        }else{

            if(temperatura >= 25){
                cout << "La temperatura esta caliente\n";
            }
        }

    }


    return 0;
}