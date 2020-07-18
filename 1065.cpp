#include <iostream>
using namespace std;

int main(){
    int nPares=0;
    for (int i=0;i<5;i++){
        int aux;
        cin>>aux;
        if (!(aux % 2)) nPares++;
    }
    cout<<nPares<<" valores pares"<<endl;
}
