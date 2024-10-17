#include <stdio.h>

void main()
{
    void pyramid();
    void inverted_pyramid();
    int rows = 5;

    // outer loop for rows
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (j == 1 || j == i || i == rows )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

void pyramid()
/*
 *
 ***
 *****
 *******
 *********
 */

{
    int row = 5;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= (row - i) - 1; j++)
        {
            printf(".");
        }

        for (int k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\row");
    }
}

void inverted_pyramid()
{
    /*
    *****
    ***
    *
    */

    int row = 5;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * (row - i) - 1; k++)
        {
            printf("*");
        }
        printf("\row");
    }
}