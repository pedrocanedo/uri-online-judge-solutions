#include <iostream>
using namespace std;

int main(){
    int A,N,F,qntd_visivel=0;
    cin>>A>>N;
    while (N--){
        cin>>F;
        if (F*A >= 40000000) qntd_visivel++;
    }
    cout<<qntd_visivel<<endl;
}
