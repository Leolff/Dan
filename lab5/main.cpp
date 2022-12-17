#include "Header.h"
int main(){
    Fight fightc;
    fightc.fight.push_back(Fighter("Ivan", 100, 25));
    fightc.fight.push_back(Fighter("Sergay", 70, 15));
    fightc.fight.push_back(Fighter("Denis", 90, 40));
    fightc.fight.push_back(Fighter("Motivator", 120, 20));
    fightc.Duel(1, 0);
}