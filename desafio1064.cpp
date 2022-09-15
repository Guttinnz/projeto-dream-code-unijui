#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double valor;
  int n_positivos;
  double soma_positivos = 0;

  for (int cont = 0; cont < 6; cont++){
    cin >> valor;
    if (valor > 0){
      n_positivos = n_positivos + 1;
      soma = soma + valor;
    }
  }
  cout << "Total de positivos: " << n_positivos << endl;
  
  return 0;
}