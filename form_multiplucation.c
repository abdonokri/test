#include <stdio.h>
int main(){
    int i = 1;
    int a;
    printf("entre your number: ");
    scanf("%d", &a);
    while (i<=10){
        printf("%d x %d = %d\n", a, i, a*i);
        i++;
    }
    return 0;
}