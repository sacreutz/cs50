#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i;
    int space;
    int hash;


 int get_positive_int(string prompt);


    int height = get_positive_int("Positive Integer Between 1 and 8 inclusive: ");
    for (i = 1; i <= height; i++) 
    {
        for (space = (height - i); space > 0; space--)
        {
            printf(" "); 
        }

        for (hash = 0; hash < i; hash++)
        {   
            printf("#"); 
        }

        printf("\n");
    }
    return 0;
}

int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
}
