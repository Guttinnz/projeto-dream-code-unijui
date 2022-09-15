#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int x;
    int cont;
    cin >> x;
    cont = 1;
    while (cont <= x){
        if (cont % 2 != 0){
            cout << cont << endl;
        }
        cont++;
    }

    return 0;
}