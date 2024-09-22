#include <stdio.h>


int main()
{
puts("Super Calc MADE IN RUSSIA! \n");


char r;
printf("Enter the operation sign(-,+,/,*): %c", r);
scanf("%c", &r);
float a;
puts("First number: ");
scanf("%g", &a);
float b;
puts("Second number: ");
scanf("%g", &b);






if(r == '+')
{
printf("%g\n", a+b);
}
else if(r == '-')
{
printf("%g\n", a-b);
}
if(r == '*')
{
printf("%g\n", a*b);
}
else if(r == '/')
{
printf("%g\n", a/b);
}


return 0;
}
