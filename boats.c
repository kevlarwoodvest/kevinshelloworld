# include <stdio.h>
#include <cs50.h>

int main(void)
{
    int stream, row, boat, merry;
    do
    {
        stream = get_int("how far we should row down the stream? ");
    }
    while (stream < 1);
    {
        for (row = 0; row < stream; row++)
        printf("row, ");
            {
             for (boat = row; boat == row; boat++)
                printf("your boat, gently down the stream \n");
            }
            for (merry = 0; merry < stream; merry++)
            printf("merrily, ");
            printf("life is but a dream ");
            printf("\n");

        }
}
