#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

// Declaração de variáveis
    int a, b, resto;

// Entradas
    cin >> a;
    cin >> b;

// Processamento
    if ( a > b ) {
    resto = a % b;
    } else { 
    resto = b % a;
    }

// Saída
    if ( resto == 0 ) {
    cout << "Sao multiplos" << endl;
    } else {
    cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}