#include <stdio.h>

int sum(int array[], int n)
{
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        sum += array[i]+array[i+2];
    }
    return sum;
}

int main()
{
    int array[2][2]={10,20,30,40};
    int n = sizeof(array)/sizeof(array[0]);
    printf("The sum of the given elements is %d", sum(array, n));
    return 0;
}
