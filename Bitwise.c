#include<stdio.h>

int main(){
    int a, b, c;
    printf("\nEnter Two Numbers\n");
    scanf("\n%d %d", &a, &b);
    c = a & b;
    printf("\nThe Logical AND Of %d And %d is %d\n", a, b, c);

    c = a | b;
    printf("\nThe Logical OR Of %d And %d is %d\n", a, b, c);

    c = a ^ b;
    printf("\nThe Logical XOR Of %d And %d is %d\n", a, b, c);

    c = ~a;
    printf("\nThe Complement Of %d is %d\n", a, c);

    c = a << 2;
    printf("\nLeft Shift Of %d Is %d\n", a, c);

    c = a >> 2;
    printf("\nRight Shift Of %d Is %d\n", a, c);

    return 0;

}