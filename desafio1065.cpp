#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    // Declaração de variáveis
    int v_inteiro, qtd_pares, resto, contador;
    v_inteiro = 0;
    qtd_pares = 0;
    resto = 0;
    contador = 0;

    // Entradas
    do {
        cin >> v_inteiro;
        resto = v_inteiro % 2;
        if (resto == 0) {
            qtd_pares++;
        }
        contador++;
    } while (contador < 5);

    // Saída
    cout << qtd_pares << " valores pares" << endl;

    return 0;
}
