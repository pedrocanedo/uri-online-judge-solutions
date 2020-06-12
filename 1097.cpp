#include <iostream>
using namespace std;

int main(){

    for(int i=1;i<10;i=i+2){
        for (int j=i+6;j>(i+3);j--){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
    }
}
