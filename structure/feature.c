#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name;
    } pokemon ;

    pokemon a,b,c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name, "charizard");

    b = a;
    strcpy(b.name, "mewtwo");

    c = b;
    strcpy(c.name, "pokemon");

    printf("%d", a.attack);
    printf("%d", a.hp);
    printf("%d", a.speed);
    printf("%d", a.tier);
    printf("%s", a.name);
}