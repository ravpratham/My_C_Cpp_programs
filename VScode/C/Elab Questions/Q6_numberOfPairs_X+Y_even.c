#include <stdio.h>

int main() {
    int U,V;
    scanf("%d %d", &U, &V);
    printf("%d",((U/2)*(V/2)) + ((U - (U/2))*(V - (V/2))));
    return 0;
}