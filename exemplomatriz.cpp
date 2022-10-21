#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(0);
    // preencha uma matriz 3x3 com os numeros de 1 a 9
    int mat[3][3];
    int i;
    int j;
    int n = 1;

    for (i = 0; i <= 2; i++){
        for (j = 0; j <= 2; j++){
            mat[i][j] = n;
            n++;
        }
    }

    for (i = 0; i <= 2; i++){
        for (j = 0; j <= 2; j++){
            if (mat[i][j] % 2 != 0){
                cout << mat[i][j] << " ";
            }
        }
    }

    return 0;
}