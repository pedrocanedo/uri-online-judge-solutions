#include <iostream>
using namespace std;
int main(){
    int x,y;

    while ( cin>>x && cin>>y && x!=0 && y!=0 )
        cout<<(x>0 ? (y>0 ? "primeiro" : "quarto") :
                (y>0 ? "segundo" : "terceiro"))<<endl;
    }

