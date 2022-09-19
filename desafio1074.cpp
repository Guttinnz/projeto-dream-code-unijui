#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   int n;
   int valor;
   
   cin>>n;//exemplo: 5
   
   for(int i = 0; i < n; i++){
   		cin >> valor;
   		if(valor == 0){
   			cout << "NULL" << endl;	
		}
		else{//caso nao seja zero tem duas possibilidades
			if(valor > 0){
				if(valor % 2 == 0){
					cout << "EVEN POSITIVE" << endl;
				}
				else{
					cout << "ODD POSITIVE" << endl;
				}
			}
			else{
				if(valor % 2 == 0){
					cout << "EVEN NEGATIVE" << endl;
				}
				else{
					cout << "ODD NEGATIVE" << endl;
				}	
			}
		}
   }
   
   return 0;
}