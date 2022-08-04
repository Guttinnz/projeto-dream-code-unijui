#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

// Declaração de variáveis
float a, b, c, perimetro, area;
int e_triangulo;
float soma_bc, soma_ac, soma_ab;
float absoluto_bc, absoluto_ac, absoluto_ab;

// Entradas
cin >> a;
cin >> b;
cin >> c;

// Processamento - cálculos
// para ser triangulo:
//| b - c | < a < b + c
//| a - c | < b < a + c
//| a - b | < c < a + b
perimetro = a + b + c;
area = (( a + b ) * c ) / 2;
soma_bc = b + c;
soma_ac = a + c;
soma_ab = a + b;

// Processamento - cálculos valores absolutos
absoluto_bc = b - c;
if ( absoluto_bc < 0 ) {
absoluto_bc = absoluto_bc * -1;
}
absoluto_ac = a - c;
if ( absoluto_ac < 0 ) {
absoluto_ac = absoluto_ac * -1;
}
absoluto_ab = a - b;
if ( absoluto_ab < 0 ) {
absoluto_ab = absoluto_ab * -1;
}

// Processamento - verificação do triangulo
// absoluto_bc < a < soma_bc
// absoluto_ac < b < soma_ac
// absoluto_ab < c < soma_ab
e_triangulo = 0;
if ( ( absoluto_bc < a ) && ( a < soma_bc )){
if ( (absoluto_ac < b) && ( b < soma_ac)){
if ( ( absoluto_ab < c ) && ( c < soma_ab )) {
e_triangulo = 1;
}
}
}

// Saída
cout << fixed << setprecision (1);

if ( e_triangulo == 1 ){
cout << "Perimetro = " << perimetro << endl;
} else {
cout << "Area = " << area << endl;
}

return 0;
}