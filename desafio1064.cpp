#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double valor;
    int n_positivos = 0;
    double soma_positivos = 0;
    double media;


    for(int cont = 1; cont <= 6; cont=cont+1){
        cin >> valor;
        if(valor>0){
            n_positivos = n_positivos + 1;
            soma_positivos = soma_positivos + valor;
        }
    }
    cout << n_positivos << " valores positivos" << endl;
    media = soma_positivos/n_positivos;
    cout << media << endl;

    return 0;
}