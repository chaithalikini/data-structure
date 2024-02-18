#include<stdio.h>
#include<math.h>
void tower(int n,char s,char t,char d)
{
	if(n==0)return;
	tower(n-1,s,d,t);
	printf("move disc %d from %c to %c\n",n,s,d);
	tower(n-1,t,s,d);
}
void main()
{
	int n;
	printf("\n Enter the number of disks:");
	scanf("%d",&n);
	tower(n,'A','B','C');
	printf("\n The total number of moves=%0.1f",pow(2,n)-1);
}
