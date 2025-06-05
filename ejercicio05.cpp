#include <iostream>

using namespace std;

int main(){

    float monto, descuento, total;
    
    cout << "Ingrese el monto de su compra\n"; 
    cin >> monto;

    if(monto >= 100 ){

        descuento = monto * 0.10;
        total = monto - descuento; 

        cout << "Felicidades! Usted ha obtenido un descuento del 10%\n";
        
        cout << "Total a pagar: \n" << total << " $";

    }else{
        if(monto < 100){

            total = monto;

            cout << "No se aplica descuento\n";
            cout << "Total a pagar:\n" << total << " $";



        }
    }


    return 0;
}
