#include<stdio.h>

int main(){
    int a, b;
    printf("\nEnter The Number Of Element In Set 1 And Set 2\n");
    scanf("\n%d %d\n", &a, &b);

    int s1[a], s2[b], diff[a+b];

    printf("\nEnter Elements In Set 1\n");

    for(int i = 0; i < a ; i++){
        scanf("\n%d", &s1[i]);
    }

    printf("\nEnter Elements In Set 2\n");

    for(int i = 0; i < b ; i++){
        scanf("\n%d", &s2[i]);
    }

    printf("\nElements In Set 1\n");
    printf("\n{\n");
    for(int i = 0; i < a ; i++){
        printf("\n%d", s1[i]);
    }
    printf("\n}\n");

    printf("\nElements In Set 2\n");
    printf("\n{\n");
    for(int i = 0; i < b ; i++){
        printf("\n%d", s2[i]);
    }
    printf("\n}\n");


    int fl = 0, k = 0;
    for(int i = 0; i < a; i++){
        fl = 0;
        for(int j = 0; j < b; j++){
            if(s1[i] == s2[j]){
                fl = 1;
                break;
            }
        }

        if(fl == 0){
            diff[k] = s1[i];
            k++;
        }
        fl = 0;
    }

    printf("\nA-B\n");
    printf("\n{\n");
    for(int i = 0; i < k; i++){
        printf("\n%d\n", diff[i]);
    }
    printf("\n}\n");

    return 0;

}