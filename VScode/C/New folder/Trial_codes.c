#include<stdio.h>
#include<string.h>
/*Angstrom
#include<stdio.h>
main(){
    int num[1000];
    printf("enter a number - ");
    for (int i = 0;){
        
    }
}
*/
/*
#include<stdio.h>
int main(){
    int i = 1;
    printf("%d  %d  %d",i++,++i,i);
    return 0;
}
*/
int main(){
    char sentence[] = "I am happy";
    int len = strlen(sentence);
    char vowels[] = "aeiouAEIOU";

    for (int i = 0;i <= len; i++){
        int result = strcmp(sentence[i],vowels);
        if (result == 0){
            sentence[i] = "*";
        }
    }
    printf("%s",sentence);
    return 0;
}
