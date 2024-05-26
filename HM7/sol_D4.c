#include <stdio.h>
#include <inttypes.h>

void reverse_string();

int main(void)
{
    reverse_string();
    return 0;
}

void reverse_string()
{
    char c;
    if((c = getchar()) != '.')
      {
        reverse_string();
        printf("%c",c);
      }
}
