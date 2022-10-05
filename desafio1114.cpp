#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
 	
 	int senha;
	senha= 2002;
	int senha_digitada;
	
	do{
		cin>>senha_digitada;
		if(senha_digitada == 2002){
			cout<<"Acesso Permitido"<<endl;
		}
		else{
			cout<<"Senha Invalida"<<endl;
		}
	}while(senha_digitada != 2002);
	
	 
	return 0;
}