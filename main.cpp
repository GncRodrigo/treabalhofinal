#include "jogos.hpp"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main(){
    string filename = "dados.txt";

    // Ler os jogos do arquivo
    vector<JogosBundesliga> jogos = JogosBundesliga::readfile(filename);
     cout << "Points for Bayern Munich: " << jogos[0].Pontos(jogos, "bayern_munich") << endl;
    cout << "Points for Bayer Leverkusen: " << jogos[0].Pontos(jogos, "bayer_leverkusen") << endl;
    cout << "Points for Borussia: " << jogos[0].Pontos(jogos, "borussia") << endl;
    cout << "Points for RB Liepzig: " << jogos[0].Pontos(jogos, "rb_liepzig") << endl;

}