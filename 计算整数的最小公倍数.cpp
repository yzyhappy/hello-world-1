//求解两个数的最小公倍数 
#include<stdio.h>
main()
{
	int a,b,min,max,n,temp1,temp2;
	printf("请输入两个正整数:");
	scanf("%d,%d",&a,&b);
	if (a<b){
	min=a;
	max=b;
	}
	else if (a>b){
	max=a;
	min=b;
	}
	n=max;
here:temp1=n%a;
	temp2=n%b;
	if (temp1!=0||temp2!=0){
	n++;
	goto here;}
	else if (temp1==0&&temp2==0)
	printf("两数的最小公倍数是：%d",n);
}
