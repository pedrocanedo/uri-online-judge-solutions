#include <iostream>
using namespace std;

int main()
{
    int x,nAux;
    cin>>x;

    if (x%2==0) nAux=1;
    else nAux=0;

    for (int i=0;i<6;i++) cout<<x+nAux+(2*i)<<endl;

}
