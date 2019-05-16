#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string s = argv[1];
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (isalpha(s[i]))
            {
                printf("Usage: %s key\n", argv[0]);
                return 1;
            }
        }

        printf("%i\n", atoi(argv[1]));
     
        int key = atoi(argv[1]) % 26;
     
        string p = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(p); i < n; i++)
        {
           
            
            if (p[i] < 32 || p[i] > 47)
            {
                int newLetter = p[i] + key;  
            
         
                if (newLetter <= 122)
                {
                    printf("%c", p[i] + key);
                }
                else 
                {
                    printf("%c", 96 + newLetter % 122);
                }
            }
            else 
            {
                printf("%c", p[i]);
            }
        }
        printf("\n");
    }
    else 
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
}
