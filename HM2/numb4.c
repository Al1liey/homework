#include <stdio.h>
#include <stdlib.h>
int imp(void);
int only(void);

int main(void){
    
    printf("A | B | A->B | !A||B |\n");
    printf("----------------------\n");
    imp();
    printf("\n\nA | B | A == B | (!A&&!B)||(!A&&!B) |\n");
    printf("-------------------------------------\n");
    only();
    return 0;
}
int imp(void){

    for (int A = 0; A < 2; A++){
        for (int B = 0; B < 2; B++ ){
            printf("%d | %d |  %d   |   %d   |\n", A, B, A <= B, !A || B);
            printf("----------------------\n");
            }
    }
    return 0;
}
int only(void){
    for (int A = 0; A < 2; A++){
        for (int B = 0; B < 2; B++ ){
            printf("%d | %d |   %d    |    \t %d \t    |\n", A, B, A == B, (A&&B)||(!A&&!B));
            printf("-------------------------------------\n");
            }
    }
    return 0;
}