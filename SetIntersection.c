#include<stdio.h>

int main(){
    int a, b;
    int k = 0;

    printf("\nEnter The Number Of Elements In Set 1 And Set 2\n");
    scanf("\n%d %d", &a, &b);

    int s1[a], s2[b], in[a+b];

    printf("\nEnter Elements In Set 1\n");
    for(int i = 0; i < a; i++){
        scanf("\n%d", &s1[i]);
    }

    
    printf("\nEnter Elements In Set 2\n");
    for(int i = 0; i < b; i++){
        scanf("\n%d", &s2[i]);
    }
    
    printf("\nElements In Set 1\n");
    printf("\n{\n");
    for(int i = 0; i < a; i++){
        printf("\n%d\n", s1[i]);
    }
    printf("\n}\n");

    printf("\nElements In Set 2\n");
    printf("\n{\n");
    for(int i = 0; i < b; i++){
        printf("\n%d\n", s2[i]);
    }
    printf("\n}\n");

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(s1[i] == s2[j]){
                in[k] = s2[j];
                k++;
            }
        }
    }

    printf("\nIntersection Of Set 1 And Set 2\n");
    printf("\n{\n");
    for(int i = 0; i < k; i++){
        printf("\n%d\n", in[i]);
    }
    printf("\n}\n");
}