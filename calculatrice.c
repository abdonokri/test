#include <stdio.h>
int main(){
    int a, b, choix;
    printf("===== CALCULATRICE =====\n"
       "1. Addition\n"
       "2. Soustraction\n"
       "3. Division\n"
       "4. Multiplication\n"
       "5. Quitter\n");
    printf("entre first number: ");
    scanf("%d", &a);
    
    printf("entre seconde number: ");
    scanf("%d", &b);

    printf("Choisissez une opération : ");
    scanf("%d", &choix);

    switch (choix){
        case 1:
            printf("%d + %d = %d", a, b, a+b);
            break;
        case 2:
            printf("%d - %d = %d", a, b, a-b);
            break;
        case 3:
            if (b!=0){
                printf("%d / %d = %d", a, b, a/b);   
            }
            else{
                printf("impossible diviser par 0:");
            }
            break;
        case 4:
            printf("%d x %d = %d", a, b, a*b);
            break;
        default:
            printf("invalid choix:");
    }
    return 0;
}
