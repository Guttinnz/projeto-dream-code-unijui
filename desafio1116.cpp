#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    int n;
    int cont = 0;
    int n1, n2;
    double result;
    cin >> n;
    
    while (cont < n){
        cin >> n1;
        cin >> n2;
        if (n2 == 0){
            cout << "divisao impossivel" << endl;
        }
        else{
            result = (double)n1 / n2;
            cout << result << endl;
        }

        cont++; // conta = cont + 1
    }

    return 0;
}