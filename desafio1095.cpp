#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int j;
    int i;
    j = 60;
    j = 1;
    while (j >= 0){
        cout << "I=" << i;
        cout << " J=" << j << endl;
        j = j - 5; // j-=5
        i = i + 3;
    }

    return 0;
}