#include <iostream>
#include <map>
#include <vector>
using namespace std;
/**

Ideia: colocar num map as palavras do dicion�rio com seus valores.
Analisa cada palavra e procura ela no dicion�rio, caso encontre ++ no salario.
Analisa somente at� encontrar um ponto final


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
        dicionario[palavra]=pontos; /// Cria o dicion�rio
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
