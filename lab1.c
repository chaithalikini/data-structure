#include<stdio.h>
#include<stdlib.h>
struct day{
	char *name;
	int date;
	char *activity;
};
void create(struct day *week)
{
	for(int i=0;i<7;i++)
	{
		week[i].name=(char*)malloc(10*sizeof(char));
		printf("enter the name of the day %d:",i+1);
		scanf("%s",week[i].name);
		printf("enter the date of the day %d:",i+1);
		scanf("%d",&week[i].date);
		week[i].activity=(char*)malloc(50*sizeof(char));
		printf("enter the activity of the day %d:",i+1);
		scanf("%s",week[i].activity);
	}
}
void read(struct day *week)
{
	for(int i=0;i<7;i++)
{
	printf("day: %d%s%d\n",i+1,week[i].name,week[i].date);
	printf("activity: %s\n",week[i].activity);
}
}
int main(){
	struct day week[7];
	create(week);
	read(week);
	return 0;
}
