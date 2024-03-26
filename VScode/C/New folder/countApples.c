#include<stdio.h>
int main(){
    int hybrid_apples = 0;
    char which_apple[7];
    printf("enter quality of apples - ");
    for (int i = 0; i < 10; ++i){
        scanf("%c",&which_apple[i]);
        if (which_apple[i] == 72){
            hybrid_apples++;
        }
    }
    printf("Number of Hybrid Apples: %d\n",hybrid_apples);
    return 0;
}

