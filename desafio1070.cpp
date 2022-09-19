#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
   // Declaração de variáveis
    int x, qtd_impar, resto;
    qtd_impar = 0; // inicialização da variável

    // Entradas
    cin >> x;
    // Processamento - Saída
    do {
        resto = x % 2;
        if (resto == 1) {
            cout << x << endl;
            qtd_impar++; // qtd_impar = qtd_impar + 1
        }
        x++;
    } while (qtd_impar < 6);

    return 0;
}