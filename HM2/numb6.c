#include <stdio.h>
#include <stdlib.h>
int main(void){
    printf("A | B | C |(B->A)*!(A+B)*(A->C)|!B*!A|\n");
    printf("------------------------------------\n");
    for (int A = 0; A < 2; A++){
        for (int B = 0; B < 2; B++){
            for (int C = 0; C < 2; C++){
                printf("%d | %d | %d |\t      %d\t       |  %d  |\n", A, B, C, (B<=A)&&!(A||B)&&(A<=C), !A&&!B);
                printf("------------------------------------\n");
            }
        }
    }
    return 0;
}