#include "jogos.hpp"
#include <fstream>
#include <sstream>
using namespace std;

JogosBundesliga::JogosBundesliga(string a,int b,string c, int d){
    team1 = a;
    golcasa = b;
    team2 = c;
    golfora = d;
}

int JogosBundesliga::Pontos(const vector<JogosBundesliga>& jogos,const string& name){
    int pontos = 0;
    
    for(int i =0; i<jogos.size();i++){
        if(jogos[i].team1 == name){
            if(jogos[i].golcasa > jogos[i].golfora){
                pontos += 3;
            }
        }
        if(jogos[i].team2 == name){
            if(jogos[i].golcasa < jogos[i].golfora){
                pontos += 3;
            }
        }
        if(jogos[i].team1 == name || jogos[i].team2 == name){
            if(jogos[i].golcasa == jogos[i].golfora ){
                pontos += 1;
            }
        }
    }
    return pontos;
}
vector<JogosBundesliga> JogosBundesliga::readfile(const string& dados){
vector <JogosBundesliga> jogos;
ifstream file(dados);
    string line;
    
    while(getline(file,line)){
        istringstream iss(line);
    
    string team1, team2;
    int golcasa, golfora;
    if (iss >> team1 >> golcasa >> team2 >> golfora) {
        JogosBundesliga jogo(team1,golcasa,team2,golfora);
        jogos.push_back(jogo);
}
}
        file.close();
        return jogos;
}
string JogosBundesliga::getTeam1() const { return team1; }
string JogosBundesliga::getTeam2() const { return team2; }

