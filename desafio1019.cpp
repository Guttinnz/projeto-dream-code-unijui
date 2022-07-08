#include <iostream> //entradas e saída

#include <iomanip> //casas decimais

#include <cmath> //biblioteca matemática pow e sqrt

int main() {
int seg; // qualquer inteiro
int horas,minutos,segundos;
//minutos * segundos
cin >> seg;

horas = seg / (6060);
seg = seg % (6060);

minutos = seg / 60;
seg = seg % 60

segundos = seg;

cout << horas << ":" << minutos << ":" << segundos << endl;

return 0;
}