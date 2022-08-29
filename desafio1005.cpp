#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a, b;
    double media;

    cout << fixed << setprecision(5);

    // cout<<"nota 1 ="<<endl;
    cin >> a;
    // cout<<"nota 2 ="<<endl;
    cin >> b;

    media = (a * 3.5 + b * 7.5) / 11;

    cout << "MEDIA = " << media << endl;

    return 0;
}