#include <stdio.h>
#include <stdlib.h> // void srand(unsigned int);, int rand();, NULL, RAND_MAX,
#include <time.h> // time_t time(time_t*);, NULL

int main()
{
    srand((unsigned int)time(NULL));

    int i;
    int win_num;
    int num;

    int shift = 10, scale = 99-10+1;

    for (i = 0; i < 1; i++)
    {
        win_num=("%d ", rand() % scale + shift);
        printf("%d", win_num);
    }
    printf("\n");

    printf("Enter two-digit number to win lottery:");
    scanf("%d", &num);

    //Tens and Ones digit for user number
    int tens_num=num/10;
    int ones_num=num%10;

    //Tens and Ones digit for winning number
    int tens_win=win_num/10;
    int ones_win=win_num%10;

    if(num==win_num)
    {
        printf("You won $10,000\n");
    }
    else
    {
        if (ones_num==tens_win && tens_num==ones_win && ones_num!=ones_win && tens_num!=tens_win)
        {
            printf("You won $3000 dollars.");
        }
        else
        {
            if (ones_num==tens_win && ones_num!=ones_win)
            {
                printf("You won $1000 dollars.");
            }
            if (ones_num==ones_win && ones_num!=tens_win)
            {
                printf("You won $1000 dollars.");
            }
            if (tens_num==ones_win && tens_num!=tens_win)
            {
                printf("You won $1000 dollars.");
            }
            if (tens_num==tens_win && tens_num!=ones_win)
            {
                printf("You won $1000 dollars.");
            }
        }
    }
}
