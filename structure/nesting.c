#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
    } pokemon ;

    typedef struct legendarypokemon{
        pokemon normal;
        char ability[100];
    } legendarypokemon ;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack; 
    } godpokemon ;

    godpokemon arceus; 
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "Turn Anyone in Stone");
    arceus.legend.normal.attack = 500;



    legendarypokemon mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.normal.hp = 100;
    mewtwo.normal.attack = 150;
    strcpy(mewtwo.normal.name, "mewtwo");
    mewtwo.normal.speed = 200;
    mewtwo.normal.tier = 'S';

   return 0;
}