#include <stdio.h>
#include <math.h>
void main()
{
printf("Vvedite X = ");
int x, y=1;
float e=2.71;
scanf("%d",&x);
printf("X\tfact(x)\tf1(x)\tf2(x)\n");
for (int i=1;i<=x;i++)
{
y*=i;
float f1=sqrt(2*M_PI*i)*pow(i/e,i);
double f2=f1*(1+(1/(2*i))+(1/(8*pow(i,2))));
printf("%d\t",i);
printf("%d\t",y);
printf("%.3f\t",f1);
printf("%.3f\n",f2);
}
}
