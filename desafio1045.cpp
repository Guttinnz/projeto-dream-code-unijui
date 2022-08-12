#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
// Declaração de variáveis
    double v1, v2, v3;
    double soma_bc, a_quadrado, soma_bc_quadrado;
    double a, b, c;

// Entradas
    cin >> v1;
    cin >> v2;
    cin >> v3;

// Processamento
    if ( (v1 >= v2) && (v1 >= v3) ) {
    a = v1;
    if (v2 > v3) {
    b = v2;
    c = v3;
    }
    else {
    b = v3;
    c = v2;
    }
    }
    else {
    if (v2 > v3) {
    a = v2;
    if (v1 > v3) {
    b = v1;
    c = v3;
    }
    else {
    b = v3;
    c = v1;
    }
    }
    else {
    a = v3;
    if (v1 > v2) {
    b = v1;
    c = v2;
    }
    else {
    b = v2;
    c = v1;
    }
    }
    }

    soma_bc = b + c;
    a_quadrado = pow (a, 2); // (a a)
    soma_bc_quadrado = pow (b, 2) + pow (c, 2); // (b b) + (c * c)

// Saídas
    if (a >= soma_bc) {
    cout << "NAO FORMA TRIANGULO" << endl;
    }
    else {
    if ( a_quadrado == soma_bc_quadrado ) {
    cout << "TRIANGULO RETANGULO" << endl;
    }
    if ( a_quadrado > soma_bc_quadrado ) {
    cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if ( a_quadrado < soma_bc_quadrado ) {
    cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if ( (a == b) && (b == c) ) {
    cout << "TRIANGULO EQUILATERO" << endl;
    }
    else {
    if ( (a == b) || (a == c) || (b == c) ) {
    cout << "TRIANGULO ISOSCELES" << endl;
    }
    }
    }

    return 0;
}