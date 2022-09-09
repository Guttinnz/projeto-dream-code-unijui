#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    // Declaração de variáveis
    int v_inteiro, resto, contador;
    int qtd_pares, qtd_impares;
    int qtd_positivos, qtd_negativos;
    qtd_pares = 0; // inicialização da varíavel
    contador = 0; // inicialização da varíavel
    qtd_positivos = 0; // inicialização da varíavel
    qtd_negativos = 0; // inicialização da varíavel

    // Entradas - Prodessamento
    while (contador < 5) {
        cin >> v_inteiro;
        resto = v_inteiro % 2;
        if (resto == 0) {
            qtd_pares++; // qtd_parea = qtd_pares + 1
        }
        if (v_inteiro > 0) {
            qtd_positivos++; // qtd_positivos = qtd_positivos + 1
        }
        if (v_inteiro < 0) {
            qtd_negativos++; // qtd_negativos = qtd_negativos + 1
        }
        contador++; // contador = contador + 1;
    }
    qtd_impares = 5 - qtd_pares;

    // Saída
   cout << qtd_pares << " valor(es) par(es)" << endl;
   cout << qtd_impares << " valor(es) impar(es)" << endl;
   cout << qtd_positivos << " valor(es) positivo(s)" << endl;
   cout << qtd_negativos << " valor(es) negativo(s)" << endl;

        return 0;
}
