#include <iostream>

using namespace std;

int main(void){
    
    int num1, num2;
    cout<< "ingrese el primer numero:\n";
    cin >> num1;
 
    cout<< "ingrese el segundo numero:\n";
    cin>> num2;

    if(num1 == num2){
    cout<< "los numeros son iguales\n";
    }else 
      if(num1 > num2){
      cout<< num1 << "es mayor que\n" << num2 << ".";
    } else {
        cout << num2 << "es mayor que\n" << num1 << ".";

    }




    return 0;
}

