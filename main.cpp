#include <bits/stdc++.h> 

using namespace std;

int funcionIterativa(int a){
    int longitud = 1;
    while (a != 1){
        a = (a % 2 == 0) ? a/2 : (a * 3) + 1;
        longitud++;
    }
    return longitud;
}


int obtenerMinimo(int n1, int n2) {

    vector <int> longitudes = {};
    int maximo = 0;

    if (n1 < n2 || n1 > n2) {
        if (n1 < n2) {
            while (n1 <= n2) {
                longitudes.push_back(funcionIterativa(n1));
                n1++;
            }
            maximo = *max_element(longitudes.begin(), longitudes.end());
            return maximo;
        } else {
            while (n1 >= n2) {
                longitudes.push_back(funcionIterativa(n1));
                n1--;
            }
            maximo = *max_element(longitudes.begin(), longitudes.end());
            return maximo;
        }
    } else {
        return funcionIterativa(n1);
    }

}

int main() {

    int n1, n2;

    while (scanf("%d %d", &n1, &n2) == 2) {

        cout << n1 << ' ' << n2 << ' ' << obtenerMinimo(n1, n2) << endl;

    }
    
    return 0;

}