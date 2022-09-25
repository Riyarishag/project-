#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d,real,img,root1,root2;
	printf("enter coefficients of a quadratic equation: ");
        scanf("%d%d%d",&a,&b,&c);

	if(a==0)
	{
		printf("\nRoots cannot be determined ");
	}
	else 
	{
		d=(b*b)-(4*a*c);

	if(d==0)
	{
		printf("\n Roots are real and equal");
		root1=(-b)/(2.0*a);
		root2=root1;
		printf("\nRoots are root1=%f , root2=%f",root1,root2);
	}
	else if(d>0)
	{
		printf("\nRoots are real and different");
		root1=(-b/2.0*a)+(sqrt(d)/2.0*a);
		root2=(-b/2.0*a)-(sqrt(d)/2.0*a);
		printf("\n Roots are root1=%f , root2=%f",root1,root2);
	}
	else if(d<0)
	{
	
		printf("\nRoots are complex numbers");
		d=-(d);
		real=(-b)/2.0*a ;
		img=sqrt(d)/2.0*a;
		printf("\n Roots are root1= %f + i%f, root2= %f - i%f",real,img,real,img);
	}
	}
}









