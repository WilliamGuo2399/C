#include <stdio.h>
int addNumbers(int n);

int main()
{
    int num=1234;
    printf("The sum from 1 to %d is %d", num, addNumbers(num));
    return 0;
}

int addNumbers(int n)
{
    if(n != 0)
        return n + addNumbers(n-1);
    else
        return n;
}
