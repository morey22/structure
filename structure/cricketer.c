#include<stdio.h>
#include<string.h>

int main(){
typedef struct Cricketer{
    char firstname[15];
    char lastname[15];
    int age;
    int noOfMatches;
    float average;
}Cricketer ;

Cricketer arr[3];
for(int i=0;i<3;i++){
    scanf("%s", arr[i].firstname);
    scanf("%s", arr[i].lastname);
    scanf("%d", &arr[i].age);
    scanf("%d", &arr[i].noOfMatches);
    scanf("%f", &arr[i].average);
}

for(int i=0;i<3;i++){
    printf("Name : %s", arr[i].firstname);
    printf("%s", arr[i].lastname);
    printf("Age : %d", arr[i].age);
    printf("Number of Matches : %d", arr[i].noOfMatches);
    printf("Average : %d", arr[i].average);
}
    return 0;
}