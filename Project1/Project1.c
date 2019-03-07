#include <stdio.h>

int main(void)
{
    int total=0;
    int units;
    char name[30];

    printf("Enter student name: ");
    fgets(name, 30, stdin);
    printf("\n");

    //User Data to see if student lives on campus or not
    char user;
    printf("Enter y if student lives on campus, n otherwise: ");
    scanf(" %c", &user);
    printf("\n");

    if (user=='y')
    {
        total=total+1000;
    }
    else
    {
        total=total;
    }

    //Get User information about how units the student is applied in
    printf("Enter current unit count: ");
    scanf("%d", &units);

    if (units<=12)
    {
        total+=units*100;
    }
    else
    {
        int extra=units-12;
        total+=12*100;
        total+=extra*90;
    }

    printf("\n");
    printf("The student name is %s", name);
    printf("Amount due: $%d", total);
}
