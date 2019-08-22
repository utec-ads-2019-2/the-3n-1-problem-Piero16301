#include <iostream>
#include <vector>

using namespace std;

int Lluvia(int a){
    int maximo = 1;
    while (a!=1){
        maximo++;
        if(a%2==0){
            a /= 2;
        }
        else{
            a = (a*3) + 1;
        }
    }
    return maximo;
}

int main(){
    int iteraciones, num_1, num_2;
    vector <int> results;
    cin >> iteraciones;
    for (int i = 0; i < iteraciones; i++) {
        cin >> num_1 >> num_2;
        int maximo = 0;
        results.push_back(num_1);
        results.push_back(num_2);
        while (num_1 <= num_2) {
            int temporal = Lluvia(num_1);
            if (temporal > maximo) {
                maximo = temporal;
            }
            num_1++;
        }
        results.push_back(maximo);
    }
    int iter = 0;
    for (int j = 0; j < iteraciones; j++) {
        for (int i = 0; i < 3; i++) {
            cout << results[iter + i] << ' ';
        }
        iter += 3;
        cout << '\n';
    }
    return 0;
}