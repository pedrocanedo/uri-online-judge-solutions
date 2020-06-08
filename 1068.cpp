#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> p;
    int n,aux;
    string L;
    while(getline(cin,L))
    {
        while (!p.empty()) p.pop(); ///Limpar lixo
        aux=0;
        for (int j=0; L[j]!='\0'; j++)
        {
            if (L[j]==')' && p.empty())
            {
                aux=1;
            }
            if (L[j]=='(') p.push('(');
            else if (L[j]==')' && !p.empty())
            {
                p.pop();
            }
        }
        if (p.empty() && aux!=1 ) cout<<"correct"<<endl;
        else cout<<"incorrect"<<endl;
    }
    return 0;
}
