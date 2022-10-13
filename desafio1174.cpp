#include <iostream>
#include<iomanip>
#define TAM 100
 
using namespace std;
 
int main() {
 
    double vet[TAM];
 	int i;
 	cout<<fixed<<setprecision(1);
 	
 	for(i = 0; i< TAM; i=i+1){//laço para preencher
 		cin>>vet[i];	
	}
	
	for(i = 0; i< TAM; i=i+1){//laço para mostrar
 		if(vet[i]<=10){
		 	cout<<"A["<<i<<"] = "<<vet[i]<<endl;	
		}
	}
    return 0;
}