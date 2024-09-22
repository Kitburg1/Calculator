#include <stdio.h>
#include <locale.h>


int main()
{
setlocale(LC_ALL, "RU");
puts("Калькулятор!! \n");


char r;
printf("Введите знак(-,+,/,*): %c", r);
scanf("%c", &r);
float a;
puts("Первое число: ");
scanf("%g", &a);
float b;
puts("Второе число: ");
scanf("%g", &b);


if(r == '+')
{
printf("%g\n", a+b);
}
else if(r == '-')
{
printf("%g\n", a-b);
}
else if(r == '*')
{
printf("%g\n", a*b);
}
else if(r == '/')
{
printf("%g\n", a/b);
}

return 0;
}
