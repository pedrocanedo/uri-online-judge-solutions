#include <iostream>
using namespace std;
// O problema eh um MDC. Dar uma olhada no algoritmo de Euclides

int mdc(int,int);

int main(){
    int n,a,b,aux;
    cin>>n;
    while (n--){
        cin>>a>>b;
        if (a<b){
            aux = b;
            b = a;
            a = aux;
        }
        cout<<mdc(a,b)<<endl;

    }
}

int mdc(int a,int b){

    if (a%b == 0 ) return b;
    else {
        return mdc(b,a%b);
    }
}
