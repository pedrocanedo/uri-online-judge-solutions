#include <iostream>
#include <queue>
using namespace std;

int main(){
    int nCaso,aux;
    queue<int> testaTermos;
    cin>>nCaso;
    while (nCaso){

        cin>>aux;
        testaTermos.push(aux);
        nCaso--;

    }
    while (!testaTermos.empty()){
        if (testaTermos.front() % 2 == 0) cout<<0<<endl;
        else cout<<1<<endl;
        testaTermos.pop();
    }
}
