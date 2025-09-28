/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Npc {
private:
    string name;
    string race;
    int age;
    string hometown;
    string job;

public:
    Npc(string n, string r, int a, string h, string j) : name(n), race(r), age(a), hometown(h), job(j){}

    string getName() {
        return name;
    }
    string getRace() {
        return race;
    }
    int getAge() {
        return age;
    }
    string getHometown() {
        return hometown;
    }
    string getJob() {
        return job;
    }
};

class Playable : public Npc {
private:
    int hp;
    int shield;
    int ultimate_percentage;

public:
    Playable(string n, string r, int a, string h, string j, int hp, int sh) : Npc(n, r, a, h, j), hp(hp), shield(sh), ultimate_percentage(0){}

    int getHp() {
        return hp;
    }
    int getShield() {
        return shield;
    }
    int getultimate_percentage() {
        return ultimate_percentage;
    }

    bool usable_ulti() {
        if (ultimate_percentage == 100) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    vector<Npc*> npcs;
    Npc kiriko("Kamori Kiriko", "Human", 21, "Japan", "Shaman");
    npcs.push_back(&kiriko);
    Npc dva("Song Hana", "Human", 21, "Korea", "Pilot");
    npcs.push_back(&dva);
    Npc juno("Juno Teo Minh", "Human", 19, "Vietnam", "Astronaut");
    npcs.push_back(&juno);

    vector<Playable*> playables;
    Playable brigitte("Brigitte Lindholm", "Human", 25, "Sweden", "Mechanic", 200, 50);
    playables.push_back(&brigitte);

    int i = 0;
    int j = 0;

    for (Npc* npc : npcs) {
        cout << "Name: " << npc->getName() << endl;
        cout << "Race: " << npc->getRace() << endl;
        cout << "Age: " << npc->getAge() << endl;
        cout << "Hometown: " << npc->getHometown() << endl;
        cout << "Job: " << npc->getJob() << endl;
        cout << endl;
    }

    for (Playable* playable : playables) {
        cout << "Name: " << playable->getName() << endl;
        cout << "Race: " << playable->getRace() << endl;
        cout << "Age: " << playable->getAge() << endl;
        cout << "Hometown: " << playable->getHometown() << endl;
        cout << "Job: " << playable->getJob() << endl;
        cout << "HP: " << playable->getHp() << endl;
        cout << "Shield: " << playable->getShield() << endl;
        cout << "Usable Ultimate: " << (playable->usable_ulti() ? "True" : "False") << endl;
        cout << endl;

    }
}
*/