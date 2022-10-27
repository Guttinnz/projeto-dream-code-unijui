#include <iostream>
#include<iomanip>
#include <string>

#define L 15
#define C 15

using namespace std;



int main() {


    int i, j, num;
    int m[L][C];

    do {
        cin >> num;
        } while ( num > 15);
    m[0][0] = 1;

    for(i=0; i<num; i++){
        for(j=1; j<num; j++){
            m[i][j] = m[i][j-1] * 2;
        }
        m[i+1][0] = m[i][0] * 2;
    }

//    cout << m[num-1][num-1] << endl;

    string tmp = to_string(m[num-1][num-1]);
    int qtde = tmp.size();

//    cout << qtde << endl;

    for(i =0; i<num;i++){
        for(j=0; j<num; j++){
			cout << right << setw(qtde+1) <<m[i][j];//<< " ";
		}
		cout<<endl;
   }

    return 0;
}