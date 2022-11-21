#include<stdio.h>

int main(){
    int a, b;
    
    printf("\nEnter Elements In Set 1 And Set 2");
    scanf("\n%d %d", &a, &b);

    int s1[a], s2[b], diff[a];
    int k = 0, fl = 0;

    printf("\nEnter Elements In Set 1\n");

    for(int i = 0; i < a; i++){
        scanf("\n%d", &s1[i]);
    }

    printf("\nEnter Elements In Set 2\n");

    for(int i = 0; i < b; i++){
        scanf("\n%d", &s2[i]);
    }

    printf("\nEnter Elements In Set 1\n");

    for(int i = 0; i < a; i++){
        printf("\n%d", s1[i]);
    }

    printf("\nElements In Set 2\n");

    for(int i = 0; i < b; i++){
        printf("\n%d", s2[i]);
    }

    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            if(s2[i] == s1[j]){
                fl = 1;
                break;
            }
        }
        if(fl == 0){
            diff[k] = s2[i];
            k++;
        }
        fl = 0;
    }

    printf("\n B-A");
    printf("\n{\n");
    for(int i = 0; i < k; i++){
        printf("\n%d\n", diff[i]);
    }
    printf("\n}\n");

    return 0;
}