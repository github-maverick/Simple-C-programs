#include <stdio.h>

int sum(int,int);

int main()
{
int a,b,c;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter another number");
scanf("%d",&b);
c = sum(a,b);
printf("The sum of %d and %d is %d",a,b,c);
return 0;
}
//function for calculating sum
int sum(int x, int y)
{
    int s;
    s = x+y;
    return s;
}
