#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    cout << fixed << setprecision(5);
///definicao das variaveis
   double a, b, c, delta, R1, R2;

//Entrada
   cin >> a >> b >> c;

//processamento
   delta = pow(b,2) - 4 * a * c;

   if (delta >=0 and a!=0) {
      R1 = (-b + sqrt(delta)) / (2*a);
      R2 = (-b - sqrt(delta)) / (2*a);
      //saída
      cout << "R1 = " << R1 << endl;
      cout << "R2 = " << R2 << endl;
   } else {
      cout << "Impossivel calcular" << endl;
   }

   return 0;
}
