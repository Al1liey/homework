#include <stdio.h>

int xOr(void);
int main(void){
    printf("A | B | A^B | (A&&!B)||(!A&&B) | (A||B)&&(!A||!B) |\n");
    printf("---------------------------------------------------\n"); 
    xOr();
    return 0; 
} 
int xOr(void){
    for (int A = 0; A < 2; A++){
        for (int B = 0; B < 2; B++ ){
            printf("%d | %d |  %d  |        %d         |        %d         |\n", A, B, A ^ B, (A&&!B)||(!A&&B),(A||B)&&(!A||!B));
            printf("---------------------------------------------------\n");
            }
    }
    return 0;
}