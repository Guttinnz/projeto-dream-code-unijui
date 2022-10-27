#include <iostream>
#include<iomanip>
#define LI 2
#define CO 2

using namespace std;

int main() {
	cout<<fixed<<setprecision(1);

	int coluna;
	char operacao;
	float m[LI][CO];
	float result = 0;

	cin>>coluna;
	cin>>operacao;

	for(int i=0; i<LI;i++){
		for(int j =0; j<CO;j++){
			cin>>m[i][j];
		}
	}

	if(operacao == 'S'){
		for(int i=0; i<LI;i++){
				result = result + m[i][coluna];
		}
	}

	if(operacao == 'M'){
		for(int i=0; i<LI;i++){
			result = result + m[i][coluna];
		}
		result = result / CO;
	}
	cout<<result<<endl;
}