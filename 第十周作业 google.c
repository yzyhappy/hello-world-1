#include <stdio.h>
#include <math.h>

int fn(int num){
	int len=0;
	int i=0;
	for(i=0;i<10;i++){
		if(num>=pow(10,i)){
		len++;
		}
	}
	int count=0;
	while(num!=0){
		if(num%10==1){
			count++;
		}
		num=num/10;
	}
	return count;
}
 
int main(){
	long i;
	int count=0;
	long max;
	printf("输入范围上限max\n"); 
	scanf("%d",&max);
	for(i=2;i<=max;i++){
		if(i==fn(i)){
			printf("%d\n",i);
			count++;
			break;
		}
	}
	if(count==0){
		printf("在2到%d之间没有满足条件的数\n",max); 
	}
	return 0;
} 
