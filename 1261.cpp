#include <iostream>
#include <map>
#include <vector>
using namespace std;
/**

Ideia: colocar num map as palavras do dicionário com seus valores.
Analisa cada palavra e procura ela no dicionário, caso encontre ++ no salario.
Analisa somente até encontrar um ponto final


*/

int main(){
    /// M -> Palavras no dicionario.
    /// N-> Testes
    string palavra;
    map<string,int> dicionario;
    int M,N,pontos,salario=0;

    cin>>M>>N;
    while (M>0){
        cin>>palavra>>pontos;
        dicionario[palavra]=pontos; /// Cria o dicionário
        M--;
    }

    while (cin>>palavra){
        if (palavra == ".") {
            N--;
            cout<<salario<<endl;
            salario=0;
        }
        if (N<1) break;

        if (dicionario.count(palavra)) salario += dicionario[palavra];
    }
}
