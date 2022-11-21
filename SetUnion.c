#include<stdio.h>

int main(){
    int a, b, found;
    printf("\nEnter The Number Of Element In Set 1 And Set 2\n");
    scanf("\n%d %d\n", &a, &b)   ;

    int s1[a], s2[b], u[a+b];

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

    for(int i =0; i<a; i++){
        u[i] = s1[i];
    }

    for(int i =a; i<a+b; i++){
        u[i] = s2[i-a];
    }

    for(int i = 0; i < a+b; i++){
        for(int j = 0; j < a+b; j++){
            if(i == j)
                continue;
            else 
                if(u[i] == u[j]){
                    u[j] = -1;
                }
        }
    }

    printf("\n The Union Of Set 1 And Set 2");
    printf("\n{\n");
    for(int i = 0; i < a+b; i++){
        if(u[i] == -1){
            continue;
        }
        printf("\n%d\n", u[i]);
    }
    printf("\n}\n");
    

    return 0;
}