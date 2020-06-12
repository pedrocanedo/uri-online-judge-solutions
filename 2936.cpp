#include <iostream>
using namespace std;

int main(){
    int aux,gTotal = 225;
    int pConv[5] = {300,1500,600,1000,150};
    for (int i=0;i<5;i++) {
        cin>>aux;
        gTotal += aux*pConv[i];
    }

    cout<<gTotal<<endl;
}
