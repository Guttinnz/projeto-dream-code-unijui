#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    // Declaração de variáveis
    float valor; // dar entrada nos 6 valores que o exercício exige
    int contador; // controlará a entrada de dados
    int positivos; // indicará a quantidade de valores positivos

    // Entradas - Processamento
    positivos = 0;
    contador = 0;
    while (contador < 6) {
        cin >> valor;
        if (valor > 0) {
            positivos++;
        }
        contador++; // contador = contador + 1;
    }

    // Saída
    cout << positivos << " valores positivos" << endl;

    return 0;
}