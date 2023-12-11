#include<stdio.h>
int stack[100],n,i,x,top,choice,key,f;
void push(void);
void pop(void);
void display(void);
int main()
{
top=-1;
printf("enter the size of stack:");
scanf("%d",&n);
printf("stack operations using array:");
printf("\n\t.........................");
printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.exit");

do
{
printf("enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("EXIT POINT");
break;
}
default:
{
printf("\n\tplease enter a valid choice(1/2/3/4)");
}
}
}
while(choice!=4);
return 0;
}

void push()
{
if(top>=n-1)
{
printf("stack is overflow");
}
else
{
printf("enter a number to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}

void pop()
{
if(top<=1)
{
printf("stack is underflow");
}
else
{
printf("popped element is %d",stack[top]);
top--;
}
}

void display()
{
if(top>=0)
{
printf("elements in stack:");
for(i=top;i>=0;i--)
printf("%d",stack[i]);
printf("press next choice:");
}
else
{
printf("stack is empty");
}
printf("enter the key to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(stack[i]==key)
{
f=1;
break;
}
}
if(f==1)
{
printf("element found:");
}
else
{
printf("element not found:");
}
}

