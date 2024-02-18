#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int s[MAX];
int top=-1;
void push(int item)
{
	if(top==MAX-1)
{
	printf("overflow");
}
else
{
	top=top+1;
	s[top]=item;
}
}
int pop()
{
int item;
if(top==-1)
{
printf("underflow");
}
else
{
item=s[top];
printf("the popped element is %d",item);
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
printf("\n stack is empty");
}
else
{
printf("\n stack elements are:\n");
for(i=top;i>=0;i--)
printf("%d\n",s[i]);
}
}
void palindrome()
{
int flag=1,i;
printf("stack elements are:\n");
for(i=top;i>=0;i--)
printf("%d",s[i]);
printf("\n reverse of stack are:");
for(i=0;i<=top;i++)
printf("%d",s[i]);
for(i=0;i<=top/2;i++)
{
if(s[i]!=s[top-i])
{
flag=0;
break;
}
}
if(flag==1)
{
printf("its an palindrome");
}
else
{
printf("its not an palindrome");
}  
void main()
{
int choice,item;
while(1)
{
printf("\n Menu ");
printf("\n 1.Push");
printf("\n 2.Pop");
printf("\n 3.palindrome");
printf("\n 4.display");
printf("\n 5.exit");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice);
{
case 1:printf("enter an element to push:");
       scanf("%d",&item);
       push(item);
       break;
case 2:printf("enter an element to be removed:");
       scanf("%d",&item);
       pop(item);
       break;
case 3:display();
       break;
case 4:palindrome();
       break;
case 5:exit(1);
default:printf("please enter valid choice");
       break;
}
}
}    

