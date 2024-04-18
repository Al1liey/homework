#include <stdio.h>

int main(void)
{   unsigned short a;
    scanf("%hd", &a);
    if (a<3||a==12)
    {
        printf("winter");
    }
    else if (a>2&&a<6)
    {
        printf("spring");
    }
    else if (a>5&&a<9)
    {
        printf("summer");
    }
    else if (a>8&&a<12)
    {
        printf("autumn");
    }
    return 0;
}
