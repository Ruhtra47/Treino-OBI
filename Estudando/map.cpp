#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, int> mapa1;

    mapa1.insert(make_pair("Arthur", 14));

    mapa1["Breno"] = 18;
    mapa1["Vítor"] = 9;
    mapa1["Lucas"] = 14;

    if (mapa1.find("Arthur") == mapa1.end()) {
        cout << "Pessoa não encontrada" << endl;
    } else {
        cout << mapa1["Arthur"] << endl;
    }

    mapa1.erase("Arthur");

    if (mapa1.find("Arthur") == mapa1.end()) {
        cout << "Pessoa não encontrada" << endl;
    } else {
        cout << mapa1["Arthur"] << endl;
    }

    mapa1["Arthur"] = 14;

    map<string, int>::iterator it;
    for (it = mapa1.begin(); it != mapa1.end(); it++) {
        cout << "Chave: " << (*it).first << endl << "Valor: " << (*it).second << endl;
        
    }

}