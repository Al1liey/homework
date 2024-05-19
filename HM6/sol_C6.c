#include <stdio.h>
<<<<<<< HEAD
#include <math.h>
int rec(short N);
int main(void)
{   short N;
    scanf("%d", &N);
    printf("%d\n%f", rec(N),45-pow(45,3)/6+pow(45,5)/120-pow(45,7)/720/7);
}

int rec(short N)
=======

unsigned long rec(short N);
int main(void)
{   short N;
    scanf("%hu", &N);
    printf("%lu\n", rec(N));
}

unsigned long rec(short N)
>>>>>>> 2bac40cc3789875c80635f633bd90b46b9d7a6af
{
    if (N==1)
    {
        return 1;
    }
    return rec(N-1)*2;
<<<<<<< HEAD
}
=======
}
>>>>>>> 2bac40cc3789875c80635f633bd90b46b9d7a6af
