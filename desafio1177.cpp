#include <iostream>
#define TAM 1000
 
using namespace std;
 
int main() {
 
    int t; //supor que T seja igual a 4
	int n[TAM];
    cin>>t;
    
    for(int i=0;i<TAM;i++){
    	n[i] = i %t;
 	}
 	
 	for(int i=0;i<TAM;i++){
    	cout<<"N["<<i<<"] = "<<n[i]<<endl;
 	}
	
    return 0;
}