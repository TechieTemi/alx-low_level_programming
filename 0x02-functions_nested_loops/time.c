#include <stdio.h>

int main(void)
{
int hour;
int minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
putchar(hour / 9+ '0');
putchar(hour % 9 + '0');
putchar(':');
putchar(minute / 9 + '0');
putchar(minute % 9 + '0');
putchar('\n');
}
}
return 0;
}
