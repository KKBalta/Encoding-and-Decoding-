#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    srand(time(0)); // Use the current time as the seed for random generator

    if (argc != 2)
    {
        fprintf(stderr, "Please invoke as %s <key>\n", argv[0]);
        return 1; // Indicate something went wrong
    }

    char *key = argv[1];
    int keylength = strlen(key);

    for (int i = 0; i < keylength; i++)
    {
        if (!isalpha(key[i]))
        {
            fprintf(stderr, "key must contain only letters\n");
            return 1;
        }
    }

    // Generate the inverse permutation of the randomly generated permutation
    char inv_per[26];
    char per[26];
    for (int i = 0; i < 26; i++)
    {
        per[i] = 'A' + i;
    }
    for (int i = 0; i < 26; i++)
    {
        int j = rand() % 26;
        char temp = per[i];
        per[i] = per[j];
        per[j] = temp;
    }
    for (int i = 0; i < 26; i++)
    {
        int index = per[i] - 'A';
        inv_per[index] = 'A' + i;
    }

    int nextChar = getchar();

    while (nextChar != EOF)
    {
        if (isalpha(nextChar))
        {
            int index = toupper(nextChar) - 'A';
            putchar(isupper(nextChar) ? toupper(inv_per[index]) : tolower(inv_per[index]));
        }
        else
        {
            putchar(nextChar);
        }

        nextChar = getchar();
    }

    return 0; // Indicate nothing went wrong
}
