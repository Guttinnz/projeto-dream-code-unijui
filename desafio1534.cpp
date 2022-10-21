#include <iostream>
#include <iomanip>
#define LI 12
#define CO 12

using namespace std;

int main(){
    cout << fixed << setprecision(1);
    int n;

    cin >> n;
    while (n != EOF){

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i + j == n - 1){ // diagonal principal
                    cout << 2;
                }
                else{
                    if (i == j){
                        cout << 1;
                    }
                    else{
                        cout << 3;
                    }
                }
            }
            cout << endl;
        }
        cin >> n;
    }

    return 0;
}