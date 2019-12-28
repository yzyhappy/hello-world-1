#include<stdio.h>

int s (int p)
{
	int i;
	int re=1;
	if(p==2)
	re=1;
	else{
		for(i=2;i<p;i++)
		{
			if(p%i==0)
			{
				re=0;
				break;
			}
		}
	}
	return re;
}
int main()
{
	double result;
	double time=0;
	double final=0;
	int i,d;
	int num=0;
	i=100;
here:for(;i<10001;i++)
	{
		
		if(s(i)==0)
		{
			i++;
			goto here;
		}
		
		else
		{
			
			int rp=i;
			while(rp>0)
			{
				rp=rp/10;
				num++; 
			}
			rp=i;
			int N[num];
			for(d=0;d<num;d++)
			{
				N[d]=rp%10;
				rp=rp/10;
				if (rp<0)
				break;
			}
			
			int sum1=0,sum2=0;
			for(d=0;d<num;d++)
			{
				sum1+=N[d]*N[d];
				sum2+=N[d];
			}
		if(s(sum1)==0||s(sum2)==0)
		{
			i++;
			goto here;
		}
		else
		{
			final=final+i;
			time++; 
			printf("%d\n",i);
		} 
		} 
	}
	result=final/time;
	printf("%.2f",result);
} 
