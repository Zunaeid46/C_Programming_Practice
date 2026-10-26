/*
    Check whether a student passes if marks are above 40.
    If marks are above 70, display Satisfied;
    otherwise, display Unsatisfied.
    Students scoring 40 or below will Fail.
*/

#include <stdio.h>
int main()
{
    int marks;

    printf("Enter your Marks : ");
    scanf("%d",&marks);

    if(marks>=40)
 {
    {
        printf("Pass\n");
    }
    if(marks>=70)
    {
        printf("Satisfied");
    }
    else
    {
        printf("Unsatisfied");
    }
 }
    else
        printf("Fail");
}
