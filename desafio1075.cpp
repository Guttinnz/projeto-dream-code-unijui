#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    for(int i = 1; i < 10000; i++){
        if(i%n == 2)
        cout << i << "\n";
    }
    
    return 0;
}