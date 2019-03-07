#include <stdio.h>

float addNumbers(int left, int right);

int main()
{
    int x = 10, y = 10;
    float returnValue = addNumbers(x, y);
    printf("The average of %d and %d is %.1f.\n", x, y, returnValue);
}
float addNumbers(int left, int right)
{
    float sum=(left+right)/2.0;
    return sum;
}
