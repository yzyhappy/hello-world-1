#include<stdio.h>
main()
{
	int n,a,b,c,d;
	printf("total number£º");
	scanf("%d",&n);
	printf("total  number of whom can speak English£º");
	scanf("%d",&a);
	printf("total  number of whom can speak Russian£º");
	scanf("%d",&b);
	printf("both language:");
	scanf("%d",&c);
	d=n-(a+b-c);
	if (d>=0){
	printf("none language:%d",d);
	scanf("%d",&d);
	}
	else
	printf("error number");
}
