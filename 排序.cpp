#include <stdio.h>
int main () 
{int x[5]={1,2,3,4,5},i,j,temp,n=5;
     scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);
    for(i=0;i<n;i++) 
    {for(j=0;j<n-i;j++) 
	 if( x[j] < x[j+1]) 
   	    {int temp = x[j];
   	    x[j] = x[j+1];
   	    x[j+1] = temp;}
    }
	printf("%d%d%d%d%d", x[0], x[1], x[2], x[3], x[4]);
   return 0;
}
