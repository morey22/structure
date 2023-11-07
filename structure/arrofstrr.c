#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon ;

    pokemon arr[3];
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 80;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "charizard");

    arr[1].attack = 130;
    arr[1].hp = 150;
    arr[1].speed = 200;
    arr[1].tier = 'G';
    strcpy(arr[1].name, "mewtwo");

    arr[2].attack = 100;
    arr[2].hp = 80;
    arr[2].speed = 90;
    arr[2].tier = 'A';
    strcpy(arr[2].name, "pikachu");

    for(int i=0;i<3;i++){
        printf("%s\n", arr[i].name);
        printf("%d\n", arr[i].attack);
        printf("%d\n", arr[i].hp);
        printf("%d\n", arr[i].speed);
        printf("%d\n", arr[i].tier);
    }
}

