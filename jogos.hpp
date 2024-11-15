#ifndef _JOGOS_HPP
#define _JOGOS_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class JogosBundesliga{
    private:
    int golcasa, golfora;
    std::string team1;
    std::string team2;
    public:
    JogosBundesliga(std::string a, int b, std::string c, int d);
    int aproveitamento();
    std::string getTeam1() const;
    std::string getTeam2() const;
    int Pontos(const vector<JogosBundesliga>& jogos, const string& name);
    int Saldogol();
    void tabela();
    static vector<JogosBundesliga> readfile(const string& filename);
};

#endif