#include <stdio.h>
#include <string.h>

int main()
{
    char word[100], temp;
    int i, j, len;

    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen(word);

    for(i=0, j=len-1; i<len/2; i++, j--)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    printf("The reversed word is: %s\n", word);

    return 0;
}
