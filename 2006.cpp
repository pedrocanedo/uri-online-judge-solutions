#include <iostream>
using namespace std;

int main(){
    int T,respostasCorretas=0;
    cin>>T;

    for(int i=0; i<5;i++) {
        int aux;
        cin>>aux;
        if (aux == T) respostasCorretas++;
    }
    cout<<respostasCorretas<<endl;
}
