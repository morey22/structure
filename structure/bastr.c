#include <stdio.h>
int main(){
    struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
    };
    struct pokemon pikachu;
    printf("Enter the pikachu of attack");
    scanf("%d", &pikachu.attack);
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp =  80;
    charizard.speed = 80;
    charizard.tier = 'A';

    struct pokemon mewtwo;
    mewtwo.attack = 130;
    mewtwo.hp = 100;
    mewtwo.speed = 200;
    mewtwo.tier = 'G';

    printf("%d", pikachu.attack);
}