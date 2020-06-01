#include <iostream>
#include <map>
#include <vector>
using namespace std;
/**

Vetor com mortos e map assasinos e numero de assasinatos cometidos por ele.
Tira todos os mortos do map.
Depois imprime os assasinos vivos e seus scores

*/

void teste(int n){
    cout<<"Teste "<<n<<endl;
}

int main(){
    vector<string> mortos;
    map<string,int> crimes;
    string morto,matador;

    while (cin>>matador>>morto){ /// Enquanto tiver assasinato rolando, registra os assasinos e numero de vitimas
        mortos.push_back(morto); /// Guarda o nome dos mortos
        if (!crimes.count(matador))crimes[matador]=1;
        else crimes[matador]++;
    }

    for (auto it = mortos.begin();it!=mortos.end();it++){ /// Tira os mortos do hall de assasinos
        if(crimes.count(*it)) crimes.erase(*it);
    }
    cout << "HALL OF MURDERERS" << endl; /// Imprime o hall
    for(auto it = crimes.begin(); it != crimes.end();it++) cout << it->first << " " << it->second << endl;
}
