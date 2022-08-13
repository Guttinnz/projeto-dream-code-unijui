#include <iostream>

using namespace std;

int main () {
   double X;
   cin >> X;
   if (X < 0 or X > 100) {// exceção
      cout << "Fora de intervalo" << endl;
   } else { // todos os válidos
      if (X >= 0 and X <=25) {
         cout << "Intervalo [0,25]" << endl;
      }
      if (X >25 and X <=50) {
         cout << "Intervalo (25,50]" << endl;
      }
      if (X > 50 and X <=75) {
         cout << "Intervalo (50,75]" << endl;
      }
      if (X >75 and X <=100) {
         cout << "Intervalo (75,100]" << endl;
      }
   }
   
   return 0;
}