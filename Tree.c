#include<stdio.h>
#include<stdlib.h>

struct Node{
    int val;
    struct Node* l;
    struct Node* r;
}* root = NULL;

struct Node * newNode(int val){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> val = val;
    newNode -> l = NULL;
    newNode -> r = NULL;

    return newNode;
}

void print(struct Node * root){
    if(root -> l)
        print(root->l);
    printf("%d->", root->val);
    if(root -> r){
        print(root->r);
    }
}

int main(){
    root = newNode(5);
    root->l = newNode(1);
    root->r = newNode(2);
    root->l->l = newNode(4);
    root->l->r = newNode(6);
    root->l->l->l = newNode(7);
    root->l->l->r = newNode(8);
    root->l->r->r = newNode(9);

    print(root);
    return 0;
}