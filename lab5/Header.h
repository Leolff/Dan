#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Fighter{
    public:
    string name;
    double health;
    double damagePerAttack;
    Fighter(string name, double health, double damagePerAttack){
        this->name=name;
        this->health=health;
        this->damagePerAttack=damagePerAttack;
    }
};
class Fight{
    public:
    vector<Fighter> fight;
    void Duel(int index1, int index2){
        double hp1 = fight[index1].health;
        double hp2 = fight[index2].health;
        double min = 0;
        while(hp1 >= 0 && hp2 >= 0){
            cout << "HP_" << fight[index1].name << ": " << hp1 << '\t';
            cout << "HP_" << fight[index2].name << ": " << hp2 << endl;
            hp1-=fight[index2].damagePerAttack;
            hp2-=fight[index1].damagePerAttack;
        }
        if(hp1 < fight[index2].damagePerAttack){
            hp1 = 0;
            cout << "HP_" << fight[index1].name << ": " << hp1 << '\t';
            cout << "HP_" << fight[index2].name << ": " << hp2 << endl;
            cout << fight[index2].name << " Won" << endl;
        }
        else{
            hp2 = 0;
            cout << "HP_" << fight[index1].name << ": " << hp1 << '\t';
            cout << "HP_" << fight[index2].name << ": " << hp2 << endl;
            cout << fight[index1].name << " Won" << endl;
        }
    }
};
