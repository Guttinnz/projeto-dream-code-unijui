#include <iostream>
#include <iomanip>
#define LI 12
#define CO 12

using namespace std;

int main(){
    cout << fixed << setprecision(1);
    int num = 1;
    char operacao;
    float m[LI][CO];
    float result = 0;
    int cont = 0;

    cin >> operacao;

    // lendo a matriz de tamanho LI x CO
    for (int i = 0; i < LI; i++){
        for (int j = 0; j < CO; j++){
            // cin>>m[i][j];
            m[i][j] = num;
            num++;
        }
    }
    if (operacao == 'S'){
        for (int i = 0; i < LI; i++){
            for (int j = 0; j < CO; j++){
                if ((i + j < LI - 1) && (j > i)){
                    result = m[i][j] + result;
                }
            }
        }
    }
    if (operacao == 'M'){
        for (int i = 0; i < LI; i++){
            for (int j = 0; j < CO; j++){
                if ((i + j < LI - 1) && (j > i)){
                    cont++;
                    result = m[i][j] + result;
                }
            }
        }
        result = result / cont;
    }
    cout << result << endl;

    return 0;
}