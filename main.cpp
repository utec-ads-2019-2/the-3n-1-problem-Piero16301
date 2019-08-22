#include <iostream>

using namespace std;

int Lluvia(int a){
    while (a!=1){
        if(a%2==0){
            a /= 2;
            cout << a << " ";
        }
        else{
            a = (a*3) + 1;
            cout << a << " ";
        }
    }
    return 1;
}

int main(){
    int numero;
    cin >> numero;
    cout << Lluvia(numero) << "\n";
    return 0;
}