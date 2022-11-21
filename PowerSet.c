#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char s[10];
    printf("\nEnter String\n");
    scanf("\n%s", s);
    int num = strlen(s);
    printf("\nThe Length Is %d\n", num);

    int table[10][10] = {0};

    int temp; 

    for(int i = 0; i< pow(2, num); i++){
        temp = i;
        for(int j = 0; j <num; j++){
            table[i][j] = temp%2;
            temp = temp/2;
            printf("%d", table[i][j]);
        }
        printf("\n");
    }
    printf("\n=============================================\n");
    printf("\n\tThe Power Set Is As Following\n");

    for(int i = 0; i < pow(2, num); i++){
        printf("\n{");
        for(int j = 0; j < num; j++){
            if(table[i][j] == 1){
                printf("%c", s[j]);
            }
        }
        printf("}\n");
    }

    return 0;
}