#include <stdio.h>
void main()
{
printf("Vvedite X = ");
int x,y=1;
scanf("%d",&x);
printf("X\tfact(x)\n");
for (int i=1;i<=x;i++)
{
y*=i;
printf("%d\t",i);
printf("%d\n",y);
}
}
