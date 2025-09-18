/*
#include <iostream>
#include <string>

using namespace std;

class Monster {
protected:
int health;

public:
Monster(int h) : health(h) {}

virtual void attack() {
cout << "몬스터가 공격합니다!" << endl;
}
int takeDamage(int damage) {
health -= damage;
return health;
}
int getHealth() {
return health;
}
};

class Slime : public Monster {
private:
string slime_type;

public:
Slime(string slime_type = "독", int h = 50) : Monster(h) {
this->slime_type = slime_type;
}
void attack() override {
cout << slime_type << "타입 슬라임이 꾸물거리며 점액을 던집니다!" << endl;
}
};

class Goblin : public Monster {
private:
string weapon;

public:
Goblin(string weapon = "칼", int h = 100) : Monster(h) {
this->weapon = weapon;
}

void attack() override {
cout << "고블린이 " << weapon << "을(를) 휘두르며 공격합니다!" << endl;
}
};

int main() {
Slime slime;
Goblin goblin;

slime.attack();
goblin.attack();

cout << "슬라임의 현재 체력: " << slime.getHealth() << endl;
cout << "고블린의 현재 체력: " << goblin.getHealth() << endl;

cout << "슬라임이 공격 당했습니다. 현재 체력: " << slime.takeDamage(30) << endl;
cout << "고블린이 공격 당했습니다. 현재 체력: " << goblin.takeDamage(30) << endl;

cout << endl;

Slime slime2("불", 2000);
Goblin goblin2("대검", 3500);

slime2.attack();
goblin2.attack();

cout << "슬라임의 현재 체력: " << slime2.getHealth() << endl;
cout << "고블린의 현재 체력: " << goblin2.getHealth() << endl;

cout << "슬라임이 공격 당했습니다. 현재 체력: " << slime2.takeDamage(1020) << endl;
cout << "고블린이 공격 당했습니다. 현재 체력: " << goblin2.takeDamage(2330) << endl;
}
*/