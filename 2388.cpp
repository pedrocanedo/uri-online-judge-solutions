#include <iostream>
using namespace std;

int main(){
    int nLines,totalKm=0,T,V;
    cin>>nLines;
    while (nLines--){
        cin>>T>>V;
        totalKm += T*V;
    }
    cout<<totalKm<<endl;
}
