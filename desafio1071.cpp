#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    
    int x, y, aux;

    cin >> x >> y;

    if (x > y) { // coloca o maior em y
     aux = x;
     x = y;
     y = aux;
    }
    x++;
    if (x%2==0) x++;

    int soma = 0;

    for (int i = x; i < y; i = i + 2)
     soma = soma + i;
   
    cout << soma << endl;

    return 0;
}