#include <stdio.h>
void main()
{
printf("Vvedite X");
int x,y=1;
scanf("%d",&x);
for (int i=1;i<=x;i++)
{
y*=i;
}
printf("y=%d",y);
}
