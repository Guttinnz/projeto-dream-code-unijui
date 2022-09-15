#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << fixed << setprecision(1);
    int n, cont;
    cin << n;
    cont = 1;
    double n1, n2, n3, media;
    while (cont <= n){
        cin >> n1;
        cin >> n2;
        cin >> n3;
        media = ((n1 * 0.2) + (n2 * 0.3) + (n3 * 0.5));
        cout << media << endl;
        cont++;
    }

    return 0;
}