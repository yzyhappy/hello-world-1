//判断两个正整数互质
#include<stdio.h>
main()
{
	int a,b,n=2,s,x,min,max;
	printf("输入两个正整数:");
	scanf("%d,%d",&a,&b);
	if (a<b){
		min=a;
		max=b;
	}
	else if (a>b){
		min=b;
		max=a;
	}
	
       	while (n<=min){
			s=a%n;
			x=b%n;
			if (s==0&&x==0){
			printf("两数不互质");
			break;}
			else if (s!=0||x!=0) 
			n++;
		}
	    while (n>min){
		printf("两数互质");
		break;}
 } 
