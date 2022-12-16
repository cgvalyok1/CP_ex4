#include <iostream>
#include "Player.h"
#include "Enemy.h"
using namespace std;

void perform_action(Player &player, void (*func)(int, int, bool))
{
    func(player.get_health(), player.get_strength(), player.get_isalive());
}

void perform_action(Enemy &enemy, void (*func)(int, int, bool))
{
    func(enemy.get_health(), enemy.get_strength(), enemy.get_isalive());
}

void status(int h, int s, bool alive)
{
    if (alive) { cout << "Health = " << h << ", strength = " << s << endl; }
    else { cout << "This character is dead" << endl; }
}

int main()
{
    Player p(10, 3);
    Enemy e(3, 1);
    cout << "Player: ";
    perform_action(p, &status);
    cout << "Enemy: ";
    perform_action(e, &status);

    cout << "Player hits Enemy" << endl;
    e.set_health(e.get_health() - p.get_strength()); //решил не реализовывать некрасивую функцию удара
                                                                         //(можно сделать обмен ударами как в HS, но я хотел больше как рпг)

    cout << "Player: ";
    perform_action(p, &status);
    cout << "Enemy: ";
    perform_action(e, &status);
    return 0;
}

