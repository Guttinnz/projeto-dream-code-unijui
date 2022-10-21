#include <iostream>
#include <iomanip>
#define LI 12
#define CO 12

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    char operacao;
    float m[LI][CO];
    float result = 0;
    int cont = 0;

    cin >> operacao;

    // lendo a matriz de tamanho LI x CO
    for (int i = 0; i < LI; i++){
        for (int j = 0; j < CO; j++){
            cin >> m[i][j];
        }
    }
    if (operacao == 'S'){
        for (int i = 0; i < LI; i++){
            for (int j = 0; j < CO; j++){
                if (i + j < LI - 1){
                    result = m[i][j] + result;
                }
            }
        }
        // cout<<"Soma = "<<result<<endl;
    }
    if (operacao == 'M'){
        for (int i = 0; i < LI; i++){
            for (int j = 0; j < CO; j++){
                if ((i + j) < (LI - 1)){ // acima da diagonal secundaria
                    cont++;
                    result = m[i][j] + result;
                }
            }
        }
        // cout<<"Soma = "<<result<<endl;
        result = result / cont;
        // cout<<"Media = "<<result<<endl;
    }
    cout << result << endl;

    return 0;
}