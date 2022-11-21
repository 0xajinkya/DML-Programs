#include<stdio.h>

int main(){
    int a;

    printf("\nEnter The Number Of Elements In Array\n");
    scanf("\n%d", &a);
    int arr[a];

    printf("\nEnter The Elements Of Array\n");
    for(int i=0; i<a; i++){
        scanf("\n%d", &arr[i]);
    }

    printf("\nThe Elements Of Array\n");
    for(int i=0; i<a; i++){
        printf("\n%d", arr[i]);
    }

    int low = 0, high = a, s, f = 0;

    printf("\nEnter The Element To Search\n");
    scanf("\n%d", &s);

    while(low < high){
        if(s < arr[(low + high)/2]){
            high = (low+high)/2 + 1;
        } else if(s > arr[(low+high)/2]){
            low = (low+high)/2 + 1;
        } else {
            printf("\nThe Element Is At Position %d", (low+high)/2);
            f = 1;
            break;
        }
    }

    if(f = 0){
        printf("\nElement Not Found\n");
    }

    return 0;
}