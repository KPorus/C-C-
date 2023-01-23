#include <stdio.h>
int main()
{
    int len = 0; // for pattern lenth
    int i = 0;
    int j = 0;

    char TEXT[] = "pattern matching algorithm "; // TEXT

    char PATTERN[] = "match"; // pattern to match

    while (PATTERN[len] != '\0')
    {
        len++;
    }; // while loop to find pattern lenth

    while (TEXT[i] != '\0')
    { // while loop to check all the index

        while (TEXT[i] == PATTERN[j])
        { // while text and pattern index match loop will continue;
            i++;
            j++; // j++ is for measure how many index is correct ;

            if (j == len)
            { // if the j's value matched the len value then all the index match to the TEXT
                printf("pattern matched at index %d", i);

                return 0; // for getting executing the program
            }
        }

        i++;
        j = 0; // if index don't match continue to next index
    }

    printf("PATTERNT DOSENT MATCH TO YOUR TEXT");
}