#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

void zahlenspiel(){
    int current_number = -1;
    vector<int> zahlen;

    do{
        cout << "Bitte eine Zahl eingeben:" << endl;
        cin >> current_number;

        if(cin.fail()){
            cerr << "Zahlen bitte!" << endl;
            cin.clear();
            cin.ignore();
            current_number = -1;
        }else if(current_number != 0){
            zahlen.push_back(current_number);
        }
    }while(current_number != 0);

    double mittelwert = 0;
    double varianz = 0;
    int quadrate = 0;
    int anzahl = zahlen.size();

    for(int n : zahlen){
        mittelwert += n;
        quadrate += n*n;
    }

    mittelwert = mittelwert / anzahl;
    varianz = quadrate / (anzahl-1);
    cout << "Mittelwert:" << mittelwert << endl;
    cout << "Varianz:" << varianz << endl;


}

void map_spiel(){

    map<char, int> anzahl;
    string my_line;
    cout << "Bitte einen Text eingeben:" << endl;
    getline(cin, my_line);

    if(cin.fail()){
        exit;
    }

    // for (auto it = my_line.begin(); it != my_line.end(); it++) {
    //     anzahl[*it]++;
    // }

    for (char &it :  my_line) {
        anzahl[it]++;
    }

    for(auto kv : anzahl){
        cout << kv.first << ": " << kv.second << endl;
    }
}


int main(){
    map_spiel();
}