#include <stdio.h> 
#include <math.h> 
void main() 

{float a,b,c,d,x,x1,x2,x3;

	printf("Mencari X1 dan X2 pada persamaan kuadrat \n");
	printf("Nilai a: ");
	scanf("%f", & a);
if(a==0)
	printf("Bukan bilangan kuadrat\n");
else

	printf("Nilai b: ");
		scanf("%f", &b);
	printf("Nilai c: ");
		scanf("%f", &c);
	
d=(b*b)-(4*a*c);

if (d<0) 
	printf("Bilangan imajiner\n");
else if (d==0)
{

x=-b/2*a;

	printf("tinggal 1 penyelesaian %.2f \n", x);
}
else
{
x1=(-b+sqrt(d))/2*a;
x2=(-b-sqrt(d))/2*a;
	printf("x1 = %.2f \n",x1);
	printf("x2 = %.2f \n",x2);
}
}
