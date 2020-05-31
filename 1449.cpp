#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <map>
using namespace std;

/* A ideia é colocar o dicionário num map */

int main(){
   int T,M,N;
   string japa,port,plv="",linha;
   vector<string> traduzido;
   cin>>T;

    while (T--){
        map<string,string> dicio;
        cin>>M>>N;
        cin.ignore();
        while(M--){
        getline(cin,japa);
        getline(cin,port);
        dicio.insert(pair<string,string>(japa,port));
    }
        int ind_trad=0;
        while (N--){

            getline(cin,linha);
            for(int i=0;i<linha.size();i++){
                if (linha[i]==' '){
                    if(dicio.count(plv)){
                        cout<<dicio[plv];
                    }else {
                        cout<<plv;
                    }
                    plv.clear();
                    cout<<linha[i];
                }else {plv += linha[i];}
            }
            if(!plv.empty()){
                if(dicio.count(plv)){
                        cout<<dicio[plv];
                    }else {
                        cout<<plv;
                    }
                    plv.clear();
            }
            cout<<endl;

        }
        cout<<endl;
    }

}
